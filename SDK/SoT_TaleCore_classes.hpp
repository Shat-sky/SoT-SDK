#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TaleCore.ClientCommandHandler
// 0x0018 (0x03E0 - 0x03C8)
class AClientCommandHandler : public AActor
{
public:
	struct FClientCommandQueue                         CommandQueue;                                             // 0x03C8(0x0018) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleCore.ClientCommandHandler"));
		return ptr;
	}


	void OnRep_CommandQueue();
};


// Class TaleCore.TaleStruct
// 0x0030 (0x00B8 - 0x0088)
class UTaleStruct : public UStruct
{
public:
	struct FGuid                                       StructId;                                                 // 0x0088(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleCore.TaleStruct"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
