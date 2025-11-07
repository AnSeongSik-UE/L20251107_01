// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

//CDO 초기화 할 때 용도, class	 구조 잡거나 초기화 할 때
AMyGameModeBase::AMyGameModeBase()
{
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Hello World"));
	}
}
