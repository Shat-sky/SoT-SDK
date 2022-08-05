#pragma once

// Sea of Thieves (2.6.0) SDK

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
// 0x0420 (0x0490 - 0x0070)
class UAD_FirstPerson_PlayerPirate_Male_Default_C : public UFirstPersonAnimationData
{
public:
	struct FADS_IdlesNative                            Idles;                                                    // 0x0070(0x0010) (Edit, BlueprintVisible)
	struct FADS_LocomotionNative                       Locomotion;                                               // 0x0080(0x0050) (Edit, BlueprintVisible)
	struct FADS_JumpingNative                          Jumping;                                                  // 0x00D0(0x0078) (Edit, BlueprintVisible)
	struct FADS_SwimmingNative                         Swimming;                                                 // 0x0148(0x0068) (Edit, BlueprintVisible)
	struct FADS_WheelNative                            Wheel;                                                    // 0x01B0(0x0088) (Edit, BlueprintVisible)
	struct FADS_CapstanNative                          Capstan;                                                  // 0x0238(0x0068) (Edit, BlueprintVisible)
	struct FADS_CameraAdditiveNative                   CameraAdditive;                                           // 0x02A0(0x0050) (Edit, BlueprintVisible)
	struct FADS_ObjectsNative                          Items;                                                    // 0x02F0(0x0010) (Edit, BlueprintVisible)
	struct FADS_Sockets                                Sockets;                                                  // 0x0300(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0302(0x0006) MISSED OFFSET
	struct FADS_CannonNative                           Cannon;                                                   // 0x0308(0x0038) (Edit, BlueprintVisible)
	struct FADS_RowingBoatNative                       Rowboat;                                                  // 0x0340(0x0098) (Edit, BlueprintVisible)
	struct FADS_WaterPumpNative                        WaterPump;                                                // 0x03D8(0x0028) (Edit, BlueprintVisible)
	struct FADS_FacialNative                           Facial;                                                   // 0x0400(0x0090) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AD_FirstPerson_PlayerPirate_Male_Default.AD_FirstPerson_PlayerPirate_Male_Default_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
