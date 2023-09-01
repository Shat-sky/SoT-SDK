#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareMediaComponents_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RareMediaComponents.MediaSubtitleComponent
// 0x0068 (0x0130 - 0x00C8)
class UMediaSubtitleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00C8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareMediaComponents.MediaSubtitleComponent"));
		return ptr;
	}


	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	class UMediaPlayer* GetMediaPlayer();
};


// Class RareMediaComponents.WwiseMediaSoundComponent
// 0x00B0 (0x0390 - 0x02E0)
class UWwiseMediaSoundComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x02E0(0x0060) MISSED OFFSET
	class UWwiseEvent*                                 MediaSoundEvent;                                          // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0348(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareMediaComponents.WwiseMediaSoundComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
