#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FactionsFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FactionsFramework.FactionCurseInterface
// 0x0000 (0x0028 - 0x0028)
class UFactionCurseInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FactionsFramework.FactionCurseInterface"));
		return ptr;
	}

};


// Class FactionsFramework.FactionServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UFactionServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FactionsFramework.FactionServiceInterface"));
		return ptr;
	}

};


// Class FactionsFramework.IsTargetWearingGhostCurseStatCondition
// 0x0000 (0x0030 - 0x0030)
class UIsTargetWearingGhostCurseStatCondition : public UTargetedStatCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FactionsFramework.IsTargetWearingGhostCurseStatCondition"));
		return ptr;
	}

};


// Class FactionsFramework.IsTargetWearingSkeletonCurseStatCondition
// 0x0000 (0x0030 - 0x0030)
class UIsTargetWearingSkeletonCurseStatCondition : public UTargetedStatCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FactionsFramework.IsTargetWearingSkeletonCurseStatCondition"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
