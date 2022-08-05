#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_HowlingWolfDeepSeaRegion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HowlingWolfDeepSeaRegion.BP_HowlingWolfDeepSeaRegion_C
// 0x0010 (0x0448 - 0x0438)
class ABP_HowlingWolfDeepSeaRegion_C : public ADeepSeaRegion
{
public:
	class UCapsuleComponent*                           PreviewCapsuleTwo;                                        // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           PreviewCapsuleOne;                                        // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_HowlingWolfDeepSeaRegion.BP_HowlingWolfDeepSeaRegion_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif