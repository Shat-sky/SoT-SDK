#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Adv8_HeraldOfTheFlame_Larinna_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Adv8_HeraldOfTheFlame_Larinna.BP_Adv8_HeraldOfTheFlame_Larinna_C
// 0x0000 (0x06C8 - 0x06C8)
class ABP_Adv8_HeraldOfTheFlame_Larinna_C : public ABP_Larinna_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Adv8_HeraldOfTheFlame_Larinna.BP_Adv8_HeraldOfTheFlame_Larinna_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
