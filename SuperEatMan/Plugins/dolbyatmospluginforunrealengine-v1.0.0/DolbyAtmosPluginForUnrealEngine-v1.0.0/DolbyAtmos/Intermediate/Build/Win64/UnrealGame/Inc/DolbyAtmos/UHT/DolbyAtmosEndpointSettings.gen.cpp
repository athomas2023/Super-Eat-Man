// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DolbyAtmosPlugin/Public/DolbyAtmosEndpointSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDolbyAtmosEndpointSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase();
	DOLBYATMOS_API UClass* Z_Construct_UClass_UDolbyAtmosEndpointSettings();
	DOLBYATMOS_API UClass* Z_Construct_UClass_UDolbyAtmosEndpointSettings_NoRegister();
	DOLBYATMOS_API UEnum* Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair();
	UPackage* Z_Construct_UPackage__Script_DolbyAtmos();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_DolbyAtmosHeightsPair;
	static UEnum* DolbyAtmosHeightsPair_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_DolbyAtmosHeightsPair.OuterSingleton)
		{
			Z_Registration_Info_UEnum_DolbyAtmosHeightsPair.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair, (UObject*)Z_Construct_UPackage__Script_DolbyAtmos(), TEXT("DolbyAtmosHeightsPair"));
		}
		return Z_Registration_Info_UEnum_DolbyAtmosHeightsPair.OuterSingleton;
	}
	template<> DOLBYATMOS_API UEnum* StaticEnum<DolbyAtmosHeightsPair>()
	{
		return DolbyAtmosHeightsPair_StaticEnum();
	}
	struct Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair_Statics::Enumerators[] = {
		{ "DolbyAtmosHeightsPair::FrontHeights", (int64)DolbyAtmosHeightsPair::FrontHeights },
		{ "DolbyAtmosHeightsPair::MidHeights", (int64)DolbyAtmosHeightsPair::MidHeights },
		{ "DolbyAtmosHeightsPair::RearHeights", (int64)DolbyAtmosHeightsPair::RearHeights },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair_Statics::Enum_MetaDataParams[] = {
		{ "FrontHeights.Comment", "// Front heights\n" },
		{ "FrontHeights.Name", "DolbyAtmosHeightsPair::FrontHeights" },
		{ "FrontHeights.ToolTip", "Front heights" },
		{ "MidHeights.Comment", "// Mid heights\n" },
		{ "MidHeights.Name", "DolbyAtmosHeightsPair::MidHeights" },
		{ "MidHeights.ToolTip", "Mid heights" },
		{ "ModuleRelativePath", "Public/DolbyAtmosEndpointSettings.h" },
		{ "RearHeights.Comment", "// Rear Heights\n" },
		{ "RearHeights.Name", "DolbyAtmosHeightsPair::RearHeights" },
		{ "RearHeights.ToolTip", "Rear Heights" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DolbyAtmos,
		nullptr,
		"DolbyAtmosHeightsPair",
		"DolbyAtmosHeightsPair",
		Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair()
	{
		if (!Z_Registration_Info_UEnum_DolbyAtmosHeightsPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DolbyAtmosHeightsPair.InnerSingleton, Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_DolbyAtmosHeightsPair.InnerSingleton;
	}
	void UDolbyAtmosEndpointSettings::StaticRegisterNativesUDolbyAtmosEndpointSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDolbyAtmosEndpointSettings);
	UClass* Z_Construct_UClass_UDolbyAtmosEndpointSettings_NoRegister()
	{
		return UDolbyAtmosEndpointSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeightStereoPair_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightStereoPair_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HeightStereoPair;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioEndpointSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DolbyAtmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DolbyAtmosEndpointSettings.h" },
		{ "ModuleRelativePath", "Public/DolbyAtmosEndpointSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::NewProp_HeightStereoPair_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::NewProp_HeightStereoPair_MetaData[] = {
		{ "Category", "Dolby Atmos | Heights Endpoint" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DolbyAtmosEndpointSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::NewProp_HeightStereoPair = { "HeightStereoPair", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDolbyAtmosEndpointSettings, HeightStereoPair), Z_Construct_UEnum_DolbyAtmos_DolbyAtmosHeightsPair, METADATA_PARAMS(Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::NewProp_HeightStereoPair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::NewProp_HeightStereoPair_MetaData)) }; // 1074230229
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::NewProp_HeightStereoPair_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::NewProp_HeightStereoPair,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDolbyAtmosEndpointSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::ClassParams = {
		&UDolbyAtmosEndpointSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDolbyAtmosEndpointSettings()
	{
		if (!Z_Registration_Info_UClass_UDolbyAtmosEndpointSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDolbyAtmosEndpointSettings.OuterSingleton, Z_Construct_UClass_UDolbyAtmosEndpointSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDolbyAtmosEndpointSettings.OuterSingleton;
	}
	template<> DOLBYATMOS_API UClass* StaticClass<UDolbyAtmosEndpointSettings>()
	{
		return UDolbyAtmosEndpointSettings::StaticClass();
	}
	UDolbyAtmosEndpointSettings::UDolbyAtmosEndpointSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDolbyAtmosEndpointSettings);
	UDolbyAtmosEndpointSettings::~UDolbyAtmosEndpointSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosEndpointSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosEndpointSettings_h_Statics::EnumInfo[] = {
		{ DolbyAtmosHeightsPair_StaticEnum, TEXT("DolbyAtmosHeightsPair"), &Z_Registration_Info_UEnum_DolbyAtmosHeightsPair, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1074230229U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosEndpointSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDolbyAtmosEndpointSettings, UDolbyAtmosEndpointSettings::StaticClass, TEXT("UDolbyAtmosEndpointSettings"), &Z_Registration_Info_UClass_UDolbyAtmosEndpointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDolbyAtmosEndpointSettings), 848440521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosEndpointSettings_h_1062889372(TEXT("/Script/DolbyAtmos"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosEndpointSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosEndpointSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosEndpointSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_DolbyAtmos_Source_DolbyAtmosPlugin_Public_DolbyAtmosEndpointSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
