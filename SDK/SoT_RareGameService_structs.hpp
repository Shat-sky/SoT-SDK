#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_RareGameService_enums.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RareGameService.RareGameServiceContext
// 0x0001
struct FRareGameServiceContext
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct RareGameService.RareGameServiceSpecification
// 0x0028
struct FRareGameServiceSpecification
{
	TAssetPtr<class UClass>                            ServiceClassToInstantiate;                                // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	TEnumAsByte<ERareGameServiceRole>                  ServiceRole;                                              // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Replicates;                                               // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
