// Fill out your copyright notice in the Description page of Project Settings.

#include "MyUserWidget.h"
#include <TextBlock.h>

int32 TestConsoleValue = 0;
static FAutoConsoleVariableRef CVarDenyClientActivation(
	TEXT("test.conval"),
	TestConsoleValue,
	TEXT("Just a test console value"),
	ECVF_Default
);

void UMyUserWidget::RefreshText()
{
	ShownText->SetText(FText::FromString(FString::Printf(TEXT("L: %d"), TestConsoleValue)));
}
