#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GiveShroudbreaker_Shroudbreaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GiveShroudbreaker_Shroudbreaker.BP_GiveShroudbreaker_Shroudbreaker_C
// 0x0008 (0x03D0 - 0x03C8)
class ABP_GiveShroudbreaker_Shroudbreaker_C : public AActor
{
public:
	class UStaticMeshComponent*                        gmp_tal_shroudbreaker_statue_01_a;                        // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GiveShroudbreaker_Shroudbreaker.BP_GiveShroudbreaker_Shroudbreaker_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
