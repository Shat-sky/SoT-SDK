#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LeverMechanismTrigger_SovereignHut_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LeverMechanismTrigger_SovereignHut.BP_LeverMechanismTrigger_SovereignHut_C
// 0x0018 (0x0580 - 0x0568)
class ABP_LeverMechanismTrigger_SovereignHut_C : public ASwitchMechanismTrigger
{
public:
	class UInteractableComponent*                      Interactable;                                             // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LeverMesh;                                                // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BaseMesh;                                                 // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LeverMechanismTrigger_SovereignHut.BP_LeverMechanismTrigger_SovereignHut_C"));
		return ptr;
	}


	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
