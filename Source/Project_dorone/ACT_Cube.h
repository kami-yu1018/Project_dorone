// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ACT_Cube.generated.h"

UCLASS()
class PROJECT_DORONE_API AACT_Cube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AACT_Cube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	UStaticMeshComponent* MeshComp;

	//	�Փ˗p
	UFUNCTION();
	void OnCubeHit(UPrimitiveComponent* HitComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		FVector NormalImpulse,
		const FHitResult& Hit);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
