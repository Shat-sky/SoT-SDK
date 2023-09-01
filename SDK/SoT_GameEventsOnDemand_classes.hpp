#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameEventsOnDemand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameEventsOnDemand.EnvQueryGenerator_SeaBasedGameEventOnDemandLocations
// 0x0000 (0x0058 - 0x0058)
class UEnvQueryGenerator_SeaBasedGameEventOnDemandLocations : public UEnvQueryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemand.EnvQueryGenerator_SeaBasedGameEventOnDemandLocations"));
		return ptr;
	}

};


// Class GameEventsOnDemand.GameEventsOnDemandAvailabilityService
// 0x0060 (0x0088 - 0x0028)
class UGameEventsOnDemandAvailabilityService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemand.GameEventsOnDemandAvailabilityService"));
		return ptr;
	}

};


// Class GameEventsOnDemand.GameEventsOnDemandLoserTunnelService
// 0x0140 (0x0508 - 0x03C8)
class AGameEventsOnDemandLoserTunnelService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x03D8(0x0058) MISSED OFFSET
	class UVoyageDescDataAsset*                        LoserTunnelVoyageDescDataAsset;                           // 0x0430(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0438(0x0050) MISSED OFFSET
	TArray<struct FGameEventsOnDemandLoserTunnelCrewData> TrackedCrews;                                             // 0x0488(0x0010) (Net, ZeroConstructor)
	struct FName                                       TemporaryBannerTag;                                       // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x68];                                      // 0x04A0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameEventsOnDemand.GameEventsOnDemandLoserTunnelService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
