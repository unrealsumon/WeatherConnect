// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeatherConnect/Public/WeatherConnectBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeatherConnectBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WeatherConnect();
	WEATHERCONNECT_API UClass* Z_Construct_UClass_UWeatherConnectBPLibrary();
	WEATHERCONNECT_API UClass* Z_Construct_UClass_UWeatherConnectBPLibrary_NoRegister();
	WEATHERCONNECT_API UEnum* Z_Construct_UEnum_WeatherConnect_EWeather();
	WEATHERCONNECT_API UFunction* Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature();
	WEATHERCONNECT_API UFunction* Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature();
	WEATHERCONNECT_API UScriptStruct* Z_Construct_UScriptStruct_FAddressData();
	WEATHERCONNECT_API UScriptStruct* Z_Construct_UScriptStruct_FWeatherData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeather;
	static UEnum* EWeather_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeather.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeather.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WeatherConnect_EWeather, (UObject*)Z_Construct_UPackage__Script_WeatherConnect(), TEXT("EWeather"));
		}
		return Z_Registration_Info_UEnum_EWeather.OuterSingleton;
	}
	template<> WEATHERCONNECT_API UEnum* StaticEnum<EWeather>()
	{
		return EWeather_StaticEnum();
	}
	struct Z_Construct_UEnum_WeatherConnect_EWeather_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WeatherConnect_EWeather_Statics::Enumerators[] = {
		{ "EWeather::ClearSky", (int64)EWeather::ClearSky },
		{ "EWeather::MainlyCLear", (int64)EWeather::MainlyCLear },
		{ "EWeather::PartlyCloudy", (int64)EWeather::PartlyCloudy },
		{ "EWeather::Overcast", (int64)EWeather::Overcast },
		{ "EWeather::Fog", (int64)EWeather::Fog },
		{ "EWeather::Drizzle", (int64)EWeather::Drizzle },
		{ "EWeather::RainLight", (int64)EWeather::RainLight },
		{ "EWeather::RainModerate", (int64)EWeather::RainModerate },
		{ "EWeather::RainHeavy", (int64)EWeather::RainHeavy },
		{ "EWeather::SnowLight", (int64)EWeather::SnowLight },
		{ "EWeather::SnowModerate", (int64)EWeather::SnowModerate },
		{ "EWeather::SnowHeavy", (int64)EWeather::SnowHeavy },
		{ "EWeather::Thunderstorm", (int64)EWeather::Thunderstorm },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WeatherConnect_EWeather_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClearSky.DisplayName", "Clear Sky" },
		{ "ClearSky.Name", "EWeather::ClearSky" },
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "Drizzle.DisplayName", "Drizzle" },
		{ "Drizzle.Name", "EWeather::Drizzle" },
		{ "Fog.DisplayName", "Fog" },
		{ "Fog.Name", "EWeather::Fog" },
		{ "MainlyCLear.DisplayName", "Mainly Clear" },
		{ "MainlyCLear.Name", "EWeather::MainlyCLear" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
		{ "Overcast.DisplayName", "Overcast" },
		{ "Overcast.Name", "EWeather::Overcast" },
		{ "PartlyCloudy.DisplayName", "Partly Cloudy" },
		{ "PartlyCloudy.Name", "EWeather::PartlyCloudy" },
		{ "RainHeavy.DisplayName", "Rain Heavy" },
		{ "RainHeavy.Name", "EWeather::RainHeavy" },
		{ "RainLight.DisplayName", "Rain Light" },
		{ "RainLight.Name", "EWeather::RainLight" },
		{ "RainModerate.DisplayName", "Rain Moderate" },
		{ "RainModerate.Name", "EWeather::RainModerate" },
		{ "SnowHeavy.DisplayName", "Snow Heavy" },
		{ "SnowHeavy.Name", "EWeather::SnowHeavy" },
		{ "SnowLight.DisplayName", "Snow Light" },
		{ "SnowLight.Name", "EWeather::SnowLight" },
		{ "SnowModerate.DisplayName", "Snow Moderate" },
		{ "SnowModerate.Name", "EWeather::SnowModerate" },
		{ "Thunderstorm.DisplayName", "ThunderStorm" },
		{ "Thunderstorm.Name", "EWeather::Thunderstorm" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WeatherConnect_EWeather_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WeatherConnect,
		nullptr,
		"EWeather",
		"EWeather",
		Z_Construct_UEnum_WeatherConnect_EWeather_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WeatherConnect_EWeather_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WeatherConnect_EWeather_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WeatherConnect_EWeather_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WeatherConnect_EWeather()
	{
		if (!Z_Registration_Info_UEnum_EWeather.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeather.InnerSingleton, Z_Construct_UEnum_WeatherConnect_EWeather_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeather.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeatherData;
class UScriptStruct* FWeatherData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeatherData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeatherData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeatherData, (UObject*)Z_Construct_UPackage__Script_WeatherConnect(), TEXT("WeatherData"));
	}
	return Z_Registration_Info_UScriptStruct_WeatherData.OuterSingleton;
}
template<> WEATHERCONNECT_API UScriptStruct* StaticStruct<FWeatherData>()
{
	return FWeatherData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeatherData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EWeather_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EWeather_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EWeather;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDay_MetaData[];
#endif
		static void NewProp_IsDay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeatherData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeatherData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_EWeather_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_EWeather_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_EWeather = { "EWeather", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeatherData, EWeather), Z_Construct_UEnum_WeatherConnect_EWeather, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_EWeather_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_EWeather_MetaData)) }; // 133349355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_TemperatureC_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_TemperatureC = { "TemperatureC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeatherData, TemperatureC), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_TemperatureC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_TemperatureC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed = { "WindSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeatherData, WindSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindDirection_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindDirection = { "WindDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeatherData, WindDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_IsDay_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_IsDay_SetBit(void* Obj)
	{
		((FWeatherData*)Obj)->IsDay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_IsDay = { "IsDay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWeatherData), &Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_IsDay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_IsDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_IsDay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_DateTime_MetaData[] = {
		{ "Category", "WeatherData" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeatherData, DateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_DateTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeatherData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_EWeather_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_EWeather,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_TemperatureC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_WindDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_IsDay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeatherData_Statics::NewProp_DateTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeatherData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeatherConnect,
		nullptr,
		&NewStructOps,
		"WeatherData",
		sizeof(FWeatherData),
		alignof(FWeatherData),
		Z_Construct_UScriptStruct_FWeatherData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeatherData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeatherData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeatherData()
	{
		if (!Z_Registration_Info_UScriptStruct_WeatherData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeatherData.InnerSingleton, Z_Construct_UScriptStruct_FWeatherData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeatherData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddressData;
class UScriptStruct* FAddressData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddressData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddressData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddressData, (UObject*)Z_Construct_UPackage__Script_WeatherConnect(), TEXT("AddressData"));
	}
	return Z_Registration_Info_UScriptStruct_AddressData.OuterSingleton;
}
template<> WEATHERCONNECT_API UScriptStruct* StaticStruct<FAddressData>()
{
	return FAddressData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAddressData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddressData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddressData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddressData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "AddressData" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddressData, Latitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "AddressData" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddressData, Longitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "AddressData" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddressData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddressData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddressData_Statics::NewProp_DisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddressData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WeatherConnect,
		nullptr,
		&NewStructOps,
		"AddressData",
		sizeof(FAddressData),
		alignof(FAddressData),
		Z_Construct_UScriptStruct_FAddressData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddressData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddressData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddressData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddressData()
	{
		if (!Z_Registration_Info_UScriptStruct_AddressData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddressData.InnerSingleton, Z_Construct_UScriptStruct_FAddressData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AddressData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics
	{
		struct _Script_WeatherConnect_eventDelegateOnCompletedWeatherRequest_Parms
		{
			bool bIsFound;
			FWeatherData WeatherInfo;
		};
		static void NewProp_bIsFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeatherInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::NewProp_bIsFound_SetBit(void* Obj)
	{
		((_Script_WeatherConnect_eventDelegateOnCompletedWeatherRequest_Parms*)Obj)->bIsFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::NewProp_bIsFound = { "bIsFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_WeatherConnect_eventDelegateOnCompletedWeatherRequest_Parms), &Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::NewProp_bIsFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::NewProp_WeatherInfo = { "WeatherInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WeatherConnect_eventDelegateOnCompletedWeatherRequest_Parms, WeatherInfo), Z_Construct_UScriptStruct_FWeatherData, METADATA_PARAMS(nullptr, 0) }; // 678669147
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::NewProp_bIsFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::NewProp_WeatherInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeatherConnect, nullptr, "DelegateOnCompletedWeatherRequest__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::_Script_WeatherConnect_eventDelegateOnCompletedWeatherRequest_Parms), Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDelegateOnCompletedWeatherRequest_DelegateWrapper(const FScriptDelegate& DelegateOnCompletedWeatherRequest, bool bIsFound, FWeatherData WeatherInfo)
{
	struct _Script_WeatherConnect_eventDelegateOnCompletedWeatherRequest_Parms
	{
		bool bIsFound;
		FWeatherData WeatherInfo;
	};
	_Script_WeatherConnect_eventDelegateOnCompletedWeatherRequest_Parms Parms;
	Parms.bIsFound=bIsFound ? true : false;
	Parms.WeatherInfo=WeatherInfo;
	DelegateOnCompletedWeatherRequest.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics
	{
		struct _Script_WeatherConnect_eventDelegateOnCompletedAddressRequest_Parms
		{
			bool bIsFound;
			FAddressData AddressInfo;
		};
		static void NewProp_bIsFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddressInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::NewProp_bIsFound_SetBit(void* Obj)
	{
		((_Script_WeatherConnect_eventDelegateOnCompletedAddressRequest_Parms*)Obj)->bIsFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::NewProp_bIsFound = { "bIsFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_WeatherConnect_eventDelegateOnCompletedAddressRequest_Parms), &Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::NewProp_bIsFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::NewProp_AddressInfo = { "AddressInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_WeatherConnect_eventDelegateOnCompletedAddressRequest_Parms, AddressInfo), Z_Construct_UScriptStruct_FAddressData, METADATA_PARAMS(nullptr, 0) }; // 1534749357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::NewProp_bIsFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::NewProp_AddressInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_WeatherConnect, nullptr, "DelegateOnCompletedAddressRequest__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::_Script_WeatherConnect_eventDelegateOnCompletedAddressRequest_Parms), Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDelegateOnCompletedAddressRequest_DelegateWrapper(const FScriptDelegate& DelegateOnCompletedAddressRequest, bool bIsFound, FAddressData AddressInfo)
{
	struct _Script_WeatherConnect_eventDelegateOnCompletedAddressRequest_Parms
	{
		bool bIsFound;
		FAddressData AddressInfo;
	};
	_Script_WeatherConnect_eventDelegateOnCompletedAddressRequest_Parms Parms;
	Parms.bIsFound=bIsFound ? true : false;
	Parms.AddressInfo=AddressInfo;
	DelegateOnCompletedAddressRequest.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UWeatherConnectBPLibrary::execGetAddressDetail)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetAddressDetail);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeatherConnectBPLibrary::GetAddressDetail(Z_Param_Address,FDelegateOnCompletedAddressRequest(Z_Param_OnGetAddressDetail));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWeatherConnectBPLibrary::execGetWeatherDetail)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Latitude);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Longitude);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnGetWeatherDetail);
		P_FINISH;
		P_NATIVE_BEGIN;
		UWeatherConnectBPLibrary::GetWeatherDetail(Z_Param_Latitude,Z_Param_Longitude,FDelegateOnCompletedWeatherRequest(Z_Param_OnGetWeatherDetail));
		P_NATIVE_END;
	}
	void UWeatherConnectBPLibrary::StaticRegisterNativesUWeatherConnectBPLibrary()
	{
		UClass* Class = UWeatherConnectBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAddressDetail", &UWeatherConnectBPLibrary::execGetAddressDetail },
			{ "GetWeatherDetail", &UWeatherConnectBPLibrary::execGetWeatherDetail },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics
	{
		struct WeatherConnectBPLibrary_eventGetAddressDetail_Parms
		{
			FString Address;
			FScriptDelegate OnGetAddressDetail;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGetAddressDetail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeatherConnectBPLibrary_eventGetAddressDetail_Parms, Address), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::NewProp_OnGetAddressDetail = { "OnGetAddressDetail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeatherConnectBPLibrary_eventGetAddressDetail_Parms, OnGetAddressDetail), Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedAddressRequest__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 7687814
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::NewProp_OnGetAddressDetail,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeatherConnect" },
		{ "Comment", "// Calls weather API\n" },
		{ "DisplayName", "Get Address Details" },
		{ "DisplaySubName", "Calls Address API" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
		{ "ToolTip", "Calls weather API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherConnectBPLibrary, nullptr, "GetAddressDetail", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::WeatherConnectBPLibrary_eventGetAddressDetail_Parms), Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics
	{
		struct WeatherConnectBPLibrary_eventGetWeatherDetail_Parms
		{
			float Latitude;
			float Longitude;
			FScriptDelegate OnGetWeatherDetail;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Latitude;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Longitude;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGetWeatherDetail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeatherConnectBPLibrary_eventGetWeatherDetail_Parms, Latitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeatherConnectBPLibrary_eventGetWeatherDetail_Parms, Longitude), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::NewProp_OnGetWeatherDetail = { "OnGetWeatherDetail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WeatherConnectBPLibrary_eventGetWeatherDetail_Parms, OnGetWeatherDetail), Z_Construct_UDelegateFunction_WeatherConnect_DelegateOnCompletedWeatherRequest__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3735072415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::NewProp_OnGetWeatherDetail,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeatherConnect" },
		{ "Comment", "// Calls weather API\n" },
		{ "DisplayName", "Get Weather Details" },
		{ "DisplaySubName", "Calls Weather API" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
		{ "ToolTip", "Calls weather API" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeatherConnectBPLibrary, nullptr, "GetWeatherDetail", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::WeatherConnectBPLibrary_eventGetWeatherDetail_Parms), Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeatherConnectBPLibrary);
	UClass* Z_Construct_UClass_UWeatherConnectBPLibrary_NoRegister()
	{
		return UWeatherConnectBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWeatherConnectBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeatherConnectBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WeatherConnect,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeatherConnectBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeatherConnectBPLibrary_GetAddressDetail, "GetAddressDetail" }, // 2822422400
		{ &Z_Construct_UFunction_UWeatherConnectBPLibrary_GetWeatherDetail, "GetWeatherDetail" }, // 2444669770
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeatherConnectBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeatherConnectBPLibrary.h" },
		{ "ModuleRelativePath", "Public/WeatherConnectBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeatherConnectBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeatherConnectBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeatherConnectBPLibrary_Statics::ClassParams = {
		&UWeatherConnectBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeatherConnectBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeatherConnectBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeatherConnectBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UWeatherConnectBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeatherConnectBPLibrary.OuterSingleton, Z_Construct_UClass_UWeatherConnectBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeatherConnectBPLibrary.OuterSingleton;
	}
	template<> WEATHERCONNECT_API UClass* StaticClass<UWeatherConnectBPLibrary>()
	{
		return UWeatherConnectBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeatherConnectBPLibrary);
	UWeatherConnectBPLibrary::~UWeatherConnectBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics::EnumInfo[] = {
		{ EWeather_StaticEnum, TEXT("EWeather"), &Z_Registration_Info_UEnum_EWeather, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 133349355U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FWeatherData::StaticStruct, Z_Construct_UScriptStruct_FWeatherData_Statics::NewStructOps, TEXT("WeatherData"), &Z_Registration_Info_UScriptStruct_WeatherData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeatherData), 678669147U) },
		{ FAddressData::StaticStruct, Z_Construct_UScriptStruct_FAddressData_Statics::NewStructOps, TEXT("AddressData"), &Z_Registration_Info_UScriptStruct_AddressData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddressData), 1534749357U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeatherConnectBPLibrary, UWeatherConnectBPLibrary::StaticClass, TEXT("UWeatherConnectBPLibrary"), &Z_Registration_Info_UClass_UWeatherConnectBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeatherConnectBPLibrary), 3922933311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_84677874(TEXT("/Script/WeatherConnect"),
		Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
