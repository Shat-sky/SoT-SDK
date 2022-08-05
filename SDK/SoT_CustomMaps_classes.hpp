#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomMaps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomMaps.CustomMap
// 0x0000 (0x0830 - 0x0830)
class ACustomMap : public ARenderToTextureMapBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMap"));
		return ptr;
	}

};


// Class CustomMaps.CustomMapCollectionInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomMapCollectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapCollectionInterface"));
		return ptr;
	}

};


// Class CustomMaps.CustomMapData
// 0x0050 (0x0078 - 0x0028)
class UCustomMapData : public UDataAsset
{
public:
	class UClass*                                      CustomMapItemDescClass;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRegionMapData                              RegionMapData;                                            // 0x0030(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapData"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
