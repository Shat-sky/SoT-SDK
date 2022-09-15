#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Projectile_GhostCannonball_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_GhostCannonball.BP_Projectile_GhostCannonball_C
// 0x0018 (0x0668 - 0x0650)
class ABP_Projectile_GhostCannonball_C : public ACannonProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CannonBall;                                               // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Collision;                                                // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Projectile_GhostCannonball.BP_Projectile_GhostCannonball_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Projectile_GhostCannonball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
