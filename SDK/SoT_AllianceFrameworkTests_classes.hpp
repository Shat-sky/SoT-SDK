#pragma once

// Sea of Thieves (2.0.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AllianceFrameworkTests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AllianceFrameworkTests.MockAllianceService
// 0x00B0 (0x0508 - 0x0458)
class AMockAllianceService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0458(0x0018) MISSED OFFSET
	struct FAlliancePennantData                        PennantData;                                              // 0x0470(0x0038)
	unsigned char                                      UnknownData01[0x58];                                      // 0x04A8(0x0058) MISSED OFFSET
	class UTexture*                                    MapFlagIconToReturn;                                      // 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AllianceFrameworkTests.MockAllianceService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
