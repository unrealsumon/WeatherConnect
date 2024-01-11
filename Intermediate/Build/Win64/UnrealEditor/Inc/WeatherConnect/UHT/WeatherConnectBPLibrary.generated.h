// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeatherConnectBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAddressData;
struct FWeatherData;
#ifdef WEATHERCONNECT_WeatherConnectBPLibrary_generated_h
#error "WeatherConnectBPLibrary.generated.h already included, missing '#pragma once' in WeatherConnectBPLibrary.h"
#endif
#define WEATHERCONNECT_WeatherConnectBPLibrary_generated_h

#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeatherData_Statics; \
	WEATHERCONNECT_API static class UScriptStruct* StaticStruct();


template<> WEATHERCONNECT_API UScriptStruct* StaticStruct<struct FWeatherData>();

#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAddressData_Statics; \
	WEATHERCONNECT_API static class UScriptStruct* StaticStruct();


template<> WEATHERCONNECT_API UScriptStruct* StaticStruct<struct FAddressData>();

#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_91_DELEGATE \
WEATHERCONNECT_API void FDelegateOnCompletedWeatherRequest_DelegateWrapper(const FScriptDelegate& DelegateOnCompletedWeatherRequest, bool bIsFound, FWeatherData WeatherInfo);


#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_93_DELEGATE \
WEATHERCONNECT_API void FDelegateOnCompletedAddressRequest_DelegateWrapper(const FScriptDelegate& DelegateOnCompletedAddressRequest, bool bIsFound, FAddressData AddressInfo);


#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_SPARSE_DATA
#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAddressDetail); \
	DECLARE_FUNCTION(execGetWeatherDetail);


#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAddressDetail); \
	DECLARE_FUNCTION(execGetWeatherDetail);


#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_ACCESSORS
#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeatherConnectBPLibrary(); \
	friend struct Z_Construct_UClass_UWeatherConnectBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UWeatherConnectBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeatherConnect"), NO_API) \
	DECLARE_SERIALIZER(UWeatherConnectBPLibrary)


#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUWeatherConnectBPLibrary(); \
	friend struct Z_Construct_UClass_UWeatherConnectBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UWeatherConnectBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WeatherConnect"), NO_API) \
	DECLARE_SERIALIZER(UWeatherConnectBPLibrary)


#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherConnectBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherConnectBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherConnectBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherConnectBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherConnectBPLibrary(UWeatherConnectBPLibrary&&); \
	NO_API UWeatherConnectBPLibrary(const UWeatherConnectBPLibrary&); \
public: \
	NO_API virtual ~UWeatherConnectBPLibrary();


#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeatherConnectBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeatherConnectBPLibrary(UWeatherConnectBPLibrary&&); \
	NO_API UWeatherConnectBPLibrary(const UWeatherConnectBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeatherConnectBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeatherConnectBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeatherConnectBPLibrary) \
	NO_API virtual ~UWeatherConnectBPLibrary();


#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_95_PROLOG
#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_SPARSE_DATA \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_RPC_WRAPPERS \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_ACCESSORS \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_INCLASS \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_SPARSE_DATA \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_ACCESSORS \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_INCLASS_NO_PURE_DECLS \
	FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h_98_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WeatherConnectBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEATHERCONNECT_API UClass* StaticClass<class UWeatherConnectBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WeatherPluginProject_Plugins_WeatherConnect_Source_WeatherConnect_Public_WeatherConnectBPLibrary_h


#define FOREACH_ENUM_EWEATHER(op) \
	op(EWeather::ClearSky) \
	op(EWeather::MainlyCLear) \
	op(EWeather::PartlyCloudy) \
	op(EWeather::Overcast) \
	op(EWeather::Fog) \
	op(EWeather::Drizzle) \
	op(EWeather::RainLight) \
	op(EWeather::RainModerate) \
	op(EWeather::RainHeavy) \
	op(EWeather::SnowLight) \
	op(EWeather::SnowModerate) \
	op(EWeather::SnowHeavy) \
	op(EWeather::Thunderstorm) 

enum class EWeather : uint8;
template<> struct TIsUEnumClass<EWeather> { enum { Value = true }; };
template<> WEATHERCONNECT_API UEnum* StaticEnum<EWeather>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
