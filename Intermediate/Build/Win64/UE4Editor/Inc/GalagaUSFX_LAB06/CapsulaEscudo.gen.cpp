// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/CapsulaEscudo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaEscudo() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACapsulaEscudo_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACapsulaEscudo();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
// End Cross Module References
	void ACapsulaEscudo::StaticRegisterNativesACapsulaEscudo()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaEscudo_NoRegister()
	{
		return ACapsulaEscudo::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaEscudo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaEscudo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaEscudo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CapsulaEscudo.h" },
		{ "ModuleRelativePath", "CapsulaEscudo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaEscudo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaEscudo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaEscudo_Statics::ClassParams = {
		&ACapsulaEscudo::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaEscudo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaEscudo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaEscudo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaEscudo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaEscudo, 779084348);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ACapsulaEscudo>()
	{
		return ACapsulaEscudo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaEscudo(Z_Construct_UClass_ACapsulaEscudo, &ACapsulaEscudo::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ACapsulaEscudo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaEscudo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
