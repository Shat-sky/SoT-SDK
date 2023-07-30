#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_UtilityVoyageFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UtilityVoyageFramework.UtilityVoyageServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UUtilityVoyageServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UtilityVoyageFramework.UtilityVoyageServiceInterface"));
		return ptr;
	}

};


// Class UtilityVoyageFramework.UtilityVoyageService
// 0x0098 (0x00C0 - 0x0028)
class UUtilityVoyageService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	TArray<class UCrewVoyageParticipant*>              Participants;                                             // 0x00A0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FUtilityVoyageData>                  Voyages;                                                  // 0x00B0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class UtilityVoyageFramework.UtilityVoyageService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
