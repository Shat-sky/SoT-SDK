#pragma once

// Sea of Thieves (2.6.2) SDK

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
// 0x0090 (0x00B8 - 0x0028)
class UAsyncLoadingMonitoringService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

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
