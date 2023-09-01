#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ContestMatchmaking.EGameEventShipSizeLimit
enum class EGameEventShipSizeLimit : uint8_t
{
	EGameEventShipSizeLimit__NoLimit = 0,
	EGameEventShipSizeLimit__SmallShips = 1,
	EGameEventShipSizeLimit__MediumShips = 2,
	EGameEventShipSizeLimit__LargeShips = 3,
	EGameEventShipSizeLimit__EGameEventShipSizeLimit_MAX = 4
};


// Enum ContestMatchmaking.EGameEventAvailabilityStatus
enum class EGameEventAvailabilityStatus : uint8_t
{
	EGameEventAvailabilityStatus__Active = 0,
	EGameEventAvailabilityStatus__ActiveEngaged = 1,
	EGameEventAvailabilityStatus__AvailableToSpawn = 2,
	EGameEventAvailabilityStatus__EGameEventAvailabilityStatus_MAX = 3
};


// Enum ContestMatchmaking.EServerCrewMatchmakingResultCode
enum class EServerCrewMatchmakingResultCode : uint8_t
{
	EServerCrewMatchmakingResultCode__NoAvailableCrews = 0,
	EServerCrewMatchmakingResultCode__MinCrewsNotSatisfied = 1,
	EServerCrewMatchmakingResultCode__Success = 2,
	EServerCrewMatchmakingResultCode__StampExpired = 3,
	EServerCrewMatchmakingResultCode__EServerCrewMatchmakingResultCode_MAX = 4
};


// Enum ContestMatchmaking.EPvPFaction
enum class EPvPFaction : uint8_t
{
	EPvPFaction__NotApplicable     = 0,
	EPvPFaction__Flameheart        = 1,
	EPvPFaction__PirateLord        = 2,
	EPvPFaction__EPvPFaction_MAX   = 3
};


// Enum ContestMatchmaking.EClientMatchmakingRequestReason
enum class EClientMatchmakingRequestReason : uint8_t
{
	EClientMatchmakingRequestReason__NewCrews = 0,
	EClientMatchmakingRequestReason__LoadBalancingMigration = 1,
	EClientMatchmakingRequestReason__PvPMigration = 2,
	EClientMatchmakingRequestReason__StarlightMigration = 3,
	EClientMatchmakingRequestReason__GameEventOnDemandMigration = 4,
	EClientMatchmakingRequestReason__EClientMatchmakingRequestReason_MAX = 5
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
