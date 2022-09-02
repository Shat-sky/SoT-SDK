#pragma once

// Sea of Thieves (2.6.1) SDK

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
// 0x00E0 (0x03C0 - 0x02E0)
class UWwiseMediaSoundComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x02E0(0x0088) MISSED OFFSET
	class UWwiseEvent*                                 MediaSoundEvent;                                          // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0370(0x0040) MISSED OFFSET
	float                                              RelativeBufferSize;                                       // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x03B4(0x000C) MISSED OFFSET

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
