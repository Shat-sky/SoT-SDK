#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SoveriegnHarpoonLauncher_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SoveriegnHarpoonLauncher_3.BP_SoveriegnHarpoonLauncher_2_C
// 0x0018 (0x0B78 - 0x0B60)
class ABP_SoveriegnHarpoonLauncher_2_C : public AHarpoonLauncher
{
public:
	class UStaticMeshComponent*                        CubeNotWalkable;                                          // 0x0B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           MountCollision;                                           // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           BarrelCollision;                                          // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SoveriegnHarpoonLauncher_3.BP_SoveriegnHarpoonLauncher_2_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
