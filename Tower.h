// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 *
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();

private:

	class ATank* Tank;

	UPROPERTY(EditAnywhere,Category = "Combat")
	float FireRange = 300.f;

	FTimerHandle FireTimeHandler;
    

    float FireTime = 2.f;

    void CheckFireCondition();

	bool InFireRange();
};
