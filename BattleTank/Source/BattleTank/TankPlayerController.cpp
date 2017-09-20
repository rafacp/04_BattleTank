// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	ATank* Tank = GetControlledTank();
	if (!Tank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController::GetControlledTank() = null"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController::GetControlledTank() = %s"), *(Tank->GetName()));
	}
}
