#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ResourceRowboatSpawner_CannonRowboatMegaSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ResourceRowboatSpawner_CannonRowboatMegaSpawner.BP_ResourceRowboatSpawner_CannonRowboatMegaSpawner_C
// 0x0000 (0x05C0 - 0x05C0)
class UBP_ResourceRowboatSpawner_CannonRowboatMegaSpawner_C : public UIslandWatercraftSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ResourceRowboatSpawner_CannonRowboatMegaSpawner.BP_ResourceRowboatSpawner_CannonRowboatMegaSpawner_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
