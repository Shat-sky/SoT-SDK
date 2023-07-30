#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WorldEdgeItemFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WorldEdgeItemFramework.WorldEdgeItemServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UWorldEdgeItemServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldEdgeItemFramework.WorldEdgeItemServiceInterface"));
		return ptr;
	}

};


// Class WorldEdgeItemFramework.WorldEdgeItemServiceParams
// 0x0018 (0x0040 - 0x0028)
class UWorldEdgeItemServiceParams : public UDataAsset
{
public:
	class UEnvQuery*                                   TeleportItemsEQSQuery;                                    // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottledItemSpawnRate;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToSinkFor;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalMoveDistance;                                   // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxBatchItemsPerSlice;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldEdgeItemFramework.WorldEdgeItemServiceParams"));
		return ptr;
	}

};


// Class WorldEdgeItemFramework.WorldEdgeItemService
// 0x0258 (0x0620 - 0x03C8)
class AWorldEdgeItemService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class UWorldEdgeItemServiceParams*                 WorldEdgeItemParameters;                                  // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FEnvQueryRequest                            SpawnItemEQSRequest;                                      // 0x03D8(0x0170)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0548(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldEdgeItemFramework.WorldEdgeItemService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
