#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_LargeShipTemplate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeShipTemplate.BP_LargeShipTemplate_C
// 0x0568 (0x1DF8 - 0x1890)
class ABP_LargeShipTemplate_C : public AShip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1890(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UShipRowboatPersistenceComponent*            ShipRowboatPersistence;                                   // 0x1898(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHarpoonItemLocationComponent*               HarpoonItemLocation1;                                     // 0x18A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHarpoonItemLocationComponent*               HarpoonItemLocation;                                      // 0x18A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFactionParticleComponent*                   FactionGBowParticles;                                     // 0x18B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFactionParticleComponent*                   FactionBBowParticles;                                     // 0x18B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_Both_Splashes_Details;                    // 0x18C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_rectangle_surface_Huge_Bottom;    // 0x18C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_rectangle_surface_Huge_Top;       // 0x18D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_Both_Splashes_Second;                     // 0x18D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_OnShip_Splashes;                          // 0x18E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_Offship_Splashes;                         // 0x18E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplashProbeVFXComponent*                    VFX_SplashProbe_Underwater;                               // 0x18F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_rectangle_S_Local;                // 0x18F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_rectangle_S_Local3;               // 0x1900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_rectangle_S_Local2;               // 0x1908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local8;                    // 0x1910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local6;                    // 0x1918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local7;                    // 0x1920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local5;                    // 0x1928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local2;                    // 0x1930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local4;                    // 0x1938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local3;                    // 0x1940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_captain_Local;                    // 0x1948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    vfx_playerships_bubbles_cannon_Local1;                    // 0x1950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             VFX_Scene;                                                // 0x1958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipFactionCustomisation*                   ShipFactionCustomisation;                                 // 0x1960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_ShipTrinketMountpointManagerComponent_Large_C* ShipTrinketMountpointManagerComponent_Large;              // 0x1968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CaptainsLog;                                              // 0x1970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipsCrest;                                               // 0x1978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Rugs;                                                     // 0x1980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Drapes;                                                   // 0x1988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Bed;                                                      // 0x1990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Chandelier;                                               // 0x1998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Curtains;                                                 // 0x19A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Chair;                                                    // 0x19A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        VoyageTable;                                              // 0x19B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipStorageJettisonComponent*               ShipStorageJettison;                                      // 0x19B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Seagull3;                                                 // 0x19C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Seagull2;                                                 // 0x19C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USeagullManagerComponent*                    SeagullManager;                                           // 0x19D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Seagull1;                                                 // 0x19D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Rat3;                                                     // 0x19E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Rat2;                                                     // 0x19E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Rat1;                                                     // 0x19F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_BedComponent_C*                          BP_BedComponent;                                          // 0x19F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URatManagerComponent*                        RatManager;                                               // 0x1A00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_BottomDeckBarrel_5;                                  // 0x1A08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_BottomDeckBarrel_4;                                  // 0x1A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_BottomDeckBarrel_3;                                  // 0x1A18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Cabin_Chest;                                         // 0x1A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Platform_Starboard;                                  // 0x1A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Platform_Port;                                       // 0x1A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Bannister_Bow_3;                                     // 0x1A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Bannister_Bow;                                       // 0x1A40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_BottomDeckBarrel;                                    // 0x1A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_MapTable_Cooking;                                    // 0x1A50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_MapTable;                                            // 0x1A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Balcony_Rear_Starboard;                              // 0x1A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Balcony_Rear_Port;                                   // 0x1A68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Plank_Port;                                          // 0x1A70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Hatch_2;                                             // 0x1A78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_Plank_Starboard;                                     // 0x1A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBP_SeatComponent_C*                         Seat_CaptainsChair;                                       // 0x1A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAIRegionComponent*                          AIRegion;                                                 // 0x1A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNamedPointsComponent*                       NamedPoints;                                              // 0x1A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelTwo6;                                 // 0x1AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelThree4;                               // 0x1AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelThree3;                               // 0x1AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelTwo5;                                 // 0x1AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelTwo4;                                 // 0x1AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelTwo3;                                 // 0x1AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelTwo2;                                 // 0x1AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelTwo1;                                 // 0x1AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelTwo;                                  // 0x1AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelThree2;                               // 0x1AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelThree1;                               // 0x1AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipStorageBarrelThree;                                // 0x1AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_galleon_ladder_gap_hits_01_a;                         // 0x1B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_flag_hole_01_a;                                       // 0x1B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_EmissaryFlag;                                          // 0x1B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEmissaryFlotsamItemSpawnComponent*          EmissaryFlotsamItemSpawner;                               // 0x1B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_LargeShip_CageLatch_03_a;                              // 0x1B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_LargeShip_CageLatch_03_b;                              // 0x1B28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WaterBarrel;                                           // 0x1B30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Shroudbreaker;                                         // 0x1B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipPetChest;                                          // 0x1B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPetHangoutSpotComponent*                    PetHangoutSpot;                                           // 0x1B48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrelFood2;                                   // 0x1B50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher1;                                      // 0x1B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_HarpoonLauncher;                                       // 0x1B60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        RowboatMountpoint;                                        // 0x1B68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTelemetryComponent*                     ShipTelemetry;                                            // 0x1B70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ShipVanityChest;                                       // 0x1B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_Bell;                                                  // 0x1B80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck17;                           // 0x1B88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck16;                           // 0x1B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck15;                           // 0x1B98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_WeaponsChest;                                          // 0x1BA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_EquipmentChest;                                        // 0x1BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_ClothingChest;                                         // 0x1BB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipPointParticleComponent*                 VFX_Drips;                                                // 0x1BB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               RammingSpurZone;                                          // 0x1BC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        shp_shark_hits_01_a;                                      // 0x1BC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball3;                            // 0x1BD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BP_AmmoChest;                                             // 0x1BD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Grog;                                   // 0x1BE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Food;                                   // 0x1BE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Lanterns;                                                 // 0x1BF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation11_TopDeck_NearWheel;                     // 0x1BF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_09_BottomDeck_OutsideBrig;               // 0x1C00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_08_BottomDeck_FacingStairs;              // 0x1C08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_07_MiddleDeck_BackOfShip;                // 0x1C10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_06_MiddleDeck_FrontOfShip;               // 0x1C18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_05_TopDeck_NearCannons;                  // 0x1C20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_04_TopDeck_FrontOfShip;                  // 0x1C28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_03_TopDeck_BackOfShip;                   // 0x1C30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_02_TopDeck_NearLadder;                   // 0x1C38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTeleportLocationComponent*                  TeleportLocation_01_CaptainsCabin;                        // 0x1C40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     MainRigging;                                              // 0x1C48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class URiggingSystemComponent*                     ControlsRigging;                                          // 0x1C50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MapTable;                                                 // 0x1C58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipsCompass;                                             // 0x1C60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Figurehead;                                               // 0x1C68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_LowestDeck13;                           // 0x1C70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BottomOfLowestStairs2;                  // 0x1C78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BottomOfLowestStairs1;                  // 0x1C80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LowerDeckBarrels;                                         // 0x1C88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs5;                       // 0x1C90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball2;                            // 0x1C98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_Cannonball1;                            // 0x1CA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs6;                       // 0x1CA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs4;                       // 0x1CB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs3;                       // 0x1CB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs2;                       // 0x1CC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_NearLowerStairs1;                       // 0x1CC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ShipStorageBarrel_BehindStairs5;                          // 0x1CD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight4;                                             // 0x1CD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight3;                                             // 0x1CE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight2;                                             // 0x1CE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonRight1;                                             // 0x1CF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft4;                                              // 0x1CF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft3;                                              // 0x1D00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft2;                                              // 0x1D08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        CannonLeft1;                                              // 0x1D10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderStbd;                                               // 0x1D18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LadderPort;                                               // 0x1D20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Hull;                                                     // 0x1D28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailAngleRight;                                   // 0x1D30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailAngleLeft;                                    // 0x1D38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             MiddleDeckBarrels;                                        // 0x1D40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleRight;                                   // 0x1D48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailAngleRight;                                 // 0x1D50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailAngleLeft;                                  // 0x1D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailHoistRight;                                   // 0x1D60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastForeSailHoistLeft;                                    // 0x1D68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailHoistRight;                                 // 0x1D70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzenSailHoistLeft;                                  // 0x1D78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistRight;                                   // 0x1D80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailHoistLeft;                                    // 0x1D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Capstan;                                                  // 0x1D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastFore;                                                 // 0x1D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMain;                                                 // 0x1DA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMizzen;                                               // 0x1DA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Anchor;                                                   // 0x1DB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Rudder;                                                   // 0x1DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Wheel;                                                    // 0x1DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioBoat;                                                // 0x1DC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        MastMainSailAngleLeft;                                    // 0x1DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Disable_Secondary__Direction_FB2965C04D191887E0A8AE9EBF5C5978;// 0x1DD8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x1DD9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Disable_Secondary;                               // 0x1DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_DisableSplash1__Direction_6B41A1B3430D6C615C4EFEB03700C527;// 0x1DE8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1DE9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_DisableSplash1;                                  // 0x1DF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LargeShipTemplate.BP_LargeShipTemplate_C"));
		return ptr;
	}


	void IsPlayerOnShip(bool* PlayerOnShip);
	unsigned char GetPxActorCapacityForPhysXAggregate();
	void SetupMastControls(class UChildActorComponent* LeftHoist, class UChildActorComponent* RightHoist, class UChildActorComponent* LeftAngle, class UChildActorComponent* RightAngle, const struct FName& RiggingGroupName);
	void UserConstructionScript();
	void Timeline_DisableSplash1__FinishedFunc();
	void Timeline_DisableSplash1__UpdateFunc();
	void Timeline_Disable_Secondary__FinishedFunc();
	void Timeline_Disable_Secondary__UpdateFunc();
	void OnPlayerShipBeginSurface();
	void OnPlayerShipDive();
	void OnPlayerShipSailing();
	void ExecuteUbergraph_BP_LargeShipTemplate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
