// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Music_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Music.MusicZoneInterface.CanPlayForPlayer
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Player                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMusicZoneInterface::CanPlayForPlayer(class AActor* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneInterface.CanPlayForPlayer");

	UMusicZoneInterface_CanPlayForPlayer_Params params;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Music.MusicZoneComponent.GetEmitter
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FWwiseEmitter           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FWwiseEmitter UMusicZoneComponent::GetEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.GetEmitter");

	UMusicZoneComponent_GetEmitter_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Music.MusicZoneComponent.DisableZone
// (Final, Native, Public, BlueprintCallable)

void UMusicZoneComponent::DisableZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.DisableZone");

	UMusicZoneComponent_DisableZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone
// (Net, NetReliable, Native, Event, NetMulticast, Public)

void UMusicZoneComponent::Client_StopMusicAndDisableZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone");

	UMusicZoneComponent_Client_StopMusicAndDisableZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Music.MusicZoneComponent.Client_PlayOneShot
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMusicZoneComponent::Client_PlayOneShot(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.Client_PlayOneShot");

	UMusicZoneComponent_Client_PlayOneShot_Params params;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function Music.MusicZoneComponent.ActivateZone
// (Final, Native, Public, BlueprintCallable)

void UMusicZoneComponent::ActivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.ActivateZone");

	UMusicZoneComponent_ActivateZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState
// (Final, Native, Private)

void UAISpawnerMusicZoneComponent::OnRep_SpawnerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState");

	UAISpawnerMusicZoneComponent_OnRep_SpawnerState_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
