#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ZoomInOnWieldableItems_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ZoomInOnWieldableItems.ZoomedInOnWieldableItemActionStateId
// 0x0000 (0x0028 - 0x0028)
class UZoomedInOnWieldableItemActionStateId : public UActionStateId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ZoomInOnWieldableItems.ZoomedInOnWieldableItemActionStateId"));
		return ptr;
	}

};


// Class ZoomInOnWieldableItems.ZoomInOnWieldableItemComponent
// 0x0060 (0x0128 - 0x00C8)
class UZoomInOnWieldableItemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	struct FName                                       FeatureName;                                              // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomedInFov;                                              // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreelookPitch;                                            // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreelookYaw;                                              // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreelookOutInterpolationRate;                             // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookSensitivityScaler;                                    // 0x00E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x00EC(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ZoomInOnWieldableItems.ZoomInOnWieldableItemComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
