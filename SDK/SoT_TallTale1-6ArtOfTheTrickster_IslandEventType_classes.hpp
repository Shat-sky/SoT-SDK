#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TallTale1-6ArtOfTheTrickster_IslandEventType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TallTale1-6ArtOfTheTrickster_IslandEventType.TallTale1-6ArtOfTheTrickster_IslandEventType_C
// 0x0000 (0x0048 - 0x0048)
class UTallTale1_6ArtOfTheTrickster_IslandEventType_C : public UTallTaleIslandEventType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TallTale1-6ArtOfTheTrickster_IslandEventType.TallTale1-6ArtOfTheTrickster_IslandEventType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif