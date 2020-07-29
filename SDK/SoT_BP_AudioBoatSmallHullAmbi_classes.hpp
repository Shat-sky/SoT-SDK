#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioBoatSmallHullAmbi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioBoatSmallHullAmbi.BP_AudioBoatSmallHullAmbi_C
// 0x00C8 (0x0658 - 0x0590)
class ABP_AudioBoatSmallHullAmbi_C : public AShipHullAudio
{
public:
	class UTritonComponent*                            Triton;                                                   // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_wake_stern;                                         // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_wake_bow;                                           // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_wake_side_L;                                        // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_wake_side_R;                                        // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_nest;                                         // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_mast;                                         // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_FL;                                           // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_FR;                                           // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_rope_front;                                   // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_brig_03;                                      // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_brig_02;                                      // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_rope_back;                                    // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_brig_01;                                      // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_04;                                     // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_03;                                     // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_02;                                     // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_cabin_01;                                     // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipAudioEmitterComponent*                  audio_creak_smallship_global;                             // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       DeckGrille;                                               // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       BrigDeck;                                                 // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       CaptainsCabin_Left;                                       // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       CaptainsCabin_Right;                                      // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       CaptainsCabin_Back;                                       // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioPortalComponent*                       TopToCaptainsCabin;                                       // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AudioBoatSmallHullAmbi.BP_AudioBoatSmallHullAmbi_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
