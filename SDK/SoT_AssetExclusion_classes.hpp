#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AssetExclusion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AssetExclusion.AssetExclusionCanaryAsset
// 0x0040 (0x0068 - 0x0028)
class UAssetExclusionCanaryAsset : public UDataAsset
{
public:
	struct FText                                       TextMustNotBeEmpty;                                       // 0x0028(0x0038) (Edit)
	int                                                ValueMustBeSetTo10;                                       // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AssetExclusion.AssetExclusionCanaryAsset"));
		return ptr;
	}

};


// Class AssetExclusion.AssetExclusionCanaryContainerList
// 0x0010 (0x0038 - 0x0028)
class UAssetExclusionCanaryContainerList : public UDataAsset
{
public:
	TArray<class UAssetExclusionCanaryAsset*>          CanaryAssets;                                             // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AssetExclusion.AssetExclusionCanaryContainerList"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
