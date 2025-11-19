// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "Base.generated.h"

class UAbilitySystemComponent;	
class UAttributeSet;

UCLASS(Abstract)
class MYMODE_API ABase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	ABase(); 
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;	
	UAttributeSet* GetAttributeSet() const { return  AttributeSet; }
	
protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<UStaticMeshComponent> Weapon;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

};
