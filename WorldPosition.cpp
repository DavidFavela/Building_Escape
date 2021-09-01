// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldPosition.h"
#include "GameFramework/Actor.h"
#include "Math/Vector.h"

// Sets default values for this component's properties
UWorldPosition::UWorldPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWorldPosition::BeginPlay()
{
	Super::BeginPlay();
	FString ObjectName = GetOwner()->GetName();
	FVector OPosition = GetOwner()->GetActorLocation();
	FString SPosition = OPosition.ToString();
	FString* PtrPosition = &SPosition;
	//FString ObjectPosition = GetOwner()->GetLocation();
	FString* Ptr_OName = &ObjectName;
	UE_LOG(LogTemp, Warning, TEXT("This object's name is: %s and its position is %s"), **Ptr_OName, **PtrPosition);
	
	// ...
	
}


// Called every frame
void UWorldPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

