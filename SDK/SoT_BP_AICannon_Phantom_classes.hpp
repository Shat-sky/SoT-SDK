#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AICannon_Phantom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AICannon_Phantom.BP_AICannon_Phantom_C
// 0x0000 (0x0CE0 - 0x0CE0)
class ABP_AICannon_Phantom_C : public ABP_AICannon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AICannon_Phantom.BP_AICannon_Phantom_C"));
		return ptr;
	}


	void TurnOff();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif