#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_GlitterbeardLoreBook_FeatheredFriends_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GlitterbeardLoreBook_FeatheredFriends.BP_GlitterbeardLoreBook_FeatheredFriends_C
// 0x0018 (0x0518 - 0x0500)
class ABP_GlitterbeardLoreBook_FeatheredFriends_C : public AModalInteractionProxy
{
public:
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Books;                                                    // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_GlitterbeardLoreBook_FeatheredFriends.BP_GlitterbeardLoreBook_FeatheredFriends_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
