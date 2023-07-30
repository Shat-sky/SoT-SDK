#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_GameEventsOnDemandFramework_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameEventsOnDemandFramework.GameEventOnDemandAnnouncementBannerData
// 0x0078
struct FGameEventOnDemandAnnouncementBannerData
{
	struct FText                                       Header;                                                   // 0x0000(0x0038) (Edit)
	struct FText                                       Message;                                                  // 0x0038(0x0038) (Edit)
	struct FName                                       Tag;                                                      // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameEventsOnDemandFramework.GameEventAvailabilityData
// 0x0020
struct FGameEventAvailabilityData
{
	class FString                                      EventName;                                                // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EGameEventCategory>                    EventCategory;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAvailabilityState>                    AvailabilityState;                                        // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	class UClass*                                      ShipSizeLimit;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
