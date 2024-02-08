// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DolbyAtmosPlugin/Private/DolbyAtmosSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDolbyAtmosSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DOLBYATMOS_API UClass* Z_Construct_UClass_UDolbyGameKitSettings();
	DOLBYATMOS_API UClass* Z_Construct_UClass_UDolbyGameKitSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DolbyAtmos();
// End Cross Module References
	void UDolbyGameKitSettings::StaticRegisterNativesUDolbyGameKitSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDolbyGameKitSettings);
	UClass* Z_Construct_UClass_UDolbyGameKitSettings_NoRegister()
	{
		return UDolbyGameKitSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDolbyGameKitSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePluginRendering_MetaData[];
#endif
		static void NewProp_bEnablePluginRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePluginRendering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDolbyGameKitSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DolbyAtmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDolbyGameKitSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DolbyAtmosSettings.h" },
		{ "ModuleRelativePath", "Private/DolbyAtmosSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDolbyGameKitSettings_Statics::NewProp_bEnablePluginRendering_MetaData[] = {
		{ "Category", "Dolby Atmos | Windows" },
		{ "ModuleRelativePath", "Private/DolbyAtmosSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDolbyGameKitSettings_Statics::NewProp_bEnablePluginRendering_SetBit(void* Obj)
	{
		((UDolbyGameKitSettings*)Obj)->bEnablePluginRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDolbyGameKitSettings_Statics::NewProp_bEnablePluginRendering = { "bEnablePluginRendering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDolbyGameKitSettings), &Z_Construct_UClass_UDolbyGameKitSettings_Statics::NewProp_bEnablePluginRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDolbyGameKitSettings_Statics::NewProp_bEnablePluginRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDolbyGameKitSettings_Statics::NewProp_bEnablePluginRendering_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDolbyGameKitSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDolbyGameKitSettings_Statics::NewProp_bEnablePluginRendering,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDolbyGameKitSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDolbyGameKitSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDolbyGameKitSettings_Statics::ClassParams = {
		&UDolbyGameKitSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDolbyGameKitSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDolbyGameKitSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDolbyGameKitSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDolbyGameKitSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDolbyGameKitSettings()
	{
		if (!Z_Registration_Info_UClass_UDolbyGameKitSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDolbyGameKitSettings.OuterSingleton, Z_Construct_UClass_UDolbyGameKitSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDolbyGameKitSettings.OuterSingleton;
	}
	template<> DOLBYATMOS_API UClass* StaticClass<UDolbyGameKitSettings>()
	{
		return UDolbyGameKitSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDolbyGameKitSettings);
	UDolbyGameKitSettings::~UDolbyGameKitSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Private_DolbyAtmosSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Private_DolbyAtmosSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDolbyGameKitSettings, UDolbyGameKitSettings::StaticClass, TEXT("UDolbyGameKitSettings"), &Z_Registration_Info_UClass_UDolbyGameKitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDolbyGameKitSettings), 882353500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Private_DolbyAtmosSettings_h_1874084131(TEXT("/Script/DolbyAtmos"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Private_DolbyAtmosSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Private_DolbyAtmosSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
