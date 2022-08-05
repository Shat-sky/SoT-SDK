#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomServerAssetCatalog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomServerAssetCatalog.CustomServerAssetCatalogServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomServerAssetCatalogServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomServerAssetCatalog.CustomServerAssetCatalogServiceInterface"));
		return ptr;
	}

};


// Class CustomServerAssetCatalog.CustomServerAssetCatalogService
// 0x00C8 (0x00F0 - 0x0028)
class UCustomServerAssetCatalogService : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomServerAssetCatalog.CustomServerAssetCatalogService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
