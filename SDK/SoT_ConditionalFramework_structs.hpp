#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ConditionalFramework_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_AthenaEngine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ConditionalFramework.ConditionInstance
// 0x0000 (0x0020 - 0x0020)
struct FConditionInstance : public FConfigurableStructureInstanceWrapper
{

};

// ScriptStruct ConditionalFramework.ConditionBase
// 0x0008
struct FConditionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadSelectorInstance
// 0x0000 (0x0020 - 0x0020)
struct FConditionContextPayloadSelectorInstance : public FConfigurableStructureInstanceWrapper
{

};

// ScriptStruct ConditionalFramework.TargetedPayloadConditionBase
// 0x0020 (0x0028 - 0x0008)
struct FTargetedPayloadConditionBase : public FConditionBase
{
	struct FConditionContextPayloadSelectorInstance    PayloadSelector;                                          // 0x0008(0x0020) (Edit)
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadTarget
// 0x0010
struct FConditionContextPayloadTarget
{
	class UScriptStruct*                               PayloadStruct;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PayloadMember;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadSelectorBase
// 0x0018
struct FConditionContextPayloadSelectorBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FConditionContextPayloadTarget              PayloadTarget;                                            // 0x0008(0x0010) (Edit)
};

// ScriptStruct ConditionalFramework.AndCondition
// 0x0010 (0x0018 - 0x0008)
struct FAndCondition : public FConditionBase
{
	TArray<struct FConditionInstance>                  Conditions;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ConditionalFramework.ConditionFromAsset
// 0x0008 (0x0010 - 0x0008)
struct FConditionFromAsset : public FConditionBase
{
	class UConditionRootAsset*                         ConditionAsset;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ConditionalFramework.IsFeatureEnabledCondition
// 0x0010 (0x0018 - 0x0008)
struct FIsFeatureEnabledCondition : public FConditionBase
{
	struct FFeatureFlag                                Feature;                                                  // 0x0008(0x000C) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ConditionalFramework.IsGameOnSpecificPlayModeCondition
// 0x0008 (0x0030 - 0x0028)
struct FIsGameOnSpecificPlayModeCondition : public FTargetedPayloadConditionBase
{
	TEnumAsByte<EPlayMode>                             TargetMode;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ConditionalFramework.IsGameOnSpecificPlayModeVariantCondition
// 0x0008 (0x0030 - 0x0028)
struct FIsGameOnSpecificPlayModeVariantCondition : public FTargetedPayloadConditionBase
{
	TEnumAsByte<EPlayModeVariant>                      TargetMode;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ConditionalFramework.IsObjectOfTypeCondition
// 0x0010 (0x0038 - 0x0028)
struct FIsObjectOfTypeCondition : public FTargetedPayloadConditionBase
{
	TArray<TAssetPtr<class UClass>>                    TargetObjectClasses;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ConditionalFramework.IsSpecifiedActorCondition
// 0x0040 (0x0048 - 0x0008)
struct FIsSpecifiedActorCondition : public FConditionBase
{
	struct FConditionContextPayloadSelectorInstance    SpecifyingActorPayloadSelector;                           // 0x0008(0x0020) (Edit)
	struct FConditionContextPayloadSelectorInstance    TargetActorPayloadSelector;                               // 0x0028(0x0020) (Edit)
};

// ScriptStruct ConditionalFramework.NotCondition
// 0x0020 (0x0028 - 0x0008)
struct FNotCondition : public FConditionBase
{
	struct FConditionInstance                          Condition;                                                // 0x0008(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct ConditionalFramework.OrCondition
// 0x0010 (0x0018 - 0x0008)
struct FOrCondition : public FConditionBase
{
	TArray<struct FConditionInstance>                  Conditions;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadBase
// 0x0008
struct FConditionContextPayloadBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ConditionalFramework.WorldObjectConditionContextPayload
// 0x0008 (0x0010 - 0x0008)
struct FWorldObjectConditionContextPayload : public FConditionContextPayloadBase
{
	class UWorld*                                      WorldObject;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConditionalFramework.TargetConditionContextPayload
// 0x0008 (0x0010 - 0x0008)
struct FTargetConditionContextPayload : public FConditionContextPayloadBase
{
	class AActor*                                      Target;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConditionalFramework.InstigatorConditionContextPayload
// 0x0008 (0x0010 - 0x0008)
struct FInstigatorConditionContextPayload : public FConditionContextPayloadBase
{
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ConditionalFramework.ConditionContextPayloadComponentOwnerSelector
// 0x0000 (0x0018 - 0x0018)
struct FConditionContextPayloadComponentOwnerSelector : public FConditionContextPayloadSelectorBase
{

};

// ScriptStruct ConditionalFramework.ConditionContextPayloadObjectSelector
// 0x0000 (0x0018 - 0x0018)
struct FConditionContextPayloadObjectSelector : public FConditionContextPayloadSelectorBase
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
