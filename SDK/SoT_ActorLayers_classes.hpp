#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActorLayers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActorLayers.ActorLayerInterface
// 0x0000 (0x0028 - 0x0028)
class UActorLayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorLayers.ActorLayerInterface"));
		return ptr;
	}

};


// Class ActorLayers.InstancedLayerComponent
// 0x0030 (0x00F8 - 0x00C8)
class UInstancedLayerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<struct FInstancedLayer>                     InstancedLayers;                                          // 0x00D0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00E0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorLayers.InstancedLayerComponent"));
		return ptr;
	}

};


// Class ActorLayers.LayerActorsDataAsset
// 0x0020 (0x0048 - 0x0028)
class ULayerActorsDataAsset : public UDataAsset
{
public:
	TArray<TAssetPtr<class UClass>>                    Actors;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    Items;                                                    // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorLayers.LayerActorsDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
