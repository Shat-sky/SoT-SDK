// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LevelSequence_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	ALevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                        (Parm)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingPtr& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetBinding");

	ALevelSequenceActor_SetBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)

void ALevelSequenceActor::ResetBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBindings");

	ALevelSequenceActor_ResetBindings_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                        (Parm)

void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingPtr& Binding)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.ResetBinding");

	ALevelSequenceActor_ResetBinding_Params params;
	params.Binding = Binding;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                        (Parm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.RemoveBinding");

	ALevelSequenceActor_RemoveBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           Load                           (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULevelSequence* ALevelSequenceActor::GetSequence(bool Load)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.GetSequence");

	ALevelSequenceActor_GetSequence_Params params;
	params.Load = Load;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingPtr Binding                        (Parm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)

void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.AddBinding");

	ALevelSequenceActor_AddBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 InSettings                     (Parm, ZeroConstructor, IsPlainOldData)

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.SetSettings");

	ULevelSequenceBurnIn_SetSettings_Params params;
	params.InSettings = InSettings;

	UObject::ProcessEvent(fn, &params);
}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass");

	ULevelSequenceBurnIn_GetSettingsClass_Params params;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
