#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptaincyNamingCeremonyStarter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CaptaincyNamingCeremonyStarter.BP_CaptaincyNamingCeremonyStarter_C
// 0x0000 (0x00F8 - 0x00F8)
class UBP_CaptaincyNamingCeremonyStarter_C : public UCaptaincyStarter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CaptaincyNamingCeremonyStarter.BP_CaptaincyNamingCeremonyStarter_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
