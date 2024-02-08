// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DolbyAtmosPlugin/Public/DolbyAtmosSpatializationSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDolbyAtmosSpatializationSourceSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
	DOLBYATMOS_API UClass* Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings();
	DOLBYATMOS_API UClass* Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DolbyAtmos();
// End Cross Module References
	void UDolbyGameKitSpatializationSourceSettings::StaticRegisterNativesUDolbyGameKitSpatializationSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDolbyGameKitSpatializationSourceSettings);
	UClass* Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_NoRegister()
	{
		return UDolbyGameKitSpatializationSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpatializationPluginSourceSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DolbyAtmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DolbyAtmosSpatializationSourceSettings.h" },
		{ "ModuleRelativePath", "Public/DolbyAtmosSpatializationSourceSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDolbyGameKitSpatializationSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_Statics::ClassParams = {
		&UDolbyGameKitSpatializationSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UDolbyGameKitSpatializationSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDolbyGameKitSpatializationSourceSettings.OuterSingleton, Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDolbyGameKitSpatializationSourceSettings.OuterSingleton;
	}
	template<> DOLBYATMOS_API UClass* StaticClass<UDolbyGameKitSpatializationSourceSettings>()
	{
		return UDolbyGameKitSpatializationSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDolbyGameKitSpatializationSourceSettings);
	UDolbyGameKitSpatializationSourceSettings::~UDolbyGameKitSpatializationSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosSpatializationSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosSpatializationSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDolbyGameKitSpatializationSourceSettings, UDolbyGameKitSpatializationSourceSettings::StaticClass, TEXT("UDolbyGameKitSpatializationSourceSettings"), &Z_Registration_Info_UClass_UDolbyGameKitSpatializationSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDolbyGameKitSpatializationSourceSettings), 3326246167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosSpatializationSourceSettings_h_2563730326(TEXT("/Script/DolbyAtmos"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosSpatializationSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosSpatializationSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
