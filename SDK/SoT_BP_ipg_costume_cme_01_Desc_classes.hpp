#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ipg_costume_cme_01_Desc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ipg_costume_cme_01_Desc.BP_ipg_costume_cme_01_Desc_C
// 0x0000 (0x00E8 - 0x00E8)
class UBP_ipg_costume_cme_01_Desc_C : public UCostumeDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ipg_costume_cme_01_Desc.BP_ipg_costume_cme_01_Desc_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif