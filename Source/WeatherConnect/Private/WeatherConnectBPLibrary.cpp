// Copyright Epic Games, Inc. All Rights Reserved.

#include "WeatherConnectBPLibrary.h"
#include "WeatherConnect.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"


UWeatherConnectBPLibrary::UWeatherConnectBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}



FDelegateOnCompletedWeatherRequest UWeatherConnectBPLibrary::DelegateOnCompletedWeatherRequest;
FDelegateOnCompletedAddressRequest UWeatherConnectBPLibrary::DelegateOnCompletedAddressRequest;

void UWeatherConnectBPLibrary::GetWeatherDetail(float Latitude, float Longitude, FDelegateOnCompletedWeatherRequest OnGetWeatherDetail)
{
	FString APILink = "https://api.open-meteo.com/v1/forecast?latitude=" + FString::SanitizeFloat(Latitude) + "&longitude=" + FString::SanitizeFloat(Longitude) + "&timezone=auto&current_weather=true&temperature_unit=celsius";

	UWeatherConnectBPLibrary::DelegateOnCompletedWeatherRequest = OnGetWeatherDetail;
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetVerb(TEXT("GET"));
	Request->SetURL(APILink);
	Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

	//bind a function which gets called when the request is completed
	Request->OnProcessRequestComplete().BindStatic(&UWeatherConnectBPLibrary::OnCompletedWeatherRequest);

	if (!Request->ProcessRequest())
	{
		// HTTP request failed
		FWeatherData WeatherData = {};
		UWeatherConnectBPLibrary::DelegateOnCompletedWeatherRequest.ExecuteIfBound(false, WeatherData);
	}

}

void UWeatherConnectBPLibrary::OnCompletedWeatherRequest(FHttpRequestPtr RequestIn, FHttpResponsePtr ResponseIn, bool bWasSuccess)
{
	FWeatherData WeatherData = {};
	if (EHttpResponseCodes::IsOk(ResponseIn->GetResponseCode()))
	{
		TSharedPtr<FJsonObject> JsonObject;
		//Create a reader pointer to read the json data
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseIn->GetContentAsString());
		//Deserialize the json data given Reader and the actual object to deserialize
		if (FJsonSerializer::Deserialize(Reader, JsonObject))
		{

			//Get the value of the json object by field name | the result field is coming from the api 			
			TSharedPtr<FJsonObject> CurrentWeather = JsonObject->GetObjectField("Current_Weather");
			int WeatherCode = CurrentWeather->GetIntegerField("weathercode");
			EWeather EWeather;
			switch (WeatherCode)
			{
			case 0:
				EWeather = EWeather::ClearSky;
				break;
			case 1:
				EWeather = EWeather::MainlyCLear;
				break;
			case 2:
				EWeather = EWeather::PartlyCloudy;
				break;
			case 3:
				EWeather = EWeather::Overcast;
				break;
			case 45:
			case 48:
				EWeather = EWeather::Fog;
				break;
			case 51:
			case 53:
			case 55:
			case 56:
			case 57:
				EWeather = EWeather::Drizzle;
				break;
			case 61:
			case 66:
			case 80:
				EWeather = EWeather::RainLight;
				break;
			case 63:
			case 81:
				EWeather = EWeather::RainModerate;
				break;
			case 65:
			case 67:
			case 82:
				EWeather = EWeather::RainHeavy;
				break;
			case 71:
			case 85:
				EWeather = EWeather::SnowLight;
				break;
			case 73:
			case 77:
				EWeather = EWeather::SnowModerate;
				break;
			case 75:
			case 86:
				EWeather = EWeather::SnowHeavy;
				break;
			case 95:
			case 96:
			case 99:
				EWeather = EWeather::Thunderstorm;
			default:
				EWeather = EWeather::ClearSky;

			}

			WeatherData.EWeather = EWeather;
			WeatherData.TemperatureC = CurrentWeather->GetNumberField("temperature");
			WeatherData.WindDirection = CurrentWeather->GetNumberField("winddirection");
			WeatherData.WindSpeed = CurrentWeather->GetNumberField("windspeed");
			WeatherData.DateTime = CurrentWeather->GetStringField("time");
			WeatherData.IsDay = CurrentWeather->GetBoolField("is_day");

			UWeatherConnectBPLibrary::DelegateOnCompletedWeatherRequest.ExecuteIfBound(true, WeatherData);
		}
		else
		{
			UWeatherConnectBPLibrary::DelegateOnCompletedWeatherRequest.ExecuteIfBound(false, WeatherData);
		}
	}
	else
	{
		UWeatherConnectBPLibrary::DelegateOnCompletedWeatherRequest.ExecuteIfBound(false, WeatherData);
	}

}


void UWeatherConnectBPLibrary::GetAddressDetail(FString Address, FDelegateOnCompletedAddressRequest OnGetAddressDetail)
{
	FString APILink = "https://nominatim.openstreetmap.org/?q="+ Address.TrimStartAndEnd().Replace(TEXT(" "), TEXT("%20")).Replace(TEXT(","), TEXT("%20")) + "&format=json&limit=1";

	UWeatherConnectBPLibrary::DelegateOnCompletedAddressRequest = OnGetAddressDetail;
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetVerb(TEXT("GET"));
	Request->SetURL(APILink);
	Request->SetHeader(TEXT("User-Agent"), TEXT("X-UnrealEngine-Agent"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

	//bind a function which gets called when the request is completed
	Request->OnProcessRequestComplete().BindStatic(&UWeatherConnectBPLibrary::OnCompletedAddressRequest);

	if (!Request->ProcessRequest())
	{
		// HTTP request failed
		FAddressData AddressData = {};
		UWeatherConnectBPLibrary::DelegateOnCompletedAddressRequest.ExecuteIfBound(false, AddressData);
	}

}

void UWeatherConnectBPLibrary::OnCompletedAddressRequest(FHttpRequestPtr RequestIn, FHttpResponsePtr ResponseIn, bool bWasSuccess)
{
	FAddressData AddressData= {};
	if (EHttpResponseCodes::IsOk(ResponseIn->GetResponseCode()))
	{
		FString TEmp =  ResponseIn->GetContentAsString().Mid(1, ResponseIn->GetContentAsString().Len()-2);
		
		TSharedPtr<FJsonObject> JsonObject;
		//Create a reader pointer to read the json data
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(TEmp);
		
		
		//Deserialize the json data given Reader and the actual object to deserialize
		if (FJsonSerializer::Deserialize(Reader, JsonObject))
		{		
		

			AddressData.DisplayName = JsonObject->GetStringField("display_name");
			AddressData.Latitude = JsonObject->GetNumberField("lat");
			AddressData.Longitude = JsonObject->GetNumberField("lon");
			

			UWeatherConnectBPLibrary::DelegateOnCompletedAddressRequest.ExecuteIfBound(true, AddressData);
		}
		else
		{
			UWeatherConnectBPLibrary::DelegateOnCompletedAddressRequest.ExecuteIfBound(false, AddressData);
		}
	}
	else
	{
		UWeatherConnectBPLibrary::DelegateOnCompletedAddressRequest.ExecuteIfBound(false, AddressData);
	}

}
