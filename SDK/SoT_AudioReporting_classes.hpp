#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AudioReporting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioReporting.AudioReportReaction
// 0x0008 (0x0030 - 0x0028)
class UAudioReportReaction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioReporting.AudioReportReaction"));
		return ptr;
	}

};


// Class AudioReporting.AudioReportingComponent
// 0x0178 (0x0240 - 0x00C8)
class UAudioReportingComponent : public UActorComponent
{
public:
	class APlayerController*                           CachedOwningController;                                   // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x170];                                     // 0x00D0(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioReporting.AudioReportingComponent"));
		return ptr;
	}

};


// Class AudioReporting.AudioReportingConfig
// 0x0010 (0x0048 - 0x0038)
class UAudioReportingConfig : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       AudioReportingSettings;                                   // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioReporting.AudioReportingConfig"));
		return ptr;
	}

};


// Class AudioReporting.AudioReportingDebugMenuGenerator
// 0x0000 (0x0028 - 0x0028)
class UAudioReportingDebugMenuGenerator : public UDebugMenuEntryGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioReporting.AudioReportingDebugMenuGenerator"));
		return ptr;
	}

};


// Class AudioReporting.EventReactionsDataAsset
// 0x0010 (0x0038 - 0x0028)
class UEventReactionsDataAsset : public UDataAsset
{
public:
	TArray<struct FEventReactionDesc>                  Reactions;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioReporting.EventReactionsDataAsset"));
		return ptr;
	}

};


// Class AudioReporting.AudioReportingSettings
// 0x0020 (0x0048 - 0x0028)
class UAudioReportingSettings : public UDataAsset
{
public:
	int                                                MaxReactionCount;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AudioVeryCloseThresholdDistance;                          // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttenuationFilterScaler;                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<class UEventReactionsDataAsset*>            EventReactionDataAssets;                                  // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AudioReporting.AudioReportingSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
