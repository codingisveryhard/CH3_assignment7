// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_assignment7/Public/AssignGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignGameMode() {}

// Begin Cross Module References
CH3_ASSIGNMENT7_API UClass* Z_Construct_UClass_AAssignGameMode();
CH3_ASSIGNMENT7_API UClass* Z_Construct_UClass_AAssignGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
UPackage* Z_Construct_UPackage__Script_CH3_assignment7();
// End Cross Module References

// Begin Class AAssignGameMode
void AAssignGameMode::StaticRegisterNativesAAssignGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAssignGameMode);
UClass* Z_Construct_UClass_AAssignGameMode_NoRegister()
{
	return AAssignGameMode::StaticClass();
}
struct Z_Construct_UClass_AAssignGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AssignGameMode.h" },
		{ "ModuleRelativePath", "Public/AssignGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssignGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAssignGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_assignment7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAssignGameMode_Statics::ClassParams = {
	&AAssignGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAssignGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAssignGameMode()
{
	if (!Z_Registration_Info_UClass_AAssignGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAssignGameMode.OuterSingleton, Z_Construct_UClass_AAssignGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAssignGameMode.OuterSingleton;
}
template<> CH3_ASSIGNMENT7_API UClass* StaticClass<AAssignGameMode>()
{
	return AAssignGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAssignGameMode);
AAssignGameMode::~AAssignGameMode() {}
// End Class AAssignGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAssignGameMode, AAssignGameMode::StaticClass, TEXT("AAssignGameMode"), &Z_Registration_Info_UClass_AAssignGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAssignGameMode), 813236874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignGameMode_h_2694775829(TEXT("/Script/CH3_assignment7"),
	Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
