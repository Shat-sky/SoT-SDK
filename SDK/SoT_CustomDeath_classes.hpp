#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomDeath_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomDeath.CustomDeathInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomDeathInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomDeath.CustomDeathInterface"));
		return ptr;
	}


	void SetShouldUseRevivalFlow(const struct FSetShouldUseRevivalFlowGameServerRequestModel& SetShouldUseRevivalFlowGameServerRequestModel);
	void SetShouldSkipFerryOfTheDamned(const struct FSetShouldSkipFerryOfTheDamnedGameServerRequestModel& SetShouldSkipFerryOfTheDamnedGameServerRequestModel);
	void SetGameModeDeathPenaltyRespawnTimer(const struct FGameModeDeathPenaltyRespawnTimerGameServerRequestModel& GameModeDeathPenaltyRespawnTimerGameServerRequestModel);
	bool SetCustomPlayerStart(const struct FSetCustomPlayerStartGameServerRequestModel& SetCustomPlayerStartGameServerRequestModel);
	void SetCustomConfigForPlayer(int PlayerId, const struct FCustomDeathConfiguration& CustomDeathConfiguration);
	void SetCrewBasedDeathPenaltyRespawnTimes(const struct FCrewBasedRespawnTimes& CrewBasedRespawnTimes);
	void ResetCustomConfigForPlayer(const struct FResetCustomConfigForPlayerGameServerRequestModel& ResetCustomConfigForPlayerGameServerRequestModel);
	void KillPlayer(const struct FKillPlayerGameServerRequestModel& KillPlayerGameServerRequestModel);
	void KillCrew(const struct FKillCrewGameServerRequestModel& KillCrewGameServerRequestModel);
	bool GetShouldUseRevivalFlow(int PlayerId, bool bDefaultValue);
	bool GetShouldSkipFerryOfTheDamned(int PlayerId);
	class APlayerStart* GetCustomPlayerStart(int PlayerId);
	void ForcePlayerRespawn(const struct FForcePlayerRespawnGameServerRequestModel& ForcePlayerRespawnGameServerRequestModel);
	int DestroyCustomPlayerStart(const struct FDestroyCustomPlayerStartGameServerRequestModel& DestroyCustomPlayerStartGameServerRequestModel);
	int CreateNewCustomPlayerStart(const struct FCustomPlayerStartConfigGameServerRequestModel& CustomPlayerStartConfigGameServerRequestModel);
};


// Class CustomDeath.CustomDeathService
// 0x0098 (0x0460 - 0x03C8)
class ACustomDeathService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03C8(0x0038) MISSED OFFSET
	TArray<class APlayerStart*>                        CustomPlayerStarts;                                       // 0x0400(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0410(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomDeath.CustomDeathService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
