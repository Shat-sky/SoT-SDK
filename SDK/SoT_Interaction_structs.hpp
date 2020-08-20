#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Interaction.EInteractionBlockReason
enum class EInteractionBlockReason : uint8_t
{
	EInteractionBlockReason__None  = 0,
	EInteractionBlockReason__Other = 1,
	EInteractionBlockReason__EInteractionBlockReason_MAX = 2
};


// Enum Interaction.EInteractableIdentifier
enum class EInteractableIdentifier : uint8_t
{
	EInteractableIdentifier__None  = 0,
	EInteractableIdentifier__Cannon = 1,
	EInteractableIdentifier__Harpoon = 2,
	EInteractableIdentifier__Sail  = 3,
	EInteractableIdentifier__MAX   = 4,
	EInteractableIdentifier__EInteractableIdentifier_MAX = 5
};


// Enum Interaction.EInteractionObject
enum class EInteractionObject : uint8_t
{
	EInteractionObject__None       = 0,
	EInteractionObject__Chest      = 1,
	EInteractionObject__Barrel     = 2,
	EInteractionObject__EInteractionObject_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Interaction.EventOptimalInteractionObjectChanged
// 0x0010
struct FEventOptimalInteractionObjectChanged
{
	class UObject*                                     PreviousFocusObject;                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UObject*                                     NewFocusObject;                                           // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Interaction.EventInteractionBlockingStateChanged
// 0x0002
struct FEventInteractionBlockingStateChanged
{
	bool                                               IsInteractionBlocked;                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBlockReason>               InteractionBlockReason;                                   // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
