#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ALK_WieldableObject_BrokenTelescope_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALK_WieldableObject_BrokenTelescope.ALK_WieldableObject_BrokenTelescope_C
// 0x0000 (0x0028 - 0x0028)
class UALK_WieldableObject_BrokenTelescope_C : public UWieldableItemAnimationStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass ALK_WieldableObject_BrokenTelescope.ALK_WieldableObject_BrokenTelescope_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
