#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LocationProviderFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LocationProviderFramework.LocationProviderServiceInterface
// 0x0000 (0x0028 - 0x0028)
class ULocationProviderServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LocationProviderFramework.LocationProviderServiceInterface"));
		return ptr;
	}

};


// Class LocationProviderFramework.LocationProviderService
// 0x0080 (0x00A8 - 0x0028)
class ULocationProviderService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LocationProviderFramework.LocationProviderService"));
		return ptr;
	}

};


// Class LocationProviderFramework.LocationType
// 0x0000 (0x0028 - 0x0028)
class ULocationType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LocationProviderFramework.LocationType"));
		return ptr;
	}

};


// Class LocationProviderFramework.KrakenLocationType
// 0x0000 (0x0028 - 0x0028)
class UKrakenLocationType : public ULocationType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LocationProviderFramework.KrakenLocationType"));
		return ptr;
	}

};


// Class LocationProviderFramework.SeaBasedGameEventOnDemandLocationType
// 0x0000 (0x0028 - 0x0028)
class USeaBasedGameEventOnDemandLocationType : public ULocationType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LocationProviderFramework.SeaBasedGameEventOnDemandLocationType"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
