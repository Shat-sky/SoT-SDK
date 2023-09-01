#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PuzzleManagerComposite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PuzzleManagerComposite.SwitchesActivatedInCorrectOrderPuzzleManagerPolicy
// 0x0028 (0x0108 - 0x00E0)
class USwitchesActivatedInCorrectOrderPuzzleManagerPolicy : public UPuzzleManagerPolicy
{
public:
	TArray<class AActor*>                              Switches;                                                 // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	bool                                               IsRandomSwitchOrder;                                      // 0x00F0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<struct FSwitchesActivatedInCorrectOrderPresetParams> Presets;                                                  // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PuzzleManagerComposite.SwitchesActivatedInCorrectOrderPuzzleManagerPolicy"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
