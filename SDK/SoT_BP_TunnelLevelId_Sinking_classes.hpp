#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TunnelLevelId_Sinking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TunnelLevelId_Sinking.BP_TunnelLevelId_Sinking_C
// 0x0000 (0x0028 - 0x0028)
class UBP_TunnelLevelId_Sinking_C : public UTunnelLevelId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TunnelLevelId_Sinking.BP_TunnelLevelId_Sinking_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
