#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OnlineAthenaGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OnlineAthenaGameMode.BP_OnlineAthenaGameMode_C
// 0x0008 (0x0B28 - 0x0B20)
class ABP_OnlineAthenaGameMode_C : public AOnlineAthenaGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_OnlineAthenaGameMode.BP_OnlineAthenaGameMode_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
