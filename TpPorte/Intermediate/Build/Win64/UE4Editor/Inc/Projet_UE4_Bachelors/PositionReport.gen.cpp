// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projet_UE4_Bachelors/Public/PositionReport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePositionReport() {}
// Cross Module References
	PROJET_UE4_BACHELORS_API UClass* Z_Construct_UClass_UPositionReport_NoRegister();
	PROJET_UE4_BACHELORS_API UClass* Z_Construct_UClass_UPositionReport();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Projet_UE4_Bachelors();
	PROJET_UE4_BACHELORS_API UFunction* Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PROJET_UE4_BACHELORS_API UFunction* Z_Construct_UFunction_UPositionReport_GetFloatByName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PROJET_UE4_BACHELORS_API UFunction* Z_Construct_UFunction_UPositionReport_GetStrArrayByName();
// End Cross Module References
	void UPositionReport::StaticRegisterNativesUPositionReport()
	{
		UClass* Class = UPositionReport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFirstPhysicsBodyInReach", &UPositionReport::execGetFirstPhysicsBodyInReach },
			{ "GetFloatByName", &UPositionReport::execGetFloatByName },
			{ "GetStrArrayByName", &UPositionReport::execGetStrArrayByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics
	{
		struct PositionReport_eventGetFirstPhysicsBodyInReach_Parms
		{
			FHitResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PositionReport_eventGetFirstPhysicsBodyInReach_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::Function_MetaDataParams[] = {
		{ "Category", "Hit component" },
		{ "Comment", "//Hit component\n//Exemple Fct C++=>BluePrint\n" },
		{ "ModuleRelativePath", "Public/PositionReport.h" },
		{ "ToolTip", "Hit component\nExemple Fct C++=>BluePrint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPositionReport, nullptr, "GetFirstPhysicsBodyInReach", nullptr, nullptr, sizeof(PositionReport_eventGetFirstPhysicsBodyInReach_Parms), Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics
	{
		struct PositionReport_eventGetFloatByName_Parms
		{
			UObject* Target;
			FName VarName;
			float outStr;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_outStr;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PositionReport_eventGetFloatByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PositionReport_eventGetFloatByName_Parms), &Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_outStr = { "outStr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PositionReport_eventGetFloatByName_Parms, outStr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PositionReport_eventGetFloatByName_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PositionReport_eventGetFloatByName_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_outStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_VarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FLT" },
		{ "ModuleRelativePath", "Public/PositionReport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPositionReport, nullptr, "GetFloatByName", nullptr, nullptr, sizeof(PositionReport_eventGetFloatByName_Parms), Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPositionReport_GetFloatByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPositionReport_GetFloatByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics
	{
		struct PositionReport_eventGetStrArrayByName_Parms
		{
			UObject* Target;
			FName VarName;
			TArray<FString> outArrayOfStr;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outArrayOfStr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outArrayOfStr_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PositionReport_eventGetStrArrayByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PositionReport_eventGetStrArrayByName_Parms), &Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_outArrayOfStr = { "outArrayOfStr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PositionReport_eventGetStrArrayByName_Parms, outArrayOfStr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_outArrayOfStr_Inner = { "outArrayOfStr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PositionReport_eventGetStrArrayByName_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PositionReport_eventGetStrArrayByName_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_outArrayOfStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_outArrayOfStr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_VarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "STR" },
		{ "ModuleRelativePath", "Public/PositionReport.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPositionReport, nullptr, "GetStrArrayByName", nullptr, nullptr, sizeof(PositionReport_eventGetStrArrayByName_Parms), Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPositionReport_GetStrArrayByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPositionReport_GetStrArrayByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPositionReport_NoRegister()
	{
		return UPositionReport::StaticClass();
	}
	struct Z_Construct_UClass_UPositionReport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blnTest_MetaData[];
#endif
		static void NewProp_blnTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_blnTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blnTest2_MetaData[];
#endif
		static void NewProp_blnTest2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_blnTest2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPositionReport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Projet_UE4_Bachelors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPositionReport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPositionReport_GetFirstPhysicsBodyInReach, "GetFirstPhysicsBodyInReach" }, // 3435618026
		{ &Z_Construct_UFunction_UPositionReport_GetFloatByName, "GetFloatByName" }, // 497570967
		{ &Z_Construct_UFunction_UPositionReport_GetStrArrayByName, "GetStrArrayByName" }, // 4040020342
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPositionReport_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PositionReport.h" },
		{ "ModuleRelativePath", "Public/PositionReport.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/PositionReport.h" },
	};
#endif
	void Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest_SetBit(void* Obj)
	{
		((UPositionReport*)Obj)->blnTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest = { "blnTest", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPositionReport), &Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest2_MetaData[] = {
		{ "Category", "Variables" },
		{ "ModuleRelativePath", "Public/PositionReport.h" },
	};
#endif
	void Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest2_SetBit(void* Obj)
	{
		((UPositionReport*)Obj)->blnTest2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest2 = { "blnTest2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPositionReport), &Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPositionReport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPositionReport_Statics::NewProp_blnTest2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPositionReport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPositionReport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPositionReport_Statics::ClassParams = {
		&UPositionReport::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPositionReport_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UPositionReport_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPositionReport_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPositionReport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPositionReport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPositionReport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPositionReport, 1021589112);
	template<> PROJET_UE4_BACHELORS_API UClass* StaticClass<UPositionReport>()
	{
		return UPositionReport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPositionReport(Z_Construct_UClass_UPositionReport, &UPositionReport::StaticClass, TEXT("/Script/Projet_UE4_Bachelors"), TEXT("UPositionReport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPositionReport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
