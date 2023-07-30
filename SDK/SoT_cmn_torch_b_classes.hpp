#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_torch_b_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cmn_torch_b.cmn_torch_b_C
// 0x0018 (0x03F0 - 0x03D8)
class Acmn_torch_b_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    vfx_fire_torch;                                           // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass cmn_torch_b.cmn_torch_b_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_cmn_torch_b(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
