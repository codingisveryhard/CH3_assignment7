// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_assignment7/Public/AssignPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignPawn() {}

// Begin Cross Module References
CH3_ASSIGNMENT7_API UClass* Z_Construct_UClass_AAssignPawn();
CH3_ASSIGNMENT7_API UClass* Z_Construct_UClass_AAssignPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_CH3_assignment7();
// End Cross Module References

// Begin Class AAssignPawn
void AAssignPawn::StaticRegisterNativesAAssignPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAssignPawn);
UClass* Z_Construct_UClass_AAssignPawn_NoRegister()
{
	return AAssignPawn::StaticClass();
}
struct Z_Construct_UClass_AAssignPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AssignPawn.h" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssignPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAssignPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_assignment7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAssignPawn_Statics::ClassParams = {
	&AAssignPawn::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AAssignPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAssignPawn()
{
	if (!Z_Registration_Info_UClass_AAssignPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAssignPawn.OuterSingleton, Z_Construct_UClass_AAssignPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAssignPawn.OuterSingleton;
}
template<> CH3_ASSIGNMENT7_API UClass* StaticClass<AAssignPawn>()
{
	return AAssignPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAssignPawn);
AAssignPawn::~AAssignPawn() {}
// End Class AAssignPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAssignPawn, AAssignPawn::StaticClass, TEXT("AAssignPawn"), &Z_Registration_Info_UClass_AAssignPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAssignPawn), 3803311499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_1965351611(TEXT("/Script/CH3_assignment7"),
	Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
