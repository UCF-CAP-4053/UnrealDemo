// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine\TargetPoint.h"

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TargetDummy.generated.h"

UCLASS()
class UNREALDEMO_API ATargetDummy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATargetDummy();

	UFUNCTION(BlueprintCallable)
	ATargetPoint* GetWaypoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ATargetPoint*> Waypoints;

private:
	unsigned WaypointIndex;
};
