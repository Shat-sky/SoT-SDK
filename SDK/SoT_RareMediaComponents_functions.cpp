// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareMediaComponents_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RareMediaComponents.MediaSubtitleComponent.SetMediaPlayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*            NewMediaPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void UMediaSubtitleComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareMediaComponents.MediaSubtitleComponent.SetMediaPlayer"));

	struct
	{
		class UMediaPlayer*            NewMediaPlayer;
	} params;

	params.NewMediaPlayer = NewMediaPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function RareMediaComponents.MediaSubtitleComponent.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaPlayer* UMediaSubtitleComponent::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareMediaComponents.MediaSubtitleComponent.GetMediaPlayer"));

	struct
	{
		class UMediaPlayer*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
