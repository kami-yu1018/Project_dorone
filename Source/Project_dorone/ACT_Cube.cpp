// Fill out your copyright notice in the Description page of Project Settings.


#include "ACT_Cube.h"

// Sets default values
AACT_Cube::AACT_Cube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	//	衝突させる設定
	MeshComp->SetCollisionProfileName(TEXT("BlockAllDynamic"));

	//	Hitイベントを発生させる
	MeshComp->SetNotifyRigidBodyCollision(true);
}

// Called when the game starts or when spawned
void AACT_Cube::BeginPlay()
{
	Super::BeginPlay();

	//	イベントにバインド
	MeshComp->OnComponentHit.AddDynamic(this, &CubeActor::OnCubeHit);

	void AACT_Cube::OnCubeHit(UPrimitiveComponent * HitComp,
		AActor * OtherActor,
		UPrimitiveComponent * OtherComp,
		FVector NormalImpulse,
		const FHitResult & Hit)
	{
		if (OtherActor && OtherActor->IsA(APawn::StaticClass()))
		{
			UE_LOG(LogTemp, Warning, Text("Cube hit by %s"), *OtherActor);
		}
	}
	
}

// Called every frame
void AACT_Cube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

