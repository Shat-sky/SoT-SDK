#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Soveriegn_LiftMechanism_Toggle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Soveriegn_LiftMechanism_Toggle.BP_Soveriegn_LiftMechanism_Toggle_C
// 0x0038 (0x05A8 - 0x0570)
class ABP_Soveriegn_LiftMechanism_Toggle_C : public AToggleAnimatedMechanismAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Rope_Anchor_Point;                                        // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh4;                                              // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_RopeRendererComponent_C*                 BP_RopeRendererComponent;                                 // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Rope_Source;                                              // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UIntentCombinerComponent*                    IntentCombiner;                                           // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Soveriegn_LiftMechanism_Toggle.BP_Soveriegn_LiftMechanism_Toggle_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Soveriegn_LiftMechanism_Toggle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
