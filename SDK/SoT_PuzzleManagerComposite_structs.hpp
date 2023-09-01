#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_PuzzleManagerFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PuzzleManagerComposite.SwitchesActivatedInCorrectOrderPresetParams
// 0x0010
struct FSwitchesActivatedInCorrectOrderPresetParams
{
	TArray<int>                                        SwitchOrder;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
