#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AdventureOnDemand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AdventureOnDemand.AdventureOnDemandService
// 0x02A0 (0x0668 - 0x03C8)
class AAdventureOnDemandService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET
	class UAdventureOnDemandServiceParams*             Params;                                                   // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAdventureOnDemandVoyageSelectionDataAsset*  VoyageSelectionDataAsset;                                 // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x03E8(0x00B0) MISSED OFFSET
	TArray<struct FAdventureOnDemandServiceCrewEntry>  DiveToTunnelEntries;                                      // 0x0498(0x0010) (ZeroConstructor)
	TArray<struct FAdventureOnDemandServiceCrewEntry>  LeaveTunnelEntries;                                       // 0x04A8(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               CrewsDivingToTunnel;                                      // 0x04B8(0x0010) (Net, ZeroConstructor)
	TArray<struct FGuid>                               CrewsInArrivalTunnel;                                     // 0x04C8(0x0010) (Net, ZeroConstructor)
	TArray<struct FGuid>                               CrewsOnCooldown;                                          // 0x04D8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x180];                                     // 0x04E8(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.AdventureOnDemandService"));
		return ptr;
	}

};


// Class AdventureOnDemand.GameEventOnDemandArrivalTunnelWorkerBase
// 0x0078 (0x00A8 - 0x0030)
class UGameEventOnDemandArrivalTunnelWorkerBase : public UAdventureOnDemandArrivalTunnelWorkerBase
{
public:
	float                                              TriggerTunnelFailureTimeout;                              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinRangeFromTarget;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRangeFromTarget;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SubsequentCrewJoinRadiusModifier;                         // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0040(0x0048) MISSED OFFSET
	class UVoyageDescDataAsset*                        LeaveTunnelVoyageDesc;                                    // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0090(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.GameEventOnDemandArrivalTunnelWorkerBase"));
		return ptr;
	}

};


// Class AdventureOnDemand.IslandBasedGameEventOnDemandArrivalTunnelWorker
// 0x0018 (0x00C0 - 0x00A8)
class UIslandBasedGameEventOnDemandArrivalTunnelWorker : public UGameEventOnDemandArrivalTunnelWorkerBase
{
public:
	bool                                               UseSpawnDistanceFromIslandForResurfaceRadius;             // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	float                                              ResurfaceMaxRadiusModifier;                               // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.IslandBasedGameEventOnDemandArrivalTunnelWorker"));
		return ptr;
	}

};


// Class AdventureOnDemand.SkellyFortEventOnDemandArrivalTunnelWorker
// 0x0098 (0x0158 - 0x00C0)
class USkellyFortEventOnDemandArrivalTunnelWorker : public UIslandBasedGameEventOnDemandArrivalTunnelWorker
{
public:
	class UClass*                                      SkellyFortType;                                           // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x84];                                      // 0x00C8(0x0084) MISSED OFFSET
	float                                              RetryRequestEventFrequency;                               // 0x014C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.SkellyFortEventOnDemandArrivalTunnelWorker"));
		return ptr;
	}

};


// Class AdventureOnDemand.SeaBasedGameEventOnDemandArrivalTunnelWorker
// 0x0068 (0x0110 - 0x00A8)
class USeaBasedGameEventOnDemandArrivalTunnelWorker : public UGameEventOnDemandArrivalTunnelWorkerBase
{
public:
	TAssetPtr<class UClass>                            GameEventType;                                            // 0x00A8(0x0020) (Edit, DisableEditOnInstance)
	float                                              VacateOccupiedLocationTimer;                              // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x00CC(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.SeaBasedGameEventOnDemandArrivalTunnelWorker"));
		return ptr;
	}

};


// Class AdventureOnDemand.KrakenGameEventOnDemandArrivalTunnelWorker
// 0x0010 (0x0120 - 0x0110)
class UKrakenGameEventOnDemandArrivalTunnelWorker : public USeaBasedGameEventOnDemandArrivalTunnelWorker
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.KrakenGameEventOnDemandArrivalTunnelWorker"));
		return ptr;
	}

};


// Class AdventureOnDemand.TinySharkGameEventOnDemandArrivalTunnelWorker
// 0x0010 (0x0120 - 0x0110)
class UTinySharkGameEventOnDemandArrivalTunnelWorker : public USeaBasedGameEventOnDemandArrivalTunnelWorker
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.TinySharkGameEventOnDemandArrivalTunnelWorker"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
