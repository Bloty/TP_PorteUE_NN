// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FHitResult;
#ifdef PROJET_UE4_BACHELORS_PositionReport_generated_h
#error "PositionReport.generated.h already included, missing '#pragma once' in PositionReport.h"
#endif
#define PROJET_UE4_BACHELORS_PositionReport_generated_h

#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStrArrayByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VarName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_outArrayOfStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UPositionReport::GetStrArrayByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_outArrayOfStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VarName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_outStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UPositionReport::GetFloatByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_outStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstPhysicsBodyInReach) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->GetFirstPhysicsBodyInReach(); \
		P_NATIVE_END; \
	}


#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStrArrayByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VarName); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_outArrayOfStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UPositionReport::GetStrArrayByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_outArrayOfStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatByName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Target); \
		P_GET_PROPERTY(UNameProperty,Z_Param_VarName); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_outStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UPositionReport::GetFloatByName(Z_Param_Target,Z_Param_VarName,Z_Param_Out_outStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFirstPhysicsBodyInReach) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->GetFirstPhysicsBodyInReach(); \
		P_NATIVE_END; \
	}


#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPositionReport(); \
	friend struct Z_Construct_UClass_UPositionReport_Statics; \
public: \
	DECLARE_CLASS(UPositionReport, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projet_UE4_Bachelors"), NO_API) \
	DECLARE_SERIALIZER(UPositionReport)


#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPositionReport(); \
	friend struct Z_Construct_UClass_UPositionReport_Statics; \
public: \
	DECLARE_CLASS(UPositionReport, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projet_UE4_Bachelors"), NO_API) \
	DECLARE_SERIALIZER(UPositionReport)


#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPositionReport(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPositionReport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPositionReport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPositionReport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPositionReport(UPositionReport&&); \
	NO_API UPositionReport(const UPositionReport&); \
public:


#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPositionReport(UPositionReport&&); \
	NO_API UPositionReport(const UPositionReport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPositionReport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPositionReport); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPositionReport)


#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__blnTest() { return STRUCT_OFFSET(UPositionReport, blnTest); }


#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_12_PROLOG
#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_PRIVATE_PROPERTY_OFFSET \
	Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_RPC_WRAPPERS \
	Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_INCLASS \
	Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_PRIVATE_PROPERTY_OFFSET \
	Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_INCLASS_NO_PURE_DECLS \
	Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJET_UE4_BACHELORS_API UClass* StaticClass<class UPositionReport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projet_UE4_Bachelors_Source_Projet_UE4_Bachelors_Public_PositionReport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
