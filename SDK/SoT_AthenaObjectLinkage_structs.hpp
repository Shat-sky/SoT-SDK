#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AthenaObjectLinkage.EAddLinkResult
enum class EAddLinkResult : uint8_t
{
	EAddLinkResult__Success_Set    = 0,
	EAddLinkResult__Failed_SourceEndpointIdInvalid = 1,
	EAddLinkResult__Failed_TargetEndpointIdInvalid = 2,
	EAddLinkResult__Failed_CoincidentEndpointIds = 3,
	EAddLinkResult__EAddLinkResult_MAX = 4
};


// Enum AthenaObjectLinkage.EAddEndpointResult
enum class EAddEndpointResult : uint8_t
{
	EAddEndpointResult__Success    = 0,
	EAddEndpointResult__Failed_InvalidId = 1,
	EAddEndpointResult__Failed_DuplicateId = 2,
	EAddEndpointResult__Failed_DoesntImplementEndpointInterface = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaObjectLinkage.LinkEndpointId
// 0x0008
struct FLinkEndpointId
{
	struct FName                                       Raw;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
