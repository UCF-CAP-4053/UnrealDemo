// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TargetDummy.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MrBoom.generated.h"

UCLASS()
class UNREALDEMO_API AMrBoom : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMrBoom();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ATargetDummy* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Range;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
