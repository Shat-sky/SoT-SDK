#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_WaterSlide_enums.hpp"
#include "SoT_ActionStateMachine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_AthenaInput_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WaterSlide.WaterSlideParams
// 0x0028
struct FWaterSlideParams
{
	float                                              ForwardSpeed;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              IncreaseForwardSpeedMultiplier;                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecreaseForwardSpeedMultiplier;                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VeeringSpeed;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LeftVeeringDistance;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightVeeringDistance;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FPlayerStat                                 StatToFireForRouteChange;                                 // 0x0018(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UParticleSystem*                             PlayerSplashingVFXOverride;                               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WaterSlide.ZiplineFeelParameters
// 0x0310
struct FZiplineFeelParameters
{
	float                                              MaxSpeed;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartingSpeed;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSpeed;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplier;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DecelerationMultiplier;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FRuntimeVectorCurve                         SwingAngleControlDegrees;                                 // 0x0018(0x0170) (Edit)
	struct FRuntimeVectorCurve                         SwingSpeedControlRPM;                                     // 0x0188(0x0170) (Edit)
	struct FVector2D                                   WindResistanceMinMaxAngleDegrees;                         // 0x02F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FOVMinMaxSpeed;                                           // 0x0300(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FOVMinMaxAngleDegrees;                                    // 0x0308(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WaterSlide.OnUpdateZiplineActionStateEvent
// 0x001C
struct FOnUpdateZiplineActionStateEvent
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct WaterSlide.OnEndZiplineActionStateEvent
// 0x0010
struct FOnEndZiplineActionStateEvent
{
	class UWwiseEvent*                                 ZiplineEnd;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ZiplineEndLoop;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WaterSlide.OnStartZiplineActionStateEvent
// 0x0028
struct FOnStartZiplineActionStateEvent
{
	class UWwiseEvent*                                 ZiplineStart;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ZiplineAdditiveOneShot;                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 ZiplineLoopStart;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ZiplineWindVFX;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ZiplineTrailVFX;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WaterSlide.OnExitedRideEvent
// 0x0001
struct FOnExitedRideEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct WaterSlide.RideTransitionActionStateConstructionInfo
// 0x0028 (0x0058 - 0x0030)
struct FRideTransitionActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	class ARide*                                       Ride;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERideDirection>                        Direction;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Offset;                                                   // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
};

// ScriptStruct WaterSlide.RideTransitionActionStateParams
// 0x0004 (0x0014 - 0x0010)
struct FRideTransitionActionStateParams : public FDockToObjectActionStateParams
{
	float                                              Duration;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WaterSlide.WaterSlideActionStateConstructionInfo
// 0x0008 (0x0038 - 0x0030)
struct FWaterSlideActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	class USceneComponent*                             SceneComponent;                                           // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct WaterSlide.WaterSlideActionStateParams
// 0x0024
struct FWaterSlideActionStateParams
{
	float                                              ForcedFieldOfView;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ForceStash;                                               // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FLookAtOffsetParams                         LookAtOffsetParams;                                       // 0x0008(0x001C) (Edit)
};

// ScriptStruct WaterSlide.OnPlayerSpeedOnWaterSlideChangedActionStateEvent
// 0x000C
struct FOnPlayerSpeedOnWaterSlideChangedActionStateEvent
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct WaterSlide.OnPlayerChangedWaterSlideRouteActionStateEvent
// 0x0010
struct FOnPlayerChangedWaterSlideRouteActionStateEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UWwiseEvent*                                 WaterSlideChangeForkOneShot;                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WaterSlide.OnEndWaterSlideActionStateEvent
// 0x0018
struct FOnEndWaterSlideActionStateEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UWwiseEvent*                                 WaterSlideEnd;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WaterSlideIsEndOneShot;                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WaterSlide.OnStartWaterSlideActionStateEvent
// 0x0010
struct FOnStartWaterSlideActionStateEvent
{
	class UWwiseEvent*                                 WaterSlideStart;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             WaterSlideVfxOverride;                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WaterSlide.ZiplineActionStateConstructionInfo
// 0x0010 (0x0040 - 0x0030)
struct FZiplineActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	class USceneComponent*                             SceneComponent;                                           // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ERideDirection>                        MovementDirection;                                        // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct WaterSlide.ZipLineActionStateParams
// 0x001C
struct FZipLineActionStateParams
{
	struct FLookAtOffsetParams                         LookAtOffsetParams;                                       // 0x0000(0x001C) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
