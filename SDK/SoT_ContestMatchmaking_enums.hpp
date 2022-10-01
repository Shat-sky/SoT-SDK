#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

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
	EClientMatchmakingRequestReason__EClientMatchmakingRequestReason_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
