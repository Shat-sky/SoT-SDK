#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GlobalDigSpots_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GlobalDigSpots.GlobalDigSpotServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UGlobalDigSpotServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlobalDigSpots.GlobalDigSpotServiceInterface"));
		return ptr;
	}

};


// Class GlobalDigSpots.GlobalDigSpotService
// 0x0018 (0x03E0 - 0x03C8)
class AGlobalDigSpotService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GlobalDigSpots.GlobalDigSpotService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
