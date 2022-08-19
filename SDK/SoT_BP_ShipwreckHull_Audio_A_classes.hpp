#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckHull_Audio_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckHull_Audio_A.BP_ShipwreckHull_Audio_A_C
// 0x0040 (0x0420 - 0x03E0)
class ABP_ShipwreckHull_Audio_A_C : public AShipwreckHullAudio
{
public:
	class UShipwreckAudioEmitterComponent*             ShipwreckAudioEmitter7;                                   // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipwreckAudioEmitterComponent*             ShipwreckAudioEmitter6;                                   // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipwreckAudioEmitterComponent*             ShipwreckAudioEmitter5;                                   // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipwreckAudioEmitterComponent*             ShipwreckAudioEmitter4;                                   // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipwreckAudioEmitterComponent*             ShipwreckAudioEmitter3;                                   // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipwreckAudioEmitterComponent*             ShipwreckAudioEmitter2;                                   // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipwreckAudioEmitterComponent*             ShipwreckAudioEmitter1;                                   // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipwreckAudioEmitterComponent*             ShipwreckAudioEmitter;                                    // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ShipwreckHull_Audio_A.BP_ShipwreckHull_Audio_A_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
