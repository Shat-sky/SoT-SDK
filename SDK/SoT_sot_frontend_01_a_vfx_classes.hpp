#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_vfx_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sot_frontend_01_a_vfx.sot_frontend_01_a_vfx_C
// 0x0000 (0x0418 - 0x0418)
class Asot_frontend_01_a_vfx_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass sot_frontend_01_a_vfx.sot_frontend_01_a_vfx_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
