#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Emote_GhostCurse_Dance_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Emote_GhostCurse_Dance_Desc.BP_Emote_GhostCurse_Dance_Desc_C
// 0x0000 (0x0100 - 0x0100)
class UBP_Emote_GhostCurse_Dance_Desc_C : public UEmoteDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Emote_GhostCurse_Dance_Desc.BP_Emote_GhostCurse_Dance_Desc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
