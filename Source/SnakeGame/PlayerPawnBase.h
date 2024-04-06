#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawnBase.generated.h"

class UCameraComponent;
class ASnakeBase;
class AFood;

UCLASS()
class SNAKEGAME_API APlayerPawnBase : public APawn
{

	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawnBase();
	UPROPERTY(BluePrintReadWrite)
	UCameraComponent* PawnCamera;

	UPROPERTY(BluePrintReadWrite)
	ASnakeBase* SnakeActor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASnakeBase> SnakeActorClass;

	UPROPERTY(BluePrintReadWrite)
	AFood* FoodActor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AFood> FoodActorClass;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CreateSnakeActor();

	UFUNCTION()
	void HandlePlayerVerticalImput(float value);

	UFUNCTION()
	void HandlePlayerHorizontalImput(float value);

	UFUNCTION()
	void SpawnFood();
};
