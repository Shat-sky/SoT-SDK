#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ContestMatchmaking_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ContestMatchmaking.ContestMatchmakingFactionMapping
// 0x0010 (0x0038 - 0x0028)
class UContestMatchmakingFactionMapping : public UObject
{
public:
	TArray<struct FContestMatchmakingFactionMapEntry>  Factions;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ContestMatchmaking.ContestMatchmakingFactionMapping"));
		return ptr;
	}

};


// Class ContestMatchmaking.ContestMatchmakingProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UContestMatchmakingProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ContestMatchmaking.ContestMatchmakingProviderInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
