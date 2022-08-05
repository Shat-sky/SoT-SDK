#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DeliverableFramework.DeliverableRequirementFeatureOverride
// 0x0018
struct FDeliverableRequirementFeatureOverride
{
	struct FName                                       FeatureName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDeliverableRequirementBase*>         Requirements;                                             // 0x0008(0x0010) (Edit, ExportObject, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
