#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CrewSkillRating_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CrewSkillRating.CrewSkillRatingServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UCrewSkillRatingServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrewSkillRating.CrewSkillRatingServiceInterface"));
		return ptr;
	}

};


// Class CrewSkillRating.CrewSkillRatingService
// 0x00F8 (0x0120 - 0x0028)
class UCrewSkillRatingService : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CrewSkillRating.CrewSkillRatingService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
