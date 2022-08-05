#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ZoomInOnWieldableItemsFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ZoomInOnWieldableItemsFramework.ZoomInOnWieldableItemInterface
// 0x0000 (0x0028 - 0x0028)
class UZoomInOnWieldableItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ZoomInOnWieldableItemsFramework.ZoomInOnWieldableItemInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
