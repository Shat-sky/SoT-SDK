#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AsyncLoadingMonitoring_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AsyncLoadingMonitoring.AsyncLoadingMonitoringServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAsyncLoadingMonitoringServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AsyncLoadingMonitoring.AsyncLoadingMonitoringServiceInterface"));
		return ptr;
	}

};


// Class AsyncLoadingMonitoring.AsyncLoadingMonitoringService
// 0x00A8 (0x00D0 - 0x0028)
class UAsyncLoadingMonitoringService : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AsyncLoadingMonitoring.AsyncLoadingMonitoringService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
