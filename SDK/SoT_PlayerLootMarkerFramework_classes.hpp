#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PlayerLootMarkerFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlayerLootMarkerFramework.PlayerLootMarkerServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UPlayerLootMarkerServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PlayerLootMarkerFramework.PlayerLootMarkerServiceInterface"));
		return ptr;
	}

};


// Class PlayerLootMarkerFramework.PlayerLootMarkerService
// 0x0178 (0x0540 - 0x03C8)
class APlayerLootMarkerService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class UPlayerLootMarkerServiceParams*              Params;                                                   // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x03D8(0x0020) MISSED OFFSET
	TArray<TWeakObjectPtr<class AShortRangeMarker>>    ShortRangeMarkers;                                        // 0x03F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x118];                                     // 0x0408(0x0118) MISSED OFFSET
	TArray<struct FPlayerLootMarkerWorldEdgeBatchData> BatchData;                                                // 0x0520(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0530(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PlayerLootMarkerFramework.PlayerLootMarkerService"));
		return ptr;
	}

};


// Class PlayerLootMarkerFramework.PlayerLootMarkerServiceParams
// 0x0010 (0x0038 - 0x0028)
class UPlayerLootMarkerServiceParams : public UDataAsset
{
public:
	class UShortRangeMarkerDataAsset*                  MarkerDataAsset;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JettisonMaxMarkerDistance;                                // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PlayerLootMarkerFramework.PlayerLootMarkerServiceParams"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
