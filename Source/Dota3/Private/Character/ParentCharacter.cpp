


#include "Character/ParentCharacter.h"


AParentCharacter::AParentCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AParentCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


