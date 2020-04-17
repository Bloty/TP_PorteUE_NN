// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projet_UE4_Bachelors/Public/CGrabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGrabber() {}
// Cross Module References
	PROJET_UE4_BACHELORS_API UClass* Z_Construct_UClass_UCGrabber_NoRegister();
	PROJET_UE4_BACHELORS_API UClass* Z_Construct_UClass_UCGrabber();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Projet_UE4_Bachelors();
// End Cross Module References
	void UCGrabber::StaticRegisterNativesUCGrabber()
	{
	}
	UClass* Z_Construct_UClass_UCGrabber_NoRegister()
	{
		return UCGrabber::StaticClass();
	}
	struct Z_Construct_UClass_UCGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fltReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fltReach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Projet_UE4_Bachelors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCGrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CGrabber.h" },
		{ "ModuleRelativePath", "Public/CGrabber.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCGrabber_Statics::NewProp_fltReach_MetaData[] = {
		{ "Category", "CGrabber" },
		{ "ModuleRelativePath", "Public/CGrabber.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCGrabber_Statics::NewProp_fltReach = { "fltReach", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCGrabber, fltReach), METADATA_PARAMS(Z_Construct_UClass_UCGrabber_Statics::NewProp_fltReach_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCGrabber_Statics::NewProp_fltReach_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCGrabber_Statics::NewProp_fltReach,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCGrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCGrabber_Statics::ClassParams = {
		&UCGrabber::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCGrabber_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCGrabber_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCGrabber_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCGrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCGrabber, 2301640676);
	template<> PROJET_UE4_BACHELORS_API UClass* StaticClass<UCGrabber>()
	{
		return UCGrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCGrabber(Z_Construct_UClass_UCGrabber, &UCGrabber::StaticClass, TEXT("/Script/Projet_UE4_Bachelors"), TEXT("UCGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
