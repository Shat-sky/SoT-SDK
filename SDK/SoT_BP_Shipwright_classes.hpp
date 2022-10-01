#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Shipwright_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shipwright.BP_Shipwright_C
// 0x0060 (0x06F0 - 0x0690)
class ABP_Shipwright_C : public ANPC
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNamedNPCComponent*                          NamedNPC;                                                 // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCargoRunParticipantComponent*               CargoRunParticipant;                                      // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialogComponent;                                       // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           SolidHits;                                                // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWwiseEmitter                               WwiseEmitter;                                             // 0x06C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseEvent*                                 WwiseShipwrightHummingPlay;                               // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 WwiseShipwrightHummingStop;                               // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Shipwright.BP_Shipwright_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Shipwright(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
