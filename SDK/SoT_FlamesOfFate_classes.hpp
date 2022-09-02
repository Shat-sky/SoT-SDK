#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FlamesOfFate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FlamesOfFate.RemoveFlameOfFateTypeStep
// 0x0008 (0x00A0 - 0x0098)
class URemoveFlameOfFateTypeStep : public UTaleQuestStep
{
public:
	class URemoveFlameOfFateTypeStepDesc*              Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FlamesOfFate.RemoveFlameOfFateTypeStep"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
