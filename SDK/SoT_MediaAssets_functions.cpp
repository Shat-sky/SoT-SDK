// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MediaAssets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData)

void UMediaBlueprintFunctionLibrary::EnumerateWebcamCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices"));

	struct
	{
		TArray<struct FMediaCaptureDevice> OutDevices;
		int                            Filter;
	} params;

	params.Filter = Filter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData)

void UMediaBlueprintFunctionLibrary::EnumerateVideoCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices"));

	struct
	{
		TArray<struct FMediaCaptureDevice> OutDevices;
		int                            Filter;
	} params;

	params.Filter = Filter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FMediaCaptureDevice> OutDevices                     (Parm, OutParm, ZeroConstructor)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData)

void UMediaBlueprintFunctionLibrary::EnumerateAudioCaptureDevices(int Filter, TArray<struct FMediaCaptureDevice>* OutDevices)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices"));

	struct
	{
		TArray<struct FMediaCaptureDevice> OutDevices;
		int                            Filter;
	} params;

	params.Filter = Filter;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutDevices != nullptr)
		*OutDevices = params.OutDevices;
}


// Function MediaAssets.MediaComponent.GetMediaTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaTexture*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaTexture* UMediaComponent::GetMediaTexture()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaComponent.GetMediaTexture"));

	struct
	{
		class UMediaTexture*           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaComponent.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaPlayer* UMediaComponent::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaComponent.GetMediaPlayer"));

	struct
	{
		class UMediaPlayer*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsSeeking
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsSeeking()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsSeeking"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsScrubbing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsScrubbing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsScrubbing"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SupportsRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SupportsRate"));

	struct
	{
		float                          Rate;
		bool                           Unthinned;
		bool                           ReturnValue;
	} params;

	params.Rate = Rate;
	params.Unthinned = Unthinned;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetViewRotation"));

	struct
	{
		struct FRotator                Rotation;
		bool                           Absolute;
		bool                           ReturnValue;
	} params;

	params.Rotation = Rotation;
	params.Absolute = Absolute;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetViewField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Horizontal                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Vertical                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetViewField"));

	struct
	{
		float                          Horizontal;
		float                          Vertical;
		bool                           Absolute;
		bool                           ReturnValue;
	} params;

	params.Horizontal = Horizontal;
	params.Vertical = Vertical;
	params.Absolute = Absolute;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          FrameRate                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetVideoTrackFrameRate(int TrackIndex, int FormatIndex, float FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate"));

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		float                          FrameRate;
		bool                           ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;
	params.FrameRate = FrameRate;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetTrackFormat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMediaPlayerTrack> TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetTrackFormat(TEnumAsByte<EMediaPlayerTrack> TrackType, int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetTrackFormat"));

	struct
	{
		TEnumAsByte<EMediaPlayerTrack> TrackType;
		int                            TrackIndex;
		int                            FormatIndex;
		bool                           ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetTimeDelay
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               TimeDelay                      (Parm, ZeroConstructor)

void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetTimeDelay"));

	struct
	{
		struct FTimespan               TimeDelay;
	} params;

	params.TimeDelay = TimeDelay;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.SetRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetRate(float Rate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetRate"));

	struct
	{
		float                          Rate;
		bool                           ReturnValue;
	} params;

	params.Rate = Rate;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetNativeVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetNativeVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetNativeVolume"));

	struct
	{
		float                          Volume;
		bool                           ReturnValue;
	} params;

	params.Volume = Volume;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetMediaOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*            Options                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMediaPlayer::SetMediaOptions(class UMediaSource* Options)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetMediaOptions"));

	struct
	{
		class UMediaSource*            Options;
	} params;

	params.Options = Options;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Looping                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SetLooping(bool Looping)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetLooping"));

	struct
	{
		bool                           Looping;
		bool                           ReturnValue;
	} params;

	params.Looping = Looping;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.SetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   PlayerName                     (Parm, ZeroConstructor, IsPlainOldData)

void UMediaPlayer::SetDesiredPlayerName(const struct FName& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetDesiredPlayerName"));

	struct
	{
		struct FName                   PlayerName;
	} params;

	params.PlayerName = PlayerName;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.SetBlockOnTime
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               Time                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SetBlockOnTime"));

	struct
	{
		struct FTimespan               Time;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.SelectTrack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EMediaPlayerTrack> TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::SelectTrack(TEnumAsByte<EMediaPlayerTrack> TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.SelectTrack"));

	struct
	{
		TEnumAsByte<EMediaPlayerTrack> TrackType;
		int                            TrackIndex;
		bool                           ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Seek
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               Time                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Seek(const struct FTimespan& Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Seek"));

	struct
	{
		struct FTimespan               Time;
		bool                           ReturnValue;
	} params;

	params.Time = Time;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Rewind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Rewind()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Rewind"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Reopen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Reopen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Reopen"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Previous
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Previous()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Previous"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.PlayAndSeek
// (Final, Native, Public, BlueprintCallable)

void UMediaPlayer::PlayAndSeek()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.PlayAndSeek"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Play"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Pause"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::OpenUrl(const class FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenUrl"));

	struct
	{
		class FString                  URL;
		bool                           ReturnValue;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenSourceWithOptions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FMediaPlayerOptions     Options                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSourceWithOptions"));

	struct
	{
		class UMediaSource*            MediaSource;
		struct FMediaPlayerOptions     Options;
		bool                           ReturnValue;
	} params;

	params.MediaSource = MediaSource;
	params.Options = Options;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenSourceLatent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FMediaPlayerOptions     Options                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMediaPlayer::OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSourceLatent"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
		class UMediaSource*            MediaSource;
		struct FMediaPlayerOptions     Options;
		bool                           bSuccess;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.MediaSource = MediaSource;
	params.Options = Options;

	UObject::ProcessEvent(fn, &params);

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function MediaAssets.MediaPlayer.OpenSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenSource"));

	struct
	{
		class UMediaSource*            MediaSource;
		bool                           ReturnValue;
	} params;

	params.MediaSource = MediaSource;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylistIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylistIndex"));

	struct
	{
		class UMediaPlaylist*          InPlaylist;
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.InPlaylist = InPlaylist;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenPlaylist
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlaylist*          InPlaylist                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenPlaylist"));

	struct
	{
		class UMediaPlaylist*          InPlaylist;
		bool                           ReturnValue;
	} params;

	params.InPlaylist = InPlaylist;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.OpenFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::OpenFile(const class FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.OpenFile"));

	struct
	{
		class FString                  FilePath;
		bool                           ReturnValue;
	} params;

	params.FilePath = FilePath;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Next
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::Next()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Next"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsReady"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPreparing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsPreparing()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPreparing"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPlaying"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsPaused()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsPaused"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsLooping()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsLooping"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsConnecting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsConnecting()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsConnecting"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsClosed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsClosed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsClosed"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.IsBuffering
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::IsBuffering()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.IsBuffering"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::HasError()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.HasError"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator UMediaPlayer::GetViewRotation()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetViewRotation"));

	struct
	{
		struct FRotator                ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMediaPlayer::GetVideoTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackType"));

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		class FString                  ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FFloatRange             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates"));

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		struct FFloatRange             ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaPlayer::GetVideoTrackFrameRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate"));

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		float                          ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions"));

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		struct FIntPoint               ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaPlayer::GetVideoTrackAspectRatio(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio"));

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		float                          ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaPlayer::GetVerticalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMediaPlayer::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetUrl"));

	struct
	{
		class FString                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackLanguage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMediaPlayerTrack> TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMediaPlayer::GetTrackLanguage(TEnumAsByte<EMediaPlayerTrack> TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackLanguage"));

	struct
	{
		TEnumAsByte<EMediaPlayerTrack> TrackType;
		int                            TrackIndex;
		class FString                  ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMediaPlayerTrack> TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaPlayer::GetTrackFormat(TEnumAsByte<EMediaPlayerTrack> TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackFormat"));

	struct
	{
		TEnumAsByte<EMediaPlayerTrack> TrackType;
		int                            TrackIndex;
		int                            ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTrackDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMediaPlayerTrack> TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMediaPlayer::GetTrackDisplayName(TEnumAsByte<EMediaPlayerTrack> TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTrackDisplayName"));

	struct
	{
		TEnumAsByte<EMediaPlayerTrack> TrackType;
		int                            TrackIndex;
		struct FText                   ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTimeStamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaTimeStampInfo*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaTimeStampInfo* UMediaPlayer::GetTimeStamp()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTimeStamp"));

	struct
	{
		class UMediaTimeStampInfo*     ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTimeDelay
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaPlayer::GetTimeDelay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTimeDelay"));

	struct
	{
		struct FTimespan               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaPlayer::GetTime()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetTime"));

	struct
	{
		struct FTimespan               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetSupportedRates
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFloatRange>     OutRates                       (Parm, OutParm, ZeroConstructor)
// bool                           Unthinned                      (Parm, ZeroConstructor, IsPlainOldData)

void UMediaPlayer::GetSupportedRates(bool Unthinned, TArray<struct FFloatRange>* OutRates)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetSupportedRates"));

	struct
	{
		TArray<struct FFloatRange>     OutRates;
		bool                           Unthinned;
	} params;

	params.Unthinned = Unthinned;

	UObject::ProcessEvent(fn, &params);

	if (OutRates != nullptr)
		*OutRates = params.OutRates;
}


// Function MediaAssets.MediaPlayer.GetSelectedTrack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMediaPlayerTrack> TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaPlayer::GetSelectedTrack(TEnumAsByte<EMediaPlayerTrack> TrackType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetSelectedTrack"));

	struct
	{
		TEnumAsByte<EMediaPlayerTrack> TrackType;
		int                            ReturnValue;
	} params;

	params.TrackType = TrackType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaPlayer::GetRate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetRate"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylistIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaPlayer::GetPlaylistIndex()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlaylistIndex"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlaylist
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlaylist*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaPlaylist* UMediaPlayer::GetPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlaylist"));

	struct
	{
		class UMediaPlaylist*          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMediaPlayer::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetPlayerName"));

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTracks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMediaPlayerTrack> TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaPlayer::GetNumTracks(TEnumAsByte<EMediaPlayerTrack> TrackType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetNumTracks"));

	struct
	{
		TEnumAsByte<EMediaPlayerTrack> TrackType;
		int                            ReturnValue;
	} params;

	params.TrackType = TrackType;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetNumTrackFormats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMediaPlayerTrack> TrackType                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaPlayer::GetNumTrackFormats(TEnumAsByte<EMediaPlayerTrack> TrackType, int TrackIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetNumTrackFormats"));

	struct
	{
		TEnumAsByte<EMediaPlayerTrack> TrackType;
		int                            TrackIndex;
		int                            ReturnValue;
	} params;

	params.TrackType = TrackType;
	params.TrackIndex = TrackIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetMediaName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMediaPlayer::GetMediaName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetMediaName"));

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaPlayer::GetHorizontalFieldOfView()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FTimespan UMediaPlayer::GetDuration()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDuration"));

	struct
	{
		struct FTimespan               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetDesiredPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMediaPlayer::GetDesiredPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetDesiredPlayerName"));

	struct
	{
		struct FName                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMediaPlayer::GetAudioTrackType(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackType"));

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		class FString                  ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaPlayer::GetAudioTrackSampleRate(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate"));

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		int                            ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.GetAudioTrackChannels
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TrackIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FormatIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaPlayer::GetAudioTrackChannels(int TrackIndex, int FormatIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.GetAudioTrackChannels"));

	struct
	{
		int                            TrackIndex;
		int                            FormatIndex;
		int                            ReturnValue;
	} params;

	params.TrackIndex = TrackIndex;
	params.FormatIndex = FormatIndex;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.Close
// (Final, Native, Public, BlueprintCallable)

void UMediaPlayer::Close()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.Close"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlayer.CanPlayUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::CanPlayUrl(const class FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlayUrl"));

	struct
	{
		class FString                  URL;
		bool                           ReturnValue;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPlaySource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPlaySource"));

	struct
	{
		class UMediaSource*            MediaSource;
		bool                           ReturnValue;
	} params;

	params.MediaSource = MediaSource;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlayer.CanPause
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlayer::CanPause()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlayer.CanPause"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Replace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            Replacement                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlaylist::Replace(int Index, class UMediaSource* Replacement)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Replace"));

	struct
	{
		int                            Index;
		class UMediaSource*            Replacement;
		bool                           ReturnValue;
	} params;

	params.Index = Index;
	params.Replacement = Replacement;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.RemoveAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlaylist::RemoveAt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.RemoveAt"));

	struct
	{
		int                            Index;
		bool                           ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlaylist::Remove(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Remove"));

	struct
	{
		class UMediaSource*            MediaSource;
		bool                           ReturnValue;
	} params;

	params.MediaSource = MediaSource;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Num
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaPlaylist::Num()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Num"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Insert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Insert"));

	struct
	{
		class UMediaSource*            MediaSource;
		int                            Index;
	} params;

	params.MediaSource = MediaSource;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaPlaylist.GetRandom
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            OutIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaSource* UMediaPlaylist::GetRandom(int* OutIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetRandom"));

	struct
	{
		int                            OutIndex;
		class UMediaSource*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutIndex != nullptr)
		*OutIndex = params.OutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetPrevious
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaSource* UMediaPlaylist::GetPrevious(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetPrevious"));

	struct
	{
		int                            InOutIndex;
		class UMediaSource*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.GetNext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            InOutIndex                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaSource* UMediaPlaylist::GetNext(int* InOutIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.GetNext"));

	struct
	{
		int                            InOutIndex;
		class UMediaSource*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InOutIndex != nullptr)
		*InOutIndex = params.InOutIndex;

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Get
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaSource* UMediaPlaylist::Get(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Get"));

	struct
	{
		int                            Index;
		class UMediaSource*            ReturnValue;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddUrl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlaylist::AddUrl(const class FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.AddUrl"));

	struct
	{
		class FString                  URL;
		bool                           ReturnValue;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.AddFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlaylist::AddFile(const class FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.AddFile"));

	struct
	{
		class FString                  FilePath;
		bool                           ReturnValue;
	} params;

	params.FilePath = FilePath;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaPlaylist.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaPlaylist::Add(class UMediaSource* MediaSource)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaPlaylist.Add"));

	struct
	{
		class UMediaSource*            MediaSource;
		bool                           ReturnValue;
	} params;

	params.MediaSource = MediaSource;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaSource.Validate
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMediaSource::Validate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.Validate"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaSource.SetMediaOptionString
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString                  Value                          (Parm, ZeroConstructor)

void UMediaSource::SetMediaOptionString(const struct FName& Key, const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionString"));

	struct
	{
		struct FName                   Key;
		class FString                  Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaSource.SetMediaOptionFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMediaSource::SetMediaOptionFloat(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionFloat"));

	struct
	{
		struct FName                   Key;
		float                          Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaSource.SetMediaOptionBool
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Key                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UMediaSource::SetMediaOptionBool(const struct FName& Key, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.SetMediaOptionBool"));

	struct
	{
		struct FName                   Key;
		bool                           Value;
	} params;

	params.Key = Key;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaSource.GetUrl
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMediaSource::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaSource.GetUrl"));

	struct
	{
		class FString                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.FileMediaSource.SetFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  path                           (Parm, ZeroConstructor)

void UFileMediaSource::SetFilePath(const class FString& path)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.FileMediaSource.SetFilePath"));

	struct
	{
		class FString                  path;
	} params;

	params.path = path;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaTexture.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*            NewMediaPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void UMediaTexture::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.SetMediaPlayer"));

	struct
	{
		class UMediaPlayer*            NewMediaPlayer;
	} params;

	params.NewMediaPlayer = NewMediaPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function MediaAssets.MediaTexture.GetWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaTexture::GetWidth()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetWidth"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetTextureNumMips
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaTexture::GetTextureNumMips()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetTextureNumMips"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaPlayer* UMediaTexture::GetMediaPlayer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetMediaPlayer"));

	struct
	{
		class UMediaPlayer*            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMediaTexture::GetHeight()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetHeight"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MediaAssets.MediaTexture.GetAspectRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMediaTexture::GetAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function MediaAssets.MediaTexture.GetAspectRatio"));

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
