#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PlayerBuriedItemsMapBundleInteractionPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C
// 0x0030 (0x03F8 - 0x03C8)
class ABP_PlayerBuriedItemsMapBundleInteractionPoint_C : public AActor
{
public:
	class UPlayerBuriedItemsMapBundleInteractionComponent* PlayerBuriedItemsMapBundleInteraction;                    // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActionRulesComponent*                       ActionRules;                                              // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 Token_Asset;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Show_Token_Animation_Time;                                // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Token_Material;                                           // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_PlayerBuriedItemsMapBundleInteractionPoint.BP_PlayerBuriedItemsMapBundleInteractionPoint_C"));
		return ptr;
	}


	void GetObjectDisplayName();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
