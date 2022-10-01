#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_ActorLayers_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActorLayers.InstancedLayer
// 0x0048
struct FInstancedLayer
{
	class ULayerActorsDataAsset*                       LayerActors;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ActorTransforms;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<class AActor*>                              SpawnedActors;                                            // 0x0018(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
