// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Projet_UE4_Bachelors/Projet_UE4_BachelorsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjet_UE4_BachelorsGameModeBase() {}
// Cross Module References
	PROJET_UE4_BACHELORS_API UClass* Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_NoRegister();
	PROJET_UE4_BACHELORS_API UClass* Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Projet_UE4_Bachelors();
// End Cross Module References
	void AProjet_UE4_BachelorsGameModeBase::StaticRegisterNativesAProjet_UE4_BachelorsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_NoRegister()
	{
		return AProjet_UE4_BachelorsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Projet_UE4_Bachelors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Projet_UE4_BachelorsGameModeBase.h" },
		{ "ModuleRelativePath", "Projet_UE4_BachelorsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjet_UE4_BachelorsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_Statics::ClassParams = {
		&AProjet_UE4_BachelorsGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjet_UE4_BachelorsGameModeBase, 3644587936);
	template<> PROJET_UE4_BACHELORS_API UClass* StaticClass<AProjet_UE4_BachelorsGameModeBase>()
	{
		return AProjet_UE4_BachelorsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjet_UE4_BachelorsGameModeBase(Z_Construct_UClass_AProjet_UE4_BachelorsGameModeBase, &AProjet_UE4_BachelorsGameModeBase::StaticClass, TEXT("/Script/Projet_UE4_Bachelors"), TEXT("AProjet_UE4_BachelorsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjet_UE4_BachelorsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
