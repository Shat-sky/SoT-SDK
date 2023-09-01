#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RemoteActorDestruction.DestroyActorGameServerRequestModel
// 0x0004
struct FDestroyActorGameServerRequestModel
{
	int                                                ActorNetID;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct RemoteActorDestruction.DestroyAllExistingActorsByClassGameServerRequestModel
// 0x0010
struct FDestroyAllExistingActorsByClassGameServerRequestModel
{
	TArray<class FString>                              ActorClassNames;                                          // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
