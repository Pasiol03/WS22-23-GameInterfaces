// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BallGame/Public/MovingCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingCube() {}
// Cross Module References
	BALLGAME_API UClass* Z_Construct_UClass_AMovingCube_NoRegister();
	BALLGAME_API UClass* Z_Construct_UClass_AMovingCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BallGame();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	DEFINE_FUNCTION(AMovingCube::execOnCompHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	static FName NAME_AMovingCube_HitByBall = FName(TEXT("HitByBall"));
	void AMovingCube::HitByBall()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMovingCube_HitByBall),NULL);
	}
	void AMovingCube::StaticRegisterNativesAMovingCube()
	{
		UClass* Class = AMovingCube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompHit", &AMovingCube::execOnCompHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMovingCube_HitByBall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCube_HitByBall_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Triggered when a cube was hit by a ball. */" },
		{ "ModuleRelativePath", "Public/MovingCube.h" },
		{ "ToolTip", "Triggered when a cube was hit by a ball." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCube_HitByBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCube, nullptr, "HitByBall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCube_HitByBall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCube_HitByBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCube_HitByBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCube_HitByBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingCube_OnCompHit_Statics
	{
		struct MovingCube_eventOnCompHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovingCube_eventOnCompHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovingCube_eventOnCompHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovingCube_eventOnCompHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovingCube_eventOnCompHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovingCube_eventOnCompHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when cube was hit by other component. */" },
		{ "ModuleRelativePath", "Public/MovingCube.h" },
		{ "ToolTip", "Called when cube was hit by other component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingCube, nullptr, "OnCompHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::MovingCube_eventOnCompHit_Parms), Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingCube_OnCompHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingCube_OnCompHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingCube);
	UClass* Z_Construct_UClass_AMovingCube_NoRegister()
	{
		return AMovingCube::StaticClass();
	}
	struct Z_Construct_UClass_AMovingCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CubeVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CubeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BallGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMovingCube_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingCube_HitByBall, "HitByBall" }, // 2293609291
		{ &Z_Construct_UFunction_AMovingCube_OnCompHit, "OnCompHit" }, // 2643324153
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingCube.h" },
		{ "ModuleRelativePath", "Public/MovingCube.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeVelocity_MetaData[] = {
		{ "Category", "MovingCube" },
		{ "Comment", "/** The velocity of the cube. */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/MovingCube.h" },
		{ "ToolTip", "The velocity of the cube." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeVelocity = { "CubeVelocity", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingCube, CubeVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeSize_MetaData[] = {
		{ "Category", "MovingCube" },
		{ "Comment", "/** The size of the cube */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/MovingCube.h" },
		{ "ToolTip", "The size of the cube" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeSize = { "CubeSize", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingCube, CubeSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingCube_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "MovingCube" },
		{ "Comment", "/** The distance the cube will move in each direction. */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/MovingCube.h" },
		{ "ToolTip", "The distance the cube will move in each direction." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCube_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0011000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingCube, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_AMovingCube_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::NewProp_MaxDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingCube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCube_Statics::NewProp_MaxDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingCube_Statics::ClassParams = {
		&AMovingCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMovingCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingCube()
	{
		if (!Z_Registration_Info_UClass_AMovingCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingCube.OuterSingleton, Z_Construct_UClass_AMovingCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingCube.OuterSingleton;
	}
	template<> BALLGAME_API UClass* StaticClass<AMovingCube>()
	{
		return AMovingCube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingCube);
	struct Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_MovingCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_MovingCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingCube, AMovingCube::StaticClass, TEXT("AMovingCube"), &Z_Registration_Info_UClass_AMovingCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingCube), 1374575465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_MovingCube_h_3735452032(TEXT("/Script/BallGame"),
		Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_MovingCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_MovingCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
