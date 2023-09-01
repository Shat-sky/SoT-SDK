#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareFileOpenLog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RareFileOpenLog.AggregateOpenOrderLogsCommandlet
// 0x0008 (0x0088 - 0x0080)
class UAggregateOpenOrderLogsCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareFileOpenLog.AggregateOpenOrderLogsCommandlet"));
		return ptr;
	}

};


// Class RareFileOpenLog.RareFileOpenFileHandler
// 0x0048 (0x0208 - 0x01C0)
class URareFileOpenFileHandler : public UClass
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01C0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareFileOpenLog.RareFileOpenFileHandler"));
		return ptr;
	}

};


// Class RareFileOpenLog.RareFileOpenOnDiskFileHandler
// 0x0000 (0x0208 - 0x0208)
class URareFileOpenOnDiskFileHandler : public URareFileOpenFileHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareFileOpenLog.RareFileOpenOnDiskFileHandler"));
		return ptr;
	}

};


// Class RareFileOpenLog.RareFileOpenLogSettings
// 0x0058 (0x0090 - 0x0038)
class URareFileOpenLogSettings : public UDeveloperSettings
{
public:
	int                                                DataSizeSaveIncrement;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSaveIncrement;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EOpenOrderDataSource>                  DataSource;                                               // 0x0040(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<class FString>                              SandboxesToEnableByDefault;                               // 0x0048(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	class FString                                      OpenOrderLogDirectory;                                    // 0x0058(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	class FString                                      OutputOrderLogDirectory;                                  // 0x0068(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	int                                                NumberOfLogsToAggregate;                                  // 0x0078(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x007C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareFileOpenLog.RareFileOpenLogSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
