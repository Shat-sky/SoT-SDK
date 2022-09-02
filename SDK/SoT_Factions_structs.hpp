#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_EmissaryLevel_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_FactionsFramework_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Factions.CinematicFactionEvent
// 0x0088
struct FCinematicFactionEvent
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCinematicQuestEvent                        CinematicData;                                            // 0x0008(0x0080) (Edit, DisableEditOnInstance)
};

// ScriptStruct Factions.FactionDisplayInfo
// 0x00A0
struct FFactionDisplayInfo
{
	class UClass*                                      Faction;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0008(0x0038) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0040(0x0038) (Edit, DisableEditOnInstance)
	struct FVector2D                                   CardOffset;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       KeyArt;                                                   // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringAssetReference                       Icon;                                                     // 0x0090(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Factions.FactionRequest
// 0x0020
struct FFactionRequest
{
	class UClass*                                      Faction;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Factions.FigureheadFactionVFXParams
// 0x0030
struct FFigureheadFactionVFXParams
{
	class UParticleSystem*                             FBParticleSystem;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FGParticleSystem;                                         // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0010(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoDestroy;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OwnerOnlySee;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OwnerNoSee;                                               // 0x002A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct Factions.FactionVoteRemovedEvent
// 0x0008
struct FFactionVoteRemovedEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.FactionVoteAddedEvent
// 0x0008
struct FFactionVoteAddedEvent
{
	struct FName                                       Company;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Factions.CrewJoinedFactionPopupEvent
// 0x0008 (0x0018 - 0x0010)
struct FCrewJoinedFactionPopupEvent : public FNetworkEventStruct
{
	class UDataAsset*                                  PopUpDesc;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
