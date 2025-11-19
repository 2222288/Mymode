// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MyPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Character.h"
#include "Interface/MyInterface.h"

AMyPlayerController::AMyPlayerController()
{
	bReplicates = true;	
}

void AMyPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
	
	CursorTrace();
}

void AMyPlayerController::CursorTrace()
{
	FHitResult CursorHit;
	GetHitResultUnderCursor(ECC_Visibility, false, CursorHit);
	if (!CursorHit.bBlockingHit) return;		
	
	LastActor = ThisActor;
	ThisActor = CursorHit.GetActor();

	if (LastActor == nullptr)
	{
		if(ThisActor != nullptr)
		{
			ThisActor->HighlightActor();
		}
		else
		{

		}
	}
	else
	{
		if (ThisActor == nullptr)
		{
			LastActor->UnhighlightActor();
		}
		else
		{
			if (LastActor != ThisActor)
			{
				LastActor->UnhighlightActor();
				ThisActor->HighlightActor();
			}
		}
	}

}



void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(PortyContext);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);
	Subsystem->AddMappingContext(PortyContext, 0);

	bShowMouseCursor = false;
	DefaultMouseCursor = EMouseCursor::Default;

	FInputModeGameOnly InputModeData;

	SetInputMode(InputModeData);

}

void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);
	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMyPlayerController::Move);
	EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMyPlayerController::Look);

	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AMyPlayerController::StartJump);
	EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AMyPlayerController::StopJump);
}

void AMyPlayerController::Move(const FInputActionValue& InputActionValue)
{
	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddMovementInput(ForwardDirection, InputAxisVector.Y);
		ControlledPawn->AddMovementInput(RightDirection, InputAxisVector.X);
	}

}

void AMyPlayerController::Look(const FInputActionValue& InputActionValue)
{

	const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();

	if (APawn* ControlledPawn = GetPawn<APawn>())
	{
		ControlledPawn->AddControllerYawInput(LookAxisVector.X);
		ControlledPawn->AddControllerPitchInput(LookAxisVector.Y);
	}

}

void AMyPlayerController::StartJump(const FInputActionValue& InputActionValue)
{
	// ACharacter* ControlledCharacter = GetPawn<ACharacter>();
	// 我们调用 GetPawn()，并 "尝试" 将其 "Cast" (转换) 为 "ACharacter" (角色)
	// 因为只有 ACharacter 才拥有 "Jump()" 函数
	ACharacter* ControlledCharacter = GetPawn<ACharacter>();

	// if (ControlledCharacter)：
	// 这是一个安全检查。如果 Pwan 成功转换为了 ACharacter (它不是 nullptr)...
	if (ControlledCharacter)
	{
		// ControlledCharacter->Jump();
		// ...我们就调用 ACharacter 的 "内置 Jump()" 函数。
		// 引擎会自动处理剩下的所有事情 (包括网络复制)
		ControlledCharacter->Jump();
	}
}

// (新添加) "StopJump" 函数的实现
void AMyPlayerController::StopJump(const FInputActionValue& InputActionValue)
{
	// ACharacter* ControlledCharacter = GetPawn<ACharacter>();
	// 我们再次获取 ACharacter
	ACharacter* ControlledCharacter = GetPawn<ACharacter>();

	// if (ControlledCharacter)：
	// 再次进行安全检查
	if (ControlledCharacter)
	{
		// ControlledCharacter->StopJumping();
		// ...我们就调用 ACharacter 的 "内置 StopJumping()" 函数。
		// (这会让角色在空中停止上升，实现“按住越久跳得越高”的可变跳跃)
		ControlledCharacter->StopJumping();
	}
}

