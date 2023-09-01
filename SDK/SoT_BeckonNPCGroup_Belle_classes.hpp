#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BeckonNPCGroup_Belle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BeckonNPCGroup_Belle.BeckonNPCGroup_Belle_C
// 0x0000 (0x0028 - 0x0028)
class UBeckonNPCGroup_Belle_C : public UBeckonNPCGroupID
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BeckonNPCGroup_Belle.BeckonNPCGroup_Belle_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
