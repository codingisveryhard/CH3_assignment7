// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_assignment7/Public/DronePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDronePawn() {}

// Begin Cross Module References
CH3_ASSIGNMENT7_API UClass* Z_Construct_UClass_ADronePawn();
CH3_ASSIGNMENT7_API UClass* Z_Construct_UClass_ADronePawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH3_assignment7();
// End Cross Module References

// Begin Class ADronePawn
void ADronePawn::StaticRegisterNativesADronePawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADronePawn);
UClass* Z_Construct_UClass_ADronePawn_NoRegister()
{
	return ADronePawn::StaticClass();
}
struct Z_Construct_UClass_ADronePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DronePawn.h" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Pawn| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Pawn| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Pawn| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Pawn| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Pawn| Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa7\x88\xec\x9a\xb0\xec\x8a\xa4 \xed\x9c\xa0\xec\x9d\x84 \xed\x86\xb5\xed\x95\xb4 Roll \xed\x9a\x8c\xec\xa0\x84\xec\x9d\x84 \xed\x95\x98\xea\xb2\x8c \xed\x95\x9c\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Public/DronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x88\xec\x9a\xb0\xec\x8a\xa4 \xed\x9c\xa0\xec\x9d\x84 \xed\x86\xb5\xed\x95\xb4 Roll \xed\x9a\x8c\xec\xa0\x84\xec\x9d\x84 \xed\x95\x98\xea\xb2\x8c \xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Pawn| Properties" },
		{ "ModuleRelativePath", "Public/DronePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizonSpeed_MetaData[] = {
		{ "Category", "Pawn| Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb7\xb8\xeb\x83\xa5 \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xec\x8b\x9c \xeb\xa7\x88\xec\x9a\xb0\xec\x8a\xa4 \xec\x86\x8d\xeb\x8f\x84\xec\x97\x90 \xeb\xb9\x84\xed\x95\xb4 \xed\x8f\xb0\xec\x9d\x98 \xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84\xea\xb0\x80 \xeb\x8a\x90\xeb\xa0\xa4\xec\x84\x9c \xec\xb6\x94\xea\xb0\x80\n" },
#endif
		{ "ModuleRelativePath", "Public/DronePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb7\xb8\xeb\x83\xa5 \xec\x82\xac\xec\x9a\xa9\xed\x95\xa0 \xec\x8b\x9c \xeb\xa7\x88\xec\x9a\xb0\xec\x8a\xa4 \xec\x86\x8d\xeb\x8f\x84\xec\x97\x90 \xeb\xb9\x84\xed\x95\xb4 \xed\x8f\xb0\xec\x9d\x98 \xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84\xea\xb0\x80 \xeb\x8a\x90\xeb\xa0\xa4\xec\x84\x9c \xec\xb6\x94\xea\xb0\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizonSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADronePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADronePawn_Statics::NewProp_HorizonSpeed = { "HorizonSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADronePawn, HorizonSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizonSpeed_MetaData), NewProp_HorizonSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADronePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADronePawn_Statics::NewProp_HorizonSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADronePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADronePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_assignment7,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADronePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADronePawn_Statics::ClassParams = {
	&ADronePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADronePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADronePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADronePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ADronePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADronePawn()
{
	if (!Z_Registration_Info_UClass_ADronePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADronePawn.OuterSingleton, Z_Construct_UClass_ADronePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADronePawn.OuterSingleton;
}
template<> CH3_ASSIGNMENT7_API UClass* StaticClass<ADronePawn>()
{
	return ADronePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADronePawn);
ADronePawn::~ADronePawn() {}
// End Class ADronePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_DronePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADronePawn, ADronePawn::StaticClass, TEXT("ADronePawn"), &Z_Registration_Info_UClass_ADronePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADronePawn), 3002035669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_DronePawn_h_2429926765(TEXT("/Script/CH3_assignment7"),
	Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_DronePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_DronePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
