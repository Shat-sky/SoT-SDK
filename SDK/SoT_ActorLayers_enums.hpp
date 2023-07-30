#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ActorLayers.EActorLayerOwnership
enum class EActorLayerOwnership : uint8_t
{
	EActorLayerOwnership__Internal = 0,
	EActorLayerOwnership__External = 1,
	EActorLayerOwnership__EActorLayerOwnership_MAX = 2
};


// Enum ActorLayers.EActorLayerState
enum class EActorLayerState : uint8_t
{
	EActorLayerState__Inactive     = 0,
	EActorLayerState__Active       = 1,
	EActorLayerState__Loading      = 2,
	EActorLayerState__EActorLayerState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
