#pragma once

// Sea of Thieves (2.8.4) SDK

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
// 0x0290 (0x0658 - 0x03C8)
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
	TArray<struct FGuid>                               CrewsOnCooldown;                                          // 0x04C8(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x180];                                     // 0x04D8(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.AdventureOnDemandService"));
		return ptr;
	}

};


// Class AdventureOnDemand.GameEventOnDemandArrivalTunnelWorkerBase
// 0x0058 (0x0088 - 0x0030)
class UGameEventOnDemandArrivalTunnelWorkerBase : public UAdventureOnDemandArrivalTunnelWorkerBase
{
public:
	float                                              MinRangeFromTarget;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRangeFromTarget;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SubsequentCrewJoinRadiusModifier;                         // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x003C(0x0034) MISSED OFFSET
	class UVoyageDescDataAsset*                        LeaveTunnelVoyageDesc;                                    // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.GameEventOnDemandArrivalTunnelWorkerBase"));
		return ptr;
	}

};


// Class AdventureOnDemand.SeaBasedGameEventOnDemandArrivalTunnelWorker
// 0x0068 (0x00F0 - 0x0088)
class USeaBasedGameEventOnDemandArrivalTunnelWorker : public UGameEventOnDemandArrivalTunnelWorkerBase
{
public:
	TAssetPtr<class UClass>                            GameEventType;                                            // 0x0088(0x0020) (Edit, DisableEditOnInstance)
	float                                              VacateOccupiedLocationTimer;                              // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x00AC(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.SeaBasedGameEventOnDemandArrivalTunnelWorker"));
		return ptr;
	}

};


// Class AdventureOnDemand.SkellyFortEventOnDemandArrivalTunnelWorker
// 0x0060 (0x00E8 - 0x0088)
class USkellyFortEventOnDemandArrivalTunnelWorker : public UGameEventOnDemandArrivalTunnelWorkerBase
{
public:
	bool                                               UseSpawnDistanceFromIslandForResurfaceRadius;             // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              ResurfaceMaxRadiusModifier;                               // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SkellyFortType;                                           // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0098(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AdventureOnDemand.SkellyFortEventOnDemandArrivalTunnelWorker"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
