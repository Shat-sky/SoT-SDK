#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WwiseAudioCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WwiseAudioCore.WwiseAudioSettings
// 0x0238 (0x0260 - 0x0028)
class UWwiseAudioSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET
	struct FWwisePlatformMappings                      PlatformMappings;                                         // 0x00E8(0x0020) (Edit, Config)
	struct FWwiseAudioReverbPresets                    ReverbPresetSettings;                                     // 0x0108(0x0064) (Edit, Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FStringAssetReference                       WwiseCoreAssetsPath;                                      // 0x0170(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              WwiseSoundbanksRoot;                                      // 0x0180(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseStreamedFilesRoot;                                   // 0x0190(0x0010) (Edit, Config)
	TArray<struct FWwiseIOPriorityMappingConfig>       AsyncIOPriorityMappings;                                  // 0x01A0(0x0010) (Edit, ZeroConstructor, Config)
	struct FDirectoryPath                              TritonAcousticMapsDirectory;                              // 0x01B0(0x0010) (Edit, Config)
	class FString                                      DefaultLanguage;                                          // 0x01C0(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      SinkSharesetName;                                         // 0x01D0(0x0010) (Edit, ZeroConstructor, Config)
	struct FWwiseNetworkRelationship                   NetworkRelationship;                                      // 0x01E0(0x0018) (Edit, Config)
	uint32_t                                           WaapiInterpreterPort;                                     // 0x01F8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	class UWwiseCoreAssets*                            WwiseCoreAssets;                                          // 0x0200(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x0208(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudioCore.WwiseAudioSettings"));
		return ptr;
	}

};


// Class WwiseAudioCore.WwiseSubSystemInterface
// 0x0000 (0x0028 - 0x0028)
class UWwiseSubSystemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WwiseAudioCore.WwiseSubSystemInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
