#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_ObjectMessaging_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActorOfInterestFramework.ActorOfInterestUnregisteredEvent
// 0x0010
struct FActorOfInterestUnregisteredEvent
{
	class AActor*                                      ActorOfInterest;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorOfInterestId;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ActorOfInterestFramework.ActorOfInterestRegisteredEvent
// 0x0010
struct FActorOfInterestRegisteredEvent
{
	class AActor*                                      ActorOfInterest;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorOfInterestId;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
