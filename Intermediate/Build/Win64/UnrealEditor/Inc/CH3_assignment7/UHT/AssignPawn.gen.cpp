// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_assignment7/Public/AssignPawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignPawn() {}

// Begin Cross Module References
CH3_ASSIGNMENT7_API UClass* Z_Construct_UClass_AAssignPawn();
CH3_ASSIGNMENT7_API UClass* Z_Construct_UClass_AAssignPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_CH3_assignment7();
// End Cross Module References

// Begin Class AAssignPawn Function Look
struct Z_Construct_UFunction_AAssignPawn_Look_Statics
{
	struct AssignPawn_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAssignPawn_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignPawn_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssignPawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignPawn_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignPawn_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignPawn, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AAssignPawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssignPawn_Look_Statics::AssignPawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignPawn_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssignPawn_Look_Statics::AssignPawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssignPawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignPawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignPawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AAssignPawn Function Look

// Begin Class AAssignPawn Function Move
struct Z_Construct_UFunction_AAssignPawn_Move_Statics
{
	struct AssignPawn_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAssignPawn_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignPawn_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssignPawn_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignPawn_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignPawn_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignPawn, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AAssignPawn_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssignPawn_Move_Statics::AssignPawn_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignPawn_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssignPawn_Move_Statics::AssignPawn_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssignPawn_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignPawn_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignPawn::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AAssignPawn Function Move

// Begin Class AAssignPawn Function StartJump
struct Z_Construct_UFunction_AAssignPawn_StartJump_Statics
{
	struct AssignPawn_eventStartJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAssignPawn_StartJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignPawn_eventStartJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssignPawn_StartJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignPawn_StartJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_StartJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignPawn_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignPawn, nullptr, "StartJump", nullptr, nullptr, Z_Construct_UFunction_AAssignPawn_StartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_StartJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssignPawn_StartJump_Statics::AssignPawn_eventStartJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignPawn_StartJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssignPawn_StartJump_Statics::AssignPawn_eventStartJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssignPawn_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignPawn_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignPawn::execStartJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AAssignPawn Function StartJump

// Begin Class AAssignPawn Function StopJump
struct Z_Construct_UFunction_AAssignPawn_StopJump_Statics
{
	struct AssignPawn_eventStopJump_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAssignPawn_StopJump_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssignPawn_eventStopJump_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAssignPawn_StopJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAssignPawn_StopJump_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_StopJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAssignPawn_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAssignPawn, nullptr, "StopJump", nullptr, nullptr, Z_Construct_UFunction_AAssignPawn_StopJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_StopJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAssignPawn_StopJump_Statics::AssignPawn_eventStopJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAssignPawn_StopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAssignPawn_StopJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAssignPawn_StopJump_Statics::AssignPawn_eventStopJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAssignPawn_StopJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAssignPawn_StopJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAssignPawn::execStopJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopJump(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AAssignPawn Function StopJump

// Begin Class AAssignPawn
void AAssignPawn::StaticRegisterNativesAAssignPawn()
{
	UClass* Class = AAssignPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &AAssignPawn::execLook },
		{ "Move", &AAssignPawn::execMove },
		{ "StartJump", &AAssignPawn::execStartJump },
		{ "StopJump", &AAssignPawn::execStopJump },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRoot_MetaData[] = {
		{ "Category", "Pawn| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
		{ "Category", "Pawn| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Pawn| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Pawn| Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Pawn| Properties" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IdleAnim_MetaData[] = {
		{ "Category", "Pawn| Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 \xec\xa0\x81\xec\x9a\xa9\xec\x9d\x84 \xec\x9c\x84\xed\x95\xb4 \xec\x84\xa0\xec\x96\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\xa0\xeb\x8b\x88\xeb\xa9\x94\xec\x9d\xb4\xec\x85\x98 \xec\xa0\x81\xec\x9a\xa9\xec\x9d\x84 \xec\x9c\x84\xed\x95\xb4 \xec\x84\xa0\xec\x96\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunAnim_MetaData[] = {
		{ "Category", "Pawn| Animation" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallingAnim_MetaData[] = {
		{ "Category", "Pawn| Animation" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAnim_MetaData[] = {
		{ "Category", "Pawn| Animation" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandAnim_MetaData[] = {
		{ "Category", "Pawn| Animation" },
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpVelocity_MetaData[] = {
		{ "Category", "Pawn| Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x90\xed\x94\x84 \xec\x8b\x9c \xeb\xb3\x80\xed\x95\x98\xeb\x8a\x94 \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/AssignPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x90\xed\x94\x84 \xec\x8b\x9c \xeb\xb3\x80\xed\x95\x98\xeb\x8a\x94 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FallingAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAssignPawn_Look, "Look" }, // 3596515409
		{ &Z_Construct_UFunction_AAssignPawn_Move, "Move" }, // 3755944693
		{ &Z_Construct_UFunction_AAssignPawn_StartJump, "StartJump" }, // 2501055095
		{ &Z_Construct_UFunction_AAssignPawn_StopJump, "StopJump" }, // 2863104392
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssignPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_CapsuleRoot = { "CapsuleRoot", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, CapsuleRoot), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleRoot_MetaData), NewProp_CapsuleRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_IdleAnim = { "IdleAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, IdleAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IdleAnim_MetaData), NewProp_IdleAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_RunAnim = { "RunAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, RunAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunAnim_MetaData), NewProp_RunAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_FallingAnim = { "FallingAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, FallingAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallingAnim_MetaData), NewProp_FallingAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_JumpAnim = { "JumpAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, JumpAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAnim_MetaData), NewProp_JumpAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_LandAnim = { "LandAnim", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, LandAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandAnim_MetaData), NewProp_LandAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAssignPawn_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAssignPawn, JumpVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpVelocity_MetaData), NewProp_JumpVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAssignPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_CapsuleRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_SkeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_IdleAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_RunAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_FallingAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_JumpAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_LandAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAssignPawn_Statics::NewProp_JumpVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAssignPawn_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AAssignPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAssignPawn_Statics::PropPointers),
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
		{ Z_Construct_UClass_AAssignPawn, AAssignPawn::StaticClass, TEXT("AAssignPawn"), &Z_Registration_Info_UClass_AAssignPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAssignPawn), 42214990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_3400308029(TEXT("/Script/CH3_assignment7"),
	Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
