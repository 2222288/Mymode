// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameplayTagContainer.h"
#include "MyPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class IMyInterface;

/**
 * 
 */
UCLASS()
class MYMODE_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMyPlayerController();
	virtual void PlayerTick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
private:
	//输入映射上下文
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> PortyContext;
	//视角
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> LookAction;
	//移动
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;
	//跳跃
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> JumpAction;
	//移动逻辑处理
	void Move(const FInputActionValue& InputActionValue);
	//视角逻辑处理
	void Look(const FInputActionValue& InputActionValue);
	// 当 "跳跃" 键 "按下" (Started) 时调用
	void StartJump(const FInputActionValue& InputActionValue);
	// 当 "跳跃" 键 "松开" (Completed) 时调用
	void StopJump(const FInputActionValue& InputActionValue);
	// 光标追踪
	void CursorTrace();

	TScriptInterface<IMyInterface> LastActor;
	TScriptInterface<IMyInterface> ThisActor;
};
