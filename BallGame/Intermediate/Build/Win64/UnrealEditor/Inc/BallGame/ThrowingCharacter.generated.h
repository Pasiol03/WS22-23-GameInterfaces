// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALLGAME_ThrowingCharacter_generated_h
#error "ThrowingCharacter.generated.h already included, missing '#pragma once' in ThrowingCharacter.h"
#endif
#define BALLGAME_ThrowingCharacter_generated_h

#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_SPARSE_DATA
#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_RPC_WRAPPERS
#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_EVENT_PARMS \
	struct ThrowingCharacter_eventShootingStrengthUpdated_Parms \
	{ \
		float ShootingStrengh; \
	};


#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_CALLBACK_WRAPPERS
#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThrowingCharacter(); \
	friend struct Z_Construct_UClass_AThrowingCharacter_Statics; \
public: \
	DECLARE_CLASS(AThrowingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BallGame"), NO_API) \
	DECLARE_SERIALIZER(AThrowingCharacter)


#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAThrowingCharacter(); \
	friend struct Z_Construct_UClass_AThrowingCharacter_Statics; \
public: \
	DECLARE_CLASS(AThrowingCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BallGame"), NO_API) \
	DECLARE_SERIALIZER(AThrowingCharacter)


#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThrowingCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThrowingCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowingCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowingCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowingCharacter(AThrowingCharacter&&); \
	NO_API AThrowingCharacter(const AThrowingCharacter&); \
public:


#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThrowingCharacter(AThrowingCharacter&&); \
	NO_API AThrowingCharacter(const AThrowingCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThrowingCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThrowingCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThrowingCharacter)


#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_13_PROLOG \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_EVENT_PARMS


#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_SPARSE_DATA \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_RPC_WRAPPERS \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_CALLBACK_WRAPPERS \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_INCLASS \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_SPARSE_DATA \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_CALLBACK_WRAPPERS \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLGAME_API UClass* StaticClass<class AThrowingCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BallGame_Source_BallGame_Public_ThrowingCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
