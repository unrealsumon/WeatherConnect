// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Interfaces/IHttpRequest.h"
#include "WeatherConnectBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/


UENUM(BlueprintType)
enum class EWeather : uint8
{
	ClearSky UMETA(DisplayName = "Clear Sky"),
	MainlyCLear	UMETA(DisplayName = "Mainly Clear"),
	PartlyCloudy	UMETA(DisplayName = "Partly Cloudy"),
	Overcast	UMETA(DisplayName = "Overcast"),
	Fog	UMETA(DisplayName = "Fog"),
	Drizzle	UMETA(DisplayName = "Drizzle"),
	RainLight	UMETA(DisplayName = "Rain Light"),
	RainModerate	UMETA(DisplayName = "Rain Moderate"),
	RainHeavy	UMETA(DisplayName = "Rain Heavy"),
	SnowLight	UMETA(DisplayName = "Snow Light"),
	SnowModerate UMETA(DisplayName = "Snow Moderate"),
	SnowHeavy UMETA(DisplayName = "Snow Heavy"),
	Thunderstorm	UMETA(DisplayName = "ThunderStorm")

};

USTRUCT(BlueprintType)
struct FWeatherData
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
		EWeather EWeather;

	UPROPERTY(BlueprintReadWrite)
		float TemperatureC;

	UPROPERTY(BlueprintReadWrite)
		float WindSpeed;

	UPROPERTY(BlueprintReadWrite)
		float WindDirection;

	UPROPERTY(BlueprintReadWrite)
		bool IsDay;

	UPROPERTY(BlueprintReadWrite)
		FString DateTime;

};


USTRUCT(BlueprintType)
struct FAddressData
{
	GENERATED_USTRUCT_BODY()
public:	

	UPROPERTY(BlueprintReadWrite)
		float Latitude;

	UPROPERTY(BlueprintReadWrite)
		float Longitude;	

	UPROPERTY(BlueprintReadWrite)
		FString DisplayName;

};

DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnCompletedWeatherRequest, bool, bIsFound, FWeatherData, WeatherInfo);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FDelegateOnCompletedAddressRequest, bool, bIsFound, FAddressData, AddressInfo);

UCLASS()
class UWeatherConnectBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		// delegate s
	static FDelegateOnCompletedWeatherRequest DelegateOnCompletedWeatherRequest;
	static FDelegateOnCompletedAddressRequest DelegateOnCompletedAddressRequest;

	// Calls weather API
	UFUNCTION(BlueprintCallable, Category = "WeatherConnect", meta = (DisplayName = "Get Weather Details", DisplaySubName = "Calls Weather API"))
		static void GetWeatherDetail(float Latitude, float Longitude, FDelegateOnCompletedWeatherRequest OnGetWeatherDetail);

	// Calls weather API
	UFUNCTION(BlueprintCallable, Category = "WeatherConnect", meta = (DisplayName = "Get Address Details", DisplaySubName = "Calls Address API"))
		static void GetAddressDetail(FString Address, FDelegateOnCompletedAddressRequest OnGetAddressDetail);
private:
	// Callback functions
	static void OnCompletedWeatherRequest(FHttpRequestPtr request, FHttpResponsePtr response, bool bWasSuccess);

	static void OnCompletedAddressRequest(FHttpRequestPtr request, FHttpResponsePtr response, bool bWasSuccess);
};
