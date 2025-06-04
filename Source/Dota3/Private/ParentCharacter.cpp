


#include "ParentCharacter.h"


AParentCharacter::AParentCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

}


void AParentCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void AParentCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AParentCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

