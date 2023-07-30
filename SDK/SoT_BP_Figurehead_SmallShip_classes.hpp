#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_SmallShip_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Figurehead_SmallShip.BP_Figurehead_SmallShip_C
// 0x0010 (0x03F8 - 0x03E8)
class ABP_Figurehead_SmallShip_C : public AGenericPartWithVFX
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Figurehead;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Figurehead_SmallShip.BP_Figurehead_SmallShip_C"));
		return ptr;
	}


	class UParticleSystemComponent* GetVFXComponent();
	class UStaticMeshComponent* GetMeshComponent();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
