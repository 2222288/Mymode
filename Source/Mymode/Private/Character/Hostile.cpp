// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Hostile.h"

#include "AbilitySystem/MyAbilitySystemComponent.h"
#include "MyMode/MyMode.h"


AHostile::AHostile()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UMyAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);

	AttributeSet = CreateDefaultSubobject<UAttributeSet>("AttributeSet");
}

void AHostile::HighlightActor()
{
	bHighlighted = true;
}

void AHostile::UnhighlightActor()
{
	bHighlighted = true;
}
