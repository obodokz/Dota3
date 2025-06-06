#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ParentCharacter.generated.h"

UCLASS()
class DOTA3_API AParentCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	AParentCharacter();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
