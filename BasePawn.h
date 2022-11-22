// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"


UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	void HandleDestruction();

protected:

	void RotateTurret(FVector LookAtTarget);

	void Fire();

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "True"))
	class UCapsuleComponent *CapsuleComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "True"))
	UStaticMeshComponent *BaseMash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "True"))
	UStaticMeshComponent *TurrentMash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "True"))
	USceneComponent *ProjectileSpawnPoint;

	UPROPERTY(EditDefaultsOnly,Category="Combat")
	TSubclassOf<class AProjecttile>ProjecttileClass;

	UPROPERTY(EditAnywhere,Category = "Combat")
	UParticleSystem* DeathParticle;

	UPROPERTY(EditAnywhere, Category = "Combat")
	class USoundBase* DeathSound;

	UPROPERTY(EditAnywhere,category = "Combat")
	TSubclassOf<class UCameraShakeBase>DeathCameraShakeClass;

};
