#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomEmotes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomEmotes.CustomEmoteInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomEmoteInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomEmotes.CustomEmoteInterface"));
		return ptr;
	}

};


// Class CustomEmotes.CustomEmoteService
// 0x0010 (0x0038 - 0x0028)
class UCustomEmoteService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomEmotes.CustomEmoteService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
