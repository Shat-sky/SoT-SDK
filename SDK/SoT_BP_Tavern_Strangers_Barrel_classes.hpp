#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Tavern_Strangers_Barrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tavern_Strangers_Barrel.BP_Tavern_Strangers_Barrel_C
// 0x0000 (0x0418 - 0x0418)
class ABP_Tavern_Strangers_Barrel_C : public ATavernStrangersBarrel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Tavern_Strangers_Barrel.BP_Tavern_Strangers_Barrel_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
