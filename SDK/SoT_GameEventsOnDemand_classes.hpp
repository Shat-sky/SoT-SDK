#pragma once

// Sea of Thieves (2.8.4) SDK

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
// 0x0060 (0x0088 - 0x0028)
class UGameEventsOnDemandLoserTunnelService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UVoyageDescDataAsset*                        LoserTunnelVoyageDescDataAsset;                           // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0040(0x0020) MISSED OFFSET
	TArray<struct FGuid>                               TrackedCrews;                                             // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

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
