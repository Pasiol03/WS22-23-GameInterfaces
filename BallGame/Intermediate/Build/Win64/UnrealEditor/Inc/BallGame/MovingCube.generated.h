// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BALLGAME_MovingCube_generated_h
#error "MovingCube.generated.h already included, missing '#pragma once' in MovingCube.h"
#endif
#define BALLGAME_MovingCube_generated_h

#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_SPARSE_DATA
#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompHit);


#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompHit);


#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_EVENT_PARMS
#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_CALLBACK_WRAPPERS
#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingCube(); \
	friend struct Z_Construct_UClass_AMovingCube_Statics; \
public: \
	DECLARE_CLASS(AMovingCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BallGame"), NO_API) \
	DECLARE_SERIALIZER(AMovingCube)


#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMovingCube(); \
	friend struct Z_Construct_UClass_AMovingCube_Statics; \
public: \
	DECLARE_CLASS(AMovingCube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BallGame"), NO_API) \
	DECLARE_SERIALIZER(AMovingCube)


#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingCube(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingCube) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingCube); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingCube(AMovingCube&&); \
	NO_API AMovingCube(const AMovingCube&); \
public:


#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingCube(AMovingCube&&); \
	NO_API AMovingCube(const AMovingCube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingCube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingCube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingCube)


#define FID_BallGame_Source_BallGame_Public_MovingCube_h_11_PROLOG \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_EVENT_PARMS


#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_SPARSE_DATA \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_RPC_WRAPPERS \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_CALLBACK_WRAPPERS \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_INCLASS \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BallGame_Source_BallGame_Public_MovingCube_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_SPARSE_DATA \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_CALLBACK_WRAPPERS \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_INCLASS_NO_PURE_DECLS \
	FID_BallGame_Source_BallGame_Public_MovingCube_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BALLGAME_API UClass* StaticClass<class AMovingCube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BallGame_Source_BallGame_Public_MovingCube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
