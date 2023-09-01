#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Mojo_Tale2_TaleActive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mojo_Tale2_TaleActive.Mojo_Tale2_TaleActive_C
// 0x0000 (0x0028 - 0x0028)
class UMojo_Tale2_TaleActive_C : public UTaleQuestQueryableStateDataID
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Mojo_Tale2_TaleActive.Mojo_Tale2_TaleActive_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
