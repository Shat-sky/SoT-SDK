// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Audio_Play_sfx_shrouded_island_ambience_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_sfx_shrouded_island_ambience_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.StopAudio"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_sfx_shrouded_island_ambience_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.PlayAudio"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Audio_Play_sfx_shrouded_island_ambience_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Audio_Play_sfx_shrouded_island_ambience_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Audio_Play_sfx_shrouded_island_ambience_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.ExecuteUbergraph_BP_Audio_Play_sfx_shrouded_island_ambience
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Audio_Play_sfx_shrouded_island_ambience_C::ExecuteUbergraph_BP_Audio_Play_sfx_shrouded_island_ambience(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Audio_Play_sfx_shrouded_island_ambience.BP_Audio_Play_sfx_shrouded_island_ambience_C.ExecuteUbergraph_BP_Audio_Play_sfx_shrouded_island_ambience"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
