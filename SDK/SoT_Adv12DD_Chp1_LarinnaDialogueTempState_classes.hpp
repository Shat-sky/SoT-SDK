#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Adv12DD_Chp1_LarinnaDialogueTempState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Adv12DD_Chp1_LarinnaDialogueTempState.Adv12DD_Chp1_LarinnaDialogueTempState_C
// 0x0000 (0x0028 - 0x0028)
class UAdv12DD_Chp1_LarinnaDialogueTempState_C : public UTaleQuestQueryableStateDataID
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Adv12DD_Chp1_LarinnaDialogueTempState.Adv12DD_Chp1_LarinnaDialogueTempState_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
