// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/Hangar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHangar() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_AHangar_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_AHangar();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AHangar::StaticRegisterNativesAHangar()
	{
	}
	UClass* Z_Construct_UClass_AHangar_NoRegister()
	{
		return AHangar::StaticClass();
	}
	struct Z_Construct_UClass_AHangar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshHangar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshHangar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHangar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHangar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hangar.h" },
		{ "ModuleRelativePath", "Hangar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHangar_Statics::NewProp_MeshHangar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Hangar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHangar_Statics::NewProp_MeshHangar = { "MeshHangar", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHangar, MeshHangar), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHangar_Statics::NewProp_MeshHangar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHangar_Statics::NewProp_MeshHangar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHangar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHangar_Statics::NewProp_MeshHangar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHangar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHangar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHangar_Statics::ClassParams = {
		&AHangar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHangar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHangar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHangar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHangar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHangar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHangar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHangar, 1340637953);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<AHangar>()
	{
		return AHangar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHangar(Z_Construct_UClass_AHangar, &AHangar::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("AHangar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHangar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
