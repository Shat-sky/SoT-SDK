#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_InventoryPersistenceFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class InventoryPersistenceFramework.InventoryPersistenceServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UInventoryPersistenceServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InventoryPersistenceFramework.InventoryPersistenceServiceInterface"));
		return ptr;
	}

};


// Class InventoryPersistenceFramework.InventoryPersistenceService
// 0x0180 (0x0548 - 0x03C8)
class AInventoryPersistenceService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x03C8(0x0158) MISSED OFFSET
	TArray<struct FInventoryPersistencePlayerData>     PlayerItemData;                                           // 0x0520(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0530(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class InventoryPersistenceFramework.InventoryPersistenceService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
