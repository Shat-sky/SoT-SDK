#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor = 1,
	EMediaWebcamCaptureDeviceFilter__Front = 2,
	EMediaWebcamCaptureDeviceFilter__Rear = 3,
	EMediaWebcamCaptureDeviceFilter__Unknown = 4,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None = 0,
	EMediaVideoCaptureDeviceFilter__Card = 1,
	EMediaVideoCaptureDeviceFilter__Software = 2,
	EMediaVideoCaptureDeviceFilter__Unknown = 3,
	EMediaVideoCaptureDeviceFilter__Webcam = 4,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None = 0,
	EMediaAudioCaptureDeviceFilter__Card = 1,
	EMediaAudioCaptureDeviceFilter__Microphone = 2,
	EMediaAudioCaptureDeviceFilter__Software = 3,
	EMediaAudioCaptureDeviceFilter__Unknown = 4,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio       = 0,
	EMediaPlayerTrack__Caption     = 1,
	EMediaPlayerTrack__Metadata    = 2,
	EMediaPlayerTrack__Script      = 3,
	EMediaPlayerTrack__Subtitle    = 4,
	EMediaPlayerTrack__Text        = 5,
	EMediaPlayerTrack__Video       = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX = 7
};


// Enum MediaAssets.MediaTextureOrientation
enum class EMediaTextureOrientation : uint8_t
{
	MTORI_Original                 = 0,
	MTORI_CW90                     = 1,
	MTORI_CW180                    = 2,
	MTORI_CW270                    = 3,
	MTORI_MAX                      = 4
};


// Enum MediaAssets.MediaTextureOutputFormat
enum class EMediaTextureOutputFormat : uint8_t
{
	MTOF_Default                   = 0,
	MTOF_SRGB_LINOUT               = 1,
	MTOF_MAX                       = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
