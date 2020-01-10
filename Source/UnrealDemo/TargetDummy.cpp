// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetDummy.h"

// Sets default values
ATargetDummy::ATargetDummy() : WaypointIndex(0)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ATargetPoint* ATargetDummy::GetNextWaypoint()
{
	auto waypoint = Waypoints[WaypointIndex++];
	WaypointIndex %= Waypoints.Num();
	return waypoint;
}

// Called when the game starts or when spawned
void ATargetDummy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetDummy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATargetDummy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

