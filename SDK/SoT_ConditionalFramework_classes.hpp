#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ConditionalFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ConditionalFramework.ConditionRootAsset
// 0x0020 (0x0048 - 0x0028)
class UConditionRootAsset : public UDataAsset
{
public:
	struct FConditionInstance                          ConditionRoot;                                            // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ConditionalFramework.ConditionRootAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
