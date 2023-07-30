#pragma once

// Sea of Thieves (2.8.4) SDK

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
// 0x0020 (0x0CD0 - 0x0CB0)
class ABP_SoveriegnHarpoonLauncher_2_C : public AHarpoonLauncher
{
public:
	class UHarpoonItemLocationComponent*               HarpoonItemLocation;                                      // 0x0CB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CubeNotWalkable;                                          // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           MountCollision;                                           // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           BarrelCollision;                                          // 0x0CC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
