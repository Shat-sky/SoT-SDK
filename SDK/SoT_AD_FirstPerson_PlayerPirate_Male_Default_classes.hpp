#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AD_FirstPerson_PlayerPirate_Male_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Default.AD_FirstPerson_PlayerPirate_Male_Default_C
// 0x0410 (0x0448 - 0x0038)
class UAD_FirstPerson_PlayerPirate_Male_Default_C : public UFirstPersonAnimationData
{
public:
	struct FADS_IdlesNative                            Idles;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                               // 0x0048(0x0048) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                  // 0x0090(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                 // 0x0108(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                    // 0x0170(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                  // 0x01F8(0x0068) (Edit, BlueprintVisible)
	struct FADS_CameraAdditiveNative                   CameraAdditive;                                           // 0x0260(0x0050) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                    // 0x02B0(0x0010) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                  // 0x02C0(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02C2(0x0006) MISSED OFFSET
	struct FADS_CannonNative                           Cannon;                                                   // 0x02C8(0x0038) (Edit, BlueprintVisible)
	struct FADS_RowingBoatNative                       Rowboat;                                                  // 0x0300(0x0098) (Edit, BlueprintVisible)
	struct FADS_WaterPumpNative                        WaterPump;                                                // 0x0398(0x0028) (Edit, BlueprintVisible)
	struct FADS_FacialNative                           Facial;                                                   // 0x03C0(0x0088) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Default.AD_FirstPerson_PlayerPirate_Male_Default_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
