#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Mojo_CaptainScott_ActorOfInterestID_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Mojo_CaptainScott_ActorOfInterestID.BP_Mojo_CaptainScott_ActorOfInterestID_C
// 0x0000 (0x0028 - 0x0028)
class UBP_Mojo_CaptainScott_ActorOfInterestID_C : public UActorOfInterestId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Mojo_CaptainScott_ActorOfInterestID.BP_Mojo_CaptainScott_ActorOfInterestID_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
