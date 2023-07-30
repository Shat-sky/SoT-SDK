#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PL_CS_HauntedForts_EmplacementDestroyed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PL_CS_HauntedForts_EmplacementDestroyed.PL_CS_HauntedForts_EmplacementDestroyed_C
// 0x0000 (0x0140 - 0x0140)
class UPL_CS_HauntedForts_EmplacementDestroyed_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PL_CS_HauntedForts_EmplacementDestroyed.PL_CS_HauntedForts_EmplacementDestroyed_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
