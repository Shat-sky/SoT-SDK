#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_cave_rocks_06_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_cave_rocks_06.wsp_cave_rocks_06_C
// 0x0028 (0x0430 - 0x0408)
class Awsp_cave_rocks_06_C : public ABP_Placement_HeightDrop_C
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent01;                                    // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass wsp_cave_rocks_06.wsp_cave_rocks_06_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif