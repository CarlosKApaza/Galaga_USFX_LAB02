// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GalagaUSFX_LAB06/CreadorCapsulas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreadorCapsulas() {}
// Cross Module References
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorCapsulas_NoRegister();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACreadorCapsulas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GalagaUSFX_LAB06();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	GALAGAUSFX_LAB06_API UClass* Z_Construct_UClass_ACapsula_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACreadorCapsulas::execCrearCapsulas)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NombreCapsulaSKU);
		P_GET_STRUCT(FVector,Z_Param_PosicionCapsula);
		P_GET_STRUCT(FRotator,Z_Param_Rotacion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACapsula**)Z_Param__Result=P_THIS->CrearCapsulas(Z_Param_NombreCapsulaSKU,Z_Param_PosicionCapsula,Z_Param_Rotacion);
		P_NATIVE_END;
	}
	void ACreadorCapsulas::StaticRegisterNativesACreadorCapsulas()
	{
		UClass* Class = ACreadorCapsulas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CrearCapsulas", &ACreadorCapsulas::execCrearCapsulas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics
	{
		struct CreadorCapsulas_eventCrearCapsulas_Parms
		{
			FString NombreCapsulaSKU;
			FVector PosicionCapsula;
			FRotator Rotacion;
			ACapsula* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NombreCapsulaSKU;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosicionCapsula;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotacion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::NewProp_NombreCapsulaSKU = { "NombreCapsulaSKU", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreadorCapsulas_eventCrearCapsulas_Parms, NombreCapsulaSKU), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::NewProp_PosicionCapsula = { "PosicionCapsula", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreadorCapsulas_eventCrearCapsulas_Parms, PosicionCapsula), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::NewProp_Rotacion = { "Rotacion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreadorCapsulas_eventCrearCapsulas_Parms, Rotacion), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CreadorCapsulas_eventCrearCapsulas_Parms, ReturnValue), Z_Construct_UClass_ACapsula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::NewProp_NombreCapsulaSKU,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::NewProp_PosicionCapsula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::NewProp_Rotacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::Function_MetaDataParams[] = {
		{ "Category", "FabricaCapsulas" },
		{ "ModuleRelativePath", "CreadorCapsulas.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACreadorCapsulas, nullptr, "CrearCapsulas", nullptr, nullptr, sizeof(CreadorCapsulas_eventCrearCapsulas_Parms), Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACreadorCapsulas_NoRegister()
	{
		return ACreadorCapsulas::StaticClass();
	}
	struct Z_Construct_UClass_ACreadorCapsulas_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreadorCapsulas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GalagaUSFX_LAB06,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACreadorCapsulas_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACreadorCapsulas_CrearCapsulas, "CrearCapsulas" }, // 2615375288
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreadorCapsulas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreadorCapsulas.h" },
		{ "ModuleRelativePath", "CreadorCapsulas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreadorCapsulas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreadorCapsulas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreadorCapsulas_Statics::ClassParams = {
		&ACreadorCapsulas::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACreadorCapsulas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreadorCapsulas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreadorCapsulas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreadorCapsulas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreadorCapsulas, 2141768540);
	template<> GALAGAUSFX_LAB06_API UClass* StaticClass<ACreadorCapsulas>()
	{
		return ACreadorCapsulas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreadorCapsulas(Z_Construct_UClass_ACreadorCapsulas, &ACreadorCapsulas::StaticClass, TEXT("/Script/GalagaUSFX_LAB06"), TEXT("ACreadorCapsulas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreadorCapsulas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
