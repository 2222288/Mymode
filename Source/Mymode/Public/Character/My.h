#pragma once

#include "CoreMinimal.h"
#include "Character/Base.h" // 继承 Base
#include "InputActionValue.h" // 确保您的 Build.cs 里加了 "EnhancedInput" 模块
#include "My.generated.h"

UCLASS()
class MYMODE_API AMy : public ABase
{
	GENERATED_BODY()

public:
	AMy();

	// 移过来的按键绑定
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// 3D ACT 专属移动函数
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

private:
	// 移过来的摄像机组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	// 这里假设您在蓝图里会设置这些 Input Action
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;
};