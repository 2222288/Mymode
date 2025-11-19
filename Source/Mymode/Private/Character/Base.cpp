// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Base.h"



// Sets default values
ABase::ABase()
{
	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<UStaticMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("hand_r_weapons"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}
UAbilitySystemComponent* ABase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
void ABase::BeginPlay()
{
	Super::BeginPlay();
	
}

