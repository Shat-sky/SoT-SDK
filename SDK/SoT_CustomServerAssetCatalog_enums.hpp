#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CustomServerAssetCatalog.GameAssetType
enum class EGameAssetType : uint8_t
{
	GameAssetType__ITEM            = 0,
	GameAssetType__SKELETON        = 1,
	GameAssetType__GameAssetType_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
