#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaProjectiles_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset
// 0x0010 (0x0038 - 0x0028)
class UAthenaProjectilesThrottledTickCollectionAsset : public UDataAsset
{
public:
	TArray<struct FThrottledProjectileTickPool>        ProjectileTickPools;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class AthenaProjectiles.AthenaProjectilesThrottledTickCollectionAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
