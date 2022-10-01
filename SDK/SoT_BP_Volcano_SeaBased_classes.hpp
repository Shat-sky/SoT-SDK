#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Volcano_SeaBased_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Volcano_SeaBased.BP_Volcano_SeaBased_C
// 0x0008 (0x05F8 - 0x05F0)
class ABP_Volcano_SeaBased_C : public ABP_Volcano_C
{
public:
	class UNamedPointsComponent*                       NamedPoints;                                              // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Volcano_SeaBased.BP_Volcano_SeaBased_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
