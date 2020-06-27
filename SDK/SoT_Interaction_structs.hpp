#pragma once

// Sea of Thieves (1.4.16) SDK

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
	None                           = 1,
	EInteractableState__Interactable = 2
};


// Enum Interaction.EInteractableIdentifier
enum class EInteractableIdentifier : uint8_t
{
	EInteractableIdentifier__None  = 0,
	None                           = 1,
	EInteractableIdentifier__Sail  = 2,
	None01                         = 3,
	EWieldableItemAnimVariant__Default = 4,
	None02                         = 5
};


// Enum Interaction.EInteractionObject
enum class EInteractionObject : uint8_t
{
	EInteractionObject__None       = 0,
	None                           = 1,
	IntProperty                    = 2,
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
