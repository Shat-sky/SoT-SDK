#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomMysteriousNotes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomMysteriousNotes.CustomMysteriousNotesInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomMysteriousNotesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMysteriousNotes.CustomMysteriousNotesInterface"));
		return ptr;
	}

};


// Class CustomMysteriousNotes.CustomMysteriousNotesService
// 0x0058 (0x0420 - 0x03C8)
class ACustomMysteriousNotesService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	TMap<int, struct FCustomPlayerNoteList>            CustomMysteriousNotes;                                    // 0x03D0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMysteriousNotes.CustomMysteriousNotesService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
