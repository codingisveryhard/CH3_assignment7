// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssignPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef CH3_ASSIGNMENT7_AssignPawn_generated_h
#error "AssignPawn.generated.h already included, missing '#pragma once' in AssignPawn.h"
#endif
#define CH3_ASSIGNMENT7_AssignPawn_generated_h

#define FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execStopJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMove);


#define FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssignPawn(); \
	friend struct Z_Construct_UClass_AAssignPawn_Statics; \
public: \
	DECLARE_CLASS(AAssignPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_assignment7"), NO_API) \
	DECLARE_SERIALIZER(AAssignPawn)


#define FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAssignPawn(AAssignPawn&&); \
	AAssignPawn(const AAssignPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssignPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssignPawn) \
	NO_API virtual ~AAssignPawn();


#define FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_12_PROLOG
#define FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_ASSIGNMENT7_API UClass* StaticClass<class AAssignPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VS_CH3_assignment7_Source_CH3_assignment7_Public_AssignPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
