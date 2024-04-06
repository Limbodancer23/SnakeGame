// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBase.h"
#include "SnakeElementBase.h"
#include "Interactable.h"

// Sets default values
ASnakeBase::ASnakeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementSize = 100.f;
	MovementSpeed = 10.f;
	LastMoveDirection = EMovementDirection::DOWN;
}

// Called when the game starts or when spawned
void ASnakeBase::BeginPlay()
{
	Super::BeginPlay();
	SetActorTickInterval(MovementSpeed);
	AddSnakeElement(2);
}

// Called every frame
void ASnakeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
}

void ASnakeBase::AddSnakeElement(int ElementsNum)
{
	for (size_t i = 0; i < ElementsNum; i++)
	{
		FVector NewLocation = FVector(SnakeElements.Num() * ElementSize, 0, 0);
		FTransform NewTransform(NewLocation);
		ASnakeElementBase* NewSnakeElem = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		NewSnakeElem->SnakeOwner = this;
		int32 NewElem = SnakeElements.Add(NewSnakeElem);
		if (NewElem == 0)
		{
			NewSnakeElem->SetFirstElementType();
		}
	}
}

void ASnakeBase::Move()
{
	FVector MovementVector(ForceInitToZero);
	switch(LastMoveDirection)
	{
	case EMovementDirection::UP:
		MovementVector.X += ElementSize + MovementSpeed;
		break;
	case EMovementDirection::DOWN:
		MovementVector.X -= ElementSize + MovementSpeed;
		break;
	case EMovementDirection::RIGHT:
		MovementVector.Y += ElementSize + MovementSpeed;
		break;
	case EMovementDirection::LEFT:
		MovementVector.Y -= ElementSize + MovementSpeed;
		break;
	default:
		break;
	}

	//AddActorWorldOffset(MovementVector);
	SnakeElements[0]->ToggleCollision();

	for (int i = SnakeElements.Num() - 1; i > 0; i--)
	{
		ASnakeElementBase* CurrentElement = SnakeElements[i];
		ASnakeElementBase* PrevElement = SnakeElements[i-1];
		FVector PrevLocation = PrevElement->GetActorLocation();
		CurrentElement->SetActorLocation(PrevLocation);
	}
	if (SnakeElements[0]->GetActorLocation().X <= -950.0)
	{
		SnakeElements[0]->SetActorLocation(FVector(0, SnakeElements[0]->GetActorLocation().Y, 0));
	}
	else if (SnakeElements[0]->GetActorLocation().Y <= -950.0)
	{
		SnakeElements[0]->SetActorLocation(FVector(SnakeElements[0]->GetActorLocation().X, 0, 0));
	}
	else if (SnakeElements[0]->GetActorLocation().X >= 50.0)
	{
		SnakeElements[0]->SetActorLocation(FVector(-1000, SnakeElements[0]->GetActorLocation().Y, 0));
	}
	else if (SnakeElements[0]->GetActorLocation().Y >= 50.0)
	{
		SnakeElements[0]->SetActorLocation(FVector(SnakeElements[0]->GetActorLocation().X, -1000, 0));
	}

	SnakeElements[0]->AddActorWorldOffset(MovementVector);
	SnakeElements[0]->ToggleCollision();
	
}

void ASnakeBase::SnakeElementOverlap(ASnakeElementBase* OverlappedElement, AActor* Other)
{
	if (IsValid(OverlappedElement))
	{
		int32 ElemIndex;
		SnakeElements.Find(OverlappedElement, ElemIndex);
		bool bIsFirst = ElemIndex == 0;
		IInteractable* InteractableInterface = Cast<IInteractable>(Other);
		if (InteractableInterface != 0)
		{
			InteractableInterface->Interact(this, bIsFirst);
		}
	}
}

