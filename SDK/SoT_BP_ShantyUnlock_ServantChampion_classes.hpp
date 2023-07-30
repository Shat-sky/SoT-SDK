#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShantyUnlock_ServantChampion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShantyUnlock_ServantChampion.BP_ShantyUnlock_ServantChampion_C
// 0x0000 (0x00C8 - 0x00C8)
class UBP_ShantyUnlock_ServantChampion_C : public UShantyUnlockDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShantyUnlock_ServantChampion.BP_ShantyUnlock_ServantChampion_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
