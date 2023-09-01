#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NudgeComposite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NudgeComposite.NudgeFromExplosionsPolicy
// 0x0010 (0x00D8 - 0x00C8)
class UNudgeFromExplosionsPolicy : public UNudgePolicy
{
public:
	TArray<struct FNudgeChancePerDamagerType>          AcceptedDamagerTypes;                                     // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NudgeComposite.NudgeFromExplosionsPolicy"));
		return ptr;
	}

};


// Class NudgeComposite.NudgeFromShipCollisionPolicy
// 0x0008 (0x00D0 - 0x00C8)
class UNudgeFromShipCollisionPolicy : public UNudgePolicy
{
public:
	int                                                DamageAmountRequiredToNudge;                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceOfNudge;                                            // 0x00CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NudgeComposite.NudgeFromShipCollisionPolicy"));
		return ptr;
	}

};


// Class NudgeComposite.NudgeFromStormPolicy
// 0x0090 (0x0158 - 0x00C8)
class UNudgeFromStormPolicy : public UNudgePolicy
{
public:
	float                                              ChanceOfNudge;                                            // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FWeightedProbabilityRangeOfRanges           WeightedTimers;                                           // 0x00D0(0x0030) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0100(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NudgeComposite.NudgeFromStormPolicy"));
		return ptr;
	}


	void OnTimerCompleted();
};


// Class NudgeComposite.NudgeFromWaterLevelPolicy
// 0x0028 (0x00F0 - 0x00C8)
class UNudgeFromWaterLevelPolicy : public UNudgePolicy
{
public:
	float                                              ChanceOfNudge;                                            // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x00CC(0x0014) MISSED OFFSET
	float                                              WaterLevelDifferenceBetweenUpdates;                       // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZOffsetFromWaterToMountpoint;                             // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NudgeComposite.NudgeFromWaterLevelPolicy"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
