#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ALK_WieldableObject_KeySoul_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALK_WieldableObject_KeySoul.ALK_WieldableObject_KeySoul_C
// 0x0000 (0x0028 - 0x0028)
class UALK_WieldableObject_KeySoul_C : public UWieldableItemAnimationStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ALK_WieldableObject_KeySoul.ALK_WieldableObject_KeySoul_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
