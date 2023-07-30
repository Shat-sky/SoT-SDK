#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_SmallShipTemplate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SmallShipTemplate.BP_SmallShipTemplate_C
// 0x03C8 (0x1C58 - 0x1890)
class ABP_SmallShipTemplate_C : public AShip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1890(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UShipRowboatPersistenceComponent*            ShipRowboatPersistence;                                   // 0x1898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHarpoonItemLocationComponent*               HarpoonItemLocation1;                                     // 0x18A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHarpoonItemLocationComponent*               HarpoonItemLocation;                                      // 0x18A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFactionParticleComponent*                   FactionGBowParticles;                                     // 0x18B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFactionParticleComponent*                   FactionBBowParticles;                                     // 0x18B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_Both_Splashes_Details;                    // 0x18C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_Both_Splashes_Second;                     // 0x18C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_OnShip_Splashes;                          // 0x18D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_Offship_Splashes;                         // 0x18D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_Underwater;                               // 0x18E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local2;                    // 0x18E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_captain_Local1;                   // 0x18F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local1;                    // 0x18F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_captain_Local2;                   // 0x1900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_rectangle_surface_Huge_Top;       // 0x1908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_rectangle_Local_VS;               // 0x1910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_rectangle_surface_Huge_Bottom;    // 0x1918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             VFX_Scene;                                                // 0x1920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipFactionCustomisation*                   ShipFactionCustomisation;                                 // 0x1928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_16;                                      // 0x1930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_15;                                      // 0x1938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_14;                                      // 0x1940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_13;                                      // 0x1948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_12;                                      // 0x1950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_11;                                      // 0x1958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_09;                                      // 0x1960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_08;                                      // 0x1968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_07;                                      // 0x1970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_06;                                      // 0x1978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_05;                                      // 0x1980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_ShipTrinketMountpointManagerComponent_Small_C* ShipTrinketMountpointManagerComponent_Small;              // 0x1988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CaptainsLog;                                              // 0x1990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipsCrest;                                               // 0x1998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Rugs;                                                     // 0x19A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Drapes;                                                   // 0x19A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Bed;                                                      // 0x19B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipStorageJettisonComponent*               ShipStorageJettison;                                      // 0x19B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        VoyageTable;                                              // 0x19C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_BedComponent_C*                          BP_BedComponent;                                          // 0x19C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Rat3;                                                     // 0x19D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Rat2;                                                     // 0x19D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Rat1;                                                     // 0x19E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URatManagerComponent*                        RatManager;                                               // 0x19E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_MapTable_3;                                          // 0x19F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_MapTable_2;                                          // 0x19F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Barrel_Top;                                          // 0x1A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Front_Starboard;                                     // 0x1A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Front_Port;                                          // 0x1A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Side_Starboard;                                      // 0x1A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Side_Port;                                           // 0x1A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Bottom_Barrel;                                       // 0x1A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Bottom_Port;                                         // 0x1A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Bottom_Starboard;                                    // 0x1A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Top_Rear_3;                                          // 0x1A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x1A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Top_Rear_2;                                          // 0x1A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIRegionComponent*                          AIRegion;                                                 // 0x1A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNamedPointsComponent*                       NamedPoints;                                              // 0x1A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_small_ladder_gap_hits_01_a;                           // 0x1A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_flag_hole_01_a;                                       // 0x1A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_EmissaryFlag;                                          // 0x1A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEmissaryFlotsamItemSpawnComponent*          EmissaryFlotsamItemSpawner;                               // 0x1A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_LargeShip_CageLatch_03_b;                              // 0x1A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_SmallShip_WindowHatchRight;                            // 0x1A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_SmallShip_WindowHatchLeft;                             // 0x1A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WaterBarrel;                                           // 0x1AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Shroudbreaker;                                         // 0x1AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipPetChest;                                          // 0x1AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetHangoutSpotComponent*                    PetHangoutSpot;                                           // 0x1AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food_3;                                 // 0x1AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher1;                                      // 0x1AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher;                                       // 0x1AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        RowboatMountpoint;                                        // 0x1AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTelemetryComponent*                     ShipTelemetry;                                            // 0x1AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     ControlsRigging;                                          // 0x1AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipVanityChest;                                       // 0x1AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_SmallShipLadder_02;                                    // 0x1AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Lanterns;                                                 // 0x1B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck10;                            // 0x1B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck8;                             // 0x1B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck7;                             // 0x1B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food_2;                                 // 0x1B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                            // 0x1B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                            // 0x1B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_EquipmentChest;                                        // 0x1B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ClothingChest;                                         // 0x1B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WeaponsChest;                                          // 0x1B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck3;                             // 0x1B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_SmallMapTable;                                         // 0x1B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Capstan;                                                  // 0x1B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        GrogBarrel;                                               // 0x1B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleLeft;                                    // 0x1B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck1;                             // 0x1B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowerDeck11;                            // 0x1B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Wood;                                   // 0x1B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RammingSpurZone;                                          // 0x1B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                      // 0x1B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_AmmoChest;                                             // 0x1BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_04;                                      // 0x1BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_03;                                      // 0x1BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_02;                                      // 0x1BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     MainRigging;                                              // 0x1BC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipsCompass;                                             // 0x1BC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Figurehead;                                               // 0x1BD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight1;                                             // 0x1BD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft1;                                              // 0x1BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderStbd;                                               // 0x1BE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Hull;                                                     // 0x1BF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleRight;                                   // 0x1BF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistRight;                                   // 0x1C00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistLeft;                                    // 0x1C08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMain;                                                 // 0x1C10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Anchor;                                                   // 0x1C18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Rudder;                                                   // 0x1C20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Wheel;                                                    // 0x1C28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioBoat;                                                // 0x1C30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Disable_Secondary__Direction_3A9DF63A47F1548F84D99BAAF45F186E;// 0x1C38(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1C39(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Disable_Secondary;                               // 0x1C40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_DisableSplash__Direction_F5D6E1F54BED8D1B7D088AB524334C7B;// 0x1C48(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1C49(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_DisableSplash;                                   // 0x1C50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_SmallShipTemplate.BP_SmallShipTemplate_C"));
		return ptr;
	}


	void IsPlayerOnShip(bool* IsPlayerOnShip);
	unsigned char GetPxActorCapacityForPhysXAggregate();
	void UserConstructionScript();
	void Timeline_DisableSplash__FinishedFunc();
	void Timeline_DisableSplash__UpdateFunc();
	void Timeline_Disable_Secondary__FinishedFunc();
	void Timeline_Disable_Secondary__UpdateFunc();
	void OnPlayerShipBeginSurface();
	void OnPlayerShipDive();
	void OnPlayerShipSailing();
	void ExecuteUbergraph_BP_SmallShipTemplate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
