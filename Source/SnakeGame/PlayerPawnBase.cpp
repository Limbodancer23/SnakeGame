// Fill out your copyright notice in the Description page of Project Settings.
// new init
#include "PlayerPawnBase.h"
#include "Camera/CameraComponent.h"
#include "SnakeBase.h"
#include "Food.h"
#include "Components/InputComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
APlayerPawnBase::APlayerPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PawnCamera"));
	RootComponent = PawnCamera;
}

// Called when the game starts or when spawned
void APlayerPawnBase::BeginPlay()
{
	Super::BeginPlay();
	SetActorRotation(FRotator(-90, 0, 0));
	CreateSnakeActor();
	SpawnFood();

}

// Called every frame
void APlayerPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!IsValid(FoodActor))
	{
		SpawnFood();
	}

}

// Called to bind functionality to input
void APlayerPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Vertical", this, &APlayerPawnBase::HandlePlayerVerticalImput);
	PlayerInputComponent->BindAxis("Horizontal", this, &APlayerPawnBase::HandlePlayerHorizontalImput);
}

void APlayerPawnBase::CreateSnakeActor() {
	SnakeActor = GetWorld()->SpawnActor<ASnakeBase>(SnakeActorClass, FTransform());
}

void APlayerPawnBase::HandlePlayerVerticalImput(float value)
{
	if (IsValid(SnakeActor)) {
		if (value > 0 && SnakeActor->LastMoveDirection != EMovementDirection::DOWN)
		{
			SnakeActor->LastMoveDirection = EMovementDirection::UP;
		}
		else if (value < 0 && SnakeActor->LastMoveDirection != EMovementDirection::UP) {
			SnakeActor->LastMoveDirection = EMovementDirection::DOWN;
		}
	}
}

void APlayerPawnBase::HandlePlayerHorizontalImput(float value)
{
	if (IsValid(SnakeActor)) {
		if (value > 0 && SnakeActor->LastMoveDirection != EMovementDirection::LEFT)
		{
			SnakeActor->LastMoveDirection = EMovementDirection::RIGHT;
		}
		else if (value < 0 && SnakeActor->LastMoveDirection != EMovementDirection::RIGHT) {
			SnakeActor->LastMoveDirection = EMovementDirection::LEFT;
		}
	}
}

void APlayerPawnBase::SpawnFood()
{
	FVector NewLocaction = FVector(FMath::RandRange(-950, 0), FMath::RandRange(-950, 0), 30);
	FTransform NewTransform(NewLocaction);
	FoodActor = GetWorld()->SpawnActor<AFood>(FoodActorClass, NewTransform);
	
}

 