#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Damage.TriggerPlayerControllerHitNotificationNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FTriggerPlayerControllerHitNotificationNetworkEvent : public FNetworkEventStruct
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
