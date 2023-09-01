#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BeckonGesture_Welcome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BeckonGesture_Welcome.BeckonGesture_Welcome_C
// 0x0000 (0x0028 - 0x0028)
class UBeckonGesture_Welcome_C : public UBeckonGestureID
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BeckonGesture_Welcome.BeckonGesture_Welcome_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
