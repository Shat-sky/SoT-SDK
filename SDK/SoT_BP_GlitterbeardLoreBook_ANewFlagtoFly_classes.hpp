#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GlitterbeardLoreBook_ANewFlagtoFly_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GlitterbeardLoreBook_ANewFlagtoFly.BP_GlitterbeardLoreBook_ANewFlagtoFly_C
// 0x0018 (0x0538 - 0x0520)
class ABP_GlitterbeardLoreBook_ANewFlagtoFly_C : public AModalInteractionProxy
{
public:
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Books;                                                    // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GlitterbeardLoreBook_ANewFlagtoFly.BP_GlitterbeardLoreBook_ANewFlagtoFly_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
