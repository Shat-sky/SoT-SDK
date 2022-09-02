#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AILargeShipTemplate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AILargeShipTemplate.BP_AILargeShipTemplate_C
// 0x0164 (0x1814 - 0x16B0)
class ABP_AILargeShipTemplate_C : public AShip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x16B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UShipStorageJettisonComponent*               ShipStorageJettison;                                      // 0x16B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   TridentRewards;                                           // 0x16C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   StorageCrateRewards;                                      // 0x16C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   GemRewards;                                               // 0x16D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   ChanceRewards_Campaign020;                                // 0x16D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewards_Campaign020;                                  // 0x16E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   ExplosiveBarrelSpawner;                                   // 0x16E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewardsEmergent;                                      // 0x16F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWwiseEmitterComponent*                      audio_skeletonship_emerge_submerge;                       // 0x16F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   ChestRewards;                                             // 0x1700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewardsSkull;                                         // 0x1708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   HoldRewardsChest;                                         // 0x1710(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   MessageInABottleSpawner;                                  // 0x1718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   SkullRewards;                                             // 0x1720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipItemSpawnComponent*                   MerchantRewards;                                          // 0x1728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIShipTelemetryComponent*                   AIShipTelemetry;                                          // 0x1730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Wheel;                                                    // 0x1738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Wood;                                   // 0x1740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIRegionComponent*                          AIRegion;                                                 // 0x1748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell;                                                  // 0x1750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipPointParticleComponent*                 VFX_Drips;                                                // 0x1758(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RammingSpurZone;                                          // 0x1760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                      // 0x1768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball3;                            // 0x1770(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food;                                   // 0x1778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                            // 0x1780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                            // 0x1788(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight4;                                             // 0x1790(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight3;                                             // 0x1798(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight2;                                             // 0x17A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight1;                                             // 0x17A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft4;                                              // 0x17B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft3;                                              // 0x17B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft2;                                              // 0x17C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft1;                                              // 0x17C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderStbd;                                               // 0x17D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderPort;                                               // 0x17D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Hull;                                                     // 0x17E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioBoat;                                                // 0x17E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAnchorLowered;                                          // 0x17F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x17F1(0x0007) MISSED OFFSET
	class ABP_shp_skeleton_01_a_C*                     ShipSkeleton;                                             // 0x17F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECurseTag>                             NewVar_1;                                                 // 0x1800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1801(0x0003) MISSED OFFSET
	struct FAIShipSailData                             SailData;                                                 // 0x1804(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AILargeShipTemplate.BP_AILargeShipTemplate_C"));
		return ptr;
	}


	void SetShipSkeleton();
	void OnRep_SailData();
	void OnRep_NewVar_2();
	void UserConstructionScript();
	void OnShipSurface_Client();
	void OnShipSurface();
	void OnShipDive_Client();
	void OnShipDive();
	void ReceiveBeginPlay();
	void SetCursedCrewCustomisationProperties(const struct FAIShipSailData& SailData);
	void ExecuteUbergraph_BP_AILargeShipTemplate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
