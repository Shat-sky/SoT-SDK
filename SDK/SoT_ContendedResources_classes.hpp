#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ContendedResources_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ContendedResources.ContendedResourceInfoInterface
// 0x0000 (0x0028 - 0x0028)
class UContendedResourceInfoInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ContendedResources.ContendedResourceInfoInterface"));
		return ptr;
	}

};


// Class ContendedResources.ContendedResourceServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UContendedResourceServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ContendedResources.ContendedResourceServiceInterface"));
		return ptr;
	}

};


// Class ContendedResources.ReservableContendedResourceInterface
// 0x0000 (0x0028 - 0x0028)
class UReservableContendedResourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ContendedResources.ReservableContendedResourceInterface"));
		return ptr;
	}

};


// Class ContendedResources.WorldResourceRegistryInterface
// 0x0000 (0x0028 - 0x0028)
class UWorldResourceRegistryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ContendedResources.WorldResourceRegistryInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
