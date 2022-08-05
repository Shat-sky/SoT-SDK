#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAudio_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaAudio.AthenaAudioConfig
// 0x0010 (0x0038 - 0x0028)
class UAthenaAudioConfig : public UDataAsset
{
public:
	class UWwiseObjectPoolWrapper*                     ItemProxyPool;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseObjectPoolWrapper*                     AnimNotifyPool;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AthenaAudioConfig"));
		return ptr;
	}

};


// Class AthenaAudio.AthenaAudioModuleSettings
// 0x0010 (0x0048 - 0x0038)
class UAthenaAudioModuleSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       AudioConfigAsset;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.AthenaAudioModuleSettings"));
		return ptr;
	}

};


// Class AthenaAudio.MultiEmitter
// 0x0010 (0x03D8 - 0x03C8)
class AMultiEmitter : public AActor
{
public:
	class UMultiEmitterRootComponent*                  MultiEmitterRootComponent;                                // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaAudio.MultiEmitter"));
		return ptr;
	}


	void ResetNamingCount();
	void CreateAndAddMergedEmitterComponentToRoot(const struct FName& InName, const struct FVector& InOffset, class UWwiseEvent* InWwiseEvent, class UWwiseObjectPoolWrapper* InPool);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
