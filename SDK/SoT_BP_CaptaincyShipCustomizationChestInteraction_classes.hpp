#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptaincyShipCustomizationChestInteraction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CaptaincyShipCustomizationChestInteraction.BP_CaptaincyShipCustomizationChestInteraction_C
// 0x0008 (0x0418 - 0x0410)
class ABP_CaptaincyShipCustomizationChestInteraction_C : public ACaptaincyShipCustomizationChestInteraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CaptaincyShipCustomizationChestInteraction.BP_CaptaincyShipCustomizationChestInteraction_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
