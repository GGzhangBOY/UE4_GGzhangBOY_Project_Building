// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MarkPluginBPLibrary.h"
#include "MarkPlugin.h"

UMarkPluginBPLibrary::UMarkPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

TArray<AActor*> UMarkPluginBPLibrary::GetActorWithUserTag(UObject *WorldContextObject,FName Tag)
{
	TArray<AActor*> U_Actors;
	UGameplayStatics::GetAllActorsWithTag(WorldContextObject, Tag, U_Actors);
	return U_Actors;
}

