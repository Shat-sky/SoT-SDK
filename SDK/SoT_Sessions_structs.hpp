#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Sessions.ESessionGrouping
enum class ESessionGrouping : uint8_t
{
	ESessionGrouping__Invalid      = 0,
	None                           = 1,
	IntProperty                    = 2,
	ESessionVisibility__Invalid    = 3
};


// Enum Sessions.ECrewSessionType
enum class ECrewSessionType : uint8_t
{
	ECrewSessionType__Invalid      = 0,
	None                           = 1,
	ECrewSessionType__ServerLarge  = 2,
	None01                         = 3,
	EAllianceNotificationType__Joined = 4,
	None02                         = 5
};


// Enum Sessions.ESessionVisibility
enum class ESessionVisibility : uint8_t
{
	ESessionVisibility__Invalid    = 0,
	None                           = 1,
	EConditionalStatType__PlayerOnly = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Sessions.SessionTemplate
// 0x0018
struct FSessionTemplate
{
	class FString                                      TemplateName;                                             // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<ECrewSessionType>                      SessionType;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                MaxPlayers;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Sessions.CrewSessionTemplate
// 0x0020 (0x0038 - 0x0018)
struct FCrewSessionTemplate : public FSessionTemplate
{
	class FString                                      MatchmakingHopper;                                        // 0x0018(0x0010) (ZeroConstructor)
	class UClass*                                      ShipSize;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxMatchmakingPlayers;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Sessions.SessionLostEvent
// 0x0001
struct FSessionLostEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Sessions.SessionDetailsChangedEvent
// 0x0020
struct FSessionDetailsChangedEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Sessions.SessionInfoUpdateAvailableEvent
// 0x0010
struct FSessionInfoUpdateAvailableEvent
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
