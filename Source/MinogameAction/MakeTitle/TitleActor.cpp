// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleActor.h"

// Sets default values
ATitleActor::ATitleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATitleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATitleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

