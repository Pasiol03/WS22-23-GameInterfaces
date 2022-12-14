// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BallGame/Public/ThrowingCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowingCharacter() {}
// Cross Module References
	BALLGAME_API UClass* Z_Construct_UClass_AThrowingCharacter_NoRegister();
	BALLGAME_API UClass* Z_Construct_UClass_AThrowingCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BallGame();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BALLGAME_API UClass* Z_Construct_UClass_ABall_NoRegister();
// End Cross Module References
	static FName NAME_AThrowingCharacter_ShootingStrengthUpdated = FName(TEXT("ShootingStrengthUpdated"));
	void AThrowingCharacter::ShootingStrengthUpdated(float ShootingStrengh)
	{
		ThrowingCharacter_eventShootingStrengthUpdated_Parms Parms;
		Parms.ShootingStrengh=ShootingStrengh;
		ProcessEvent(FindFunctionChecked(NAME_AThrowingCharacter_ShootingStrengthUpdated),&Parms);
	}
	void AThrowingCharacter::StaticRegisterNativesAThrowingCharacter()
	{
	}
	struct Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootingStrengh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::NewProp_ShootingStrengh = { "ShootingStrengh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingCharacter_eventShootingStrengthUpdated_Parms, ShootingStrengh), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::NewProp_ShootingStrengh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the shooting strength is updated. */" },
		{ "ModuleRelativePath", "Public/ThrowingCharacter.h" },
		{ "ToolTip", "Called when the shooting strength is updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AThrowingCharacter, nullptr, "ShootingStrengthUpdated", nullptr, nullptr, sizeof(ThrowingCharacter_eventShootingStrengthUpdated_Parms), Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThrowingCharacter);
	UClass* Z_Construct_UClass_AThrowingCharacter_NoRegister()
	{
		return AThrowingCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThrowingCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BallClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BallClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RespawnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShootingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShootingTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThrowingCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BallGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AThrowingCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AThrowingCharacter_ShootingStrengthUpdated, "ShootingStrengthUpdated" }, // 1911815707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ThrowingCharacter.h" },
		{ "ModuleRelativePath", "Public/ThrowingCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_BallClass_MetaData[] = {
		{ "Category", "ThrowingCharacter" },
		{ "Comment", "/** The blueprint class of the ball we are spawning. */" },
		{ "ModuleRelativePath", "Public/ThrowingCharacter.h" },
		{ "ToolTip", "The blueprint class of the ball we are spawning." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_BallClass = { "BallClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingCharacter, BallClass), Z_Construct_UClass_ABall_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_BallClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_BallClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_ForceMultiplier_MetaData[] = {
		{ "Category", "ThrowingCharacter" },
		{ "Comment", "/** A multiplier to tweak the impulse the ball is thrown with. */" },
		{ "ModuleRelativePath", "Public/ThrowingCharacter.h" },
		{ "ToolTip", "A multiplier to tweak the impulse the ball is thrown with." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_ForceMultiplier = { "ForceMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingCharacter, ForceMultiplier), METADATA_PARAMS(Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_ForceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_ForceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_RespawnTime_MetaData[] = {
		{ "Category", "ThrowingCharacter" },
		{ "Comment", "/** The time to respawn the ball in seconds. */" },
		{ "ModuleRelativePath", "Public/ThrowingCharacter.h" },
		{ "ToolTip", "The time to respawn the ball in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_RespawnTime = { "RespawnTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingCharacter, RespawnTime), METADATA_PARAMS(Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_RespawnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_RespawnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_MaxShootingTime_MetaData[] = {
		{ "Category", "ThrowingCharacter" },
		{ "ModuleRelativePath", "Public/ThrowingCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_MaxShootingTime = { "MaxShootingTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThrowingCharacter, MaxShootingTime), METADATA_PARAMS(Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_MaxShootingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_MaxShootingTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThrowingCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_BallClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_ForceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_RespawnTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThrowingCharacter_Statics::NewProp_MaxShootingTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThrowingCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThrowingCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThrowingCharacter_Statics::ClassParams = {
		&AThrowingCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AThrowingCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThrowingCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThrowingCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThrowingCharacter()
	{
		if (!Z_Registration_Info_UClass_AThrowingCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThrowingCharacter.OuterSingleton, Z_Construct_UClass_AThrowingCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThrowingCharacter.OuterSingleton;
	}
	template<> BALLGAME_API UClass* StaticClass<AThrowingCharacter>()
	{
		return AThrowingCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThrowingCharacter);
	struct Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThrowingCharacter, AThrowingCharacter::StaticClass, TEXT("AThrowingCharacter"), &Z_Registration_Info_UClass_AThrowingCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThrowingCharacter), 3333185390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_3903055429(TEXT("/Script/BallGame"),
		Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
