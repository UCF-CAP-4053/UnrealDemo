// Fill out your copyright notice in the Description page of Project Settings.


#include "MrBoom.h"

// Sets default values
AMrBoom::AMrBoom()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMrBoom::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMrBoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMrBoom::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

