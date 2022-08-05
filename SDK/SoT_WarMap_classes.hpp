#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WarMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WarMap.WarMapStateInterface
// 0x0000 (0x0028 - 0x0028)
class UWarMapStateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.WarMapStateInterface"));
		return ptr;
	}

};


// Class WarMap.WarMapInteractionComponent
// 0x00A0 (0x01B8 - 0x0118)
class UWarMapInteractionComponent : public UInteractableComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FText                                       OpenMapInteractionText;                                   // 0x0120(0x0038) (Edit)
	struct FText                                       CannotOpenMapInteractionText;                             // 0x0158(0x0038) (Edit)
	class UClass*                                      OpenMapInputId;                                           // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0198(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WarMap.WarMapInteractionComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
