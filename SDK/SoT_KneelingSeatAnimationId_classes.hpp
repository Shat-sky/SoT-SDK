#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_KneelingSeatAnimationId_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KneelingSeatAnimationId.KneelingSeatAnimationId_C
// 0x0000 (0x0070 - 0x0070)
class UKneelingSeatAnimationId_C : public USeatAnimationId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass KneelingSeatAnimationId.KneelingSeatAnimationId_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
