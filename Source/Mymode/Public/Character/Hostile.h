// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/Base.h"
#include "Interface/MyInterface.h"
#include "Hostile.generated.h"


/**
 * 
 */
UCLASS()
class MYMODE_API AHostile : public ABase, public IMyInterface
{
	GENERATED_BODY()
	
	public:
		AHostile();

		virtual void HighlightActor() override;
		virtual void UnhighlightActor() override;

		UPROPERTY(BlueprintReadOnly)
		bool bHighlighted = false;
};
