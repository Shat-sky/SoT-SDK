#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Mystery1_WKD_Phase3_OverrideType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mystery1_WKD_Phase3_OverrideType.Mystery1_WKD_Phase3_OverrideType_C
// 0x0000 (0x0028 - 0x0028)
class UMystery1_WKD_Phase3_OverrideType_C : public UNPCDialogOverrideType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Mystery1_WKD_Phase3_OverrideType.Mystery1_WKD_Phase3_OverrideType_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
