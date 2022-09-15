#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TaleBookProxy_Shroudbreaker_AdditionalPuzzles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TaleBookProxy_Shroudbreaker_AdditionalPuzzles.BP_TaleBookProxy_Shroudbreaker_AdditionalPuzzles_C
// 0x0010 (0x03D8 - 0x03C8)
class ABP_TaleBookProxy_Shroudbreaker_AdditionalPuzzles_C : public AActor
{
public:
	class UPhasedActorComponent*                       PhasedBook;                                               // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot1;                                        // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_TaleBookProxy_Shroudbreaker_AdditionalPuzzles.BP_TaleBookProxy_Shroudbreaker_AdditionalPuzzles_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
