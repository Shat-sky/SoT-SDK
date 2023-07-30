#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NudgeFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NudgeFramework.NudgeInterpolationParamsDataAsset
// 0x0028 (0x0050 - 0x0028)
class UNudgeInterpolationParamsDataAsset : public UDataAsset
{
public:
	struct FNudgeInterpolationParams                   NudgeInterpParams;                                        // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	class UForceFeedbackEffect*                        ControllerForceFeedbackEffect;                            // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NudgeFramework.NudgeInterpolationParamsDataAsset"));
		return ptr;
	}

};


// Class NudgeFramework.NudgeableInterface
// 0x0000 (0x0028 - 0x0028)
class UNudgeableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NudgeFramework.NudgeableInterface"));
		return ptr;
	}

};


// Class NudgeFramework.NudgePolicyInterface
// 0x0000 (0x0028 - 0x0028)
class UNudgePolicyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NudgeFramework.NudgePolicyInterface"));
		return ptr;
	}

};


// Class NudgeFramework.NudgePolicy
// 0x00A0 (0x00C8 - 0x0028)
class UNudgePolicy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET
	class AActor*                                      OwningActor;                                              // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             OwnerComponent;                                           // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NudgeFramework.NudgePolicy"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
