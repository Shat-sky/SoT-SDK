#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RaisedLegsSeatAnimationId_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RaisedLegsSeatAnimationId.RaisedLegsSeatAnimationId_C
// 0x0000 (0x0070 - 0x0070)
class URaisedLegsSeatAnimationId_C : public USeatAnimationId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass RaisedLegsSeatAnimationId.RaisedLegsSeatAnimationId_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
