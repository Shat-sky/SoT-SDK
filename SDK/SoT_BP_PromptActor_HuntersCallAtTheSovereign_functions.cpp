// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PromptActor_HuntersCallAtTheSovereign_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PromptActor_HuntersCallAtTheSovereign.BP_PromptActor_HuntersCallAtTheSovereign_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PromptActor_HuntersCallAtTheSovereign_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_HuntersCallAtTheSovereign.BP_PromptActor_HuntersCallAtTheSovereign_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_HuntersCallAtTheSovereign.BP_PromptActor_HuntersCallAtTheSovereign_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PromptActor_HuntersCallAtTheSovereign_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_HuntersCallAtTheSovereign.BP_PromptActor_HuntersCallAtTheSovereign_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_HuntersCallAtTheSovereign.BP_PromptActor_HuntersCallAtTheSovereign_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_HuntersCallAtTheSovereign_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_HuntersCallAtTheSovereign.BP_PromptActor_HuntersCallAtTheSovereign_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PromptActor_HuntersCallAtTheSovereign.BP_PromptActor_HuntersCallAtTheSovereign_C.ExecuteUbergraph_BP_PromptActor_HuntersCallAtTheSovereign
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PromptActor_HuntersCallAtTheSovereign_C::ExecuteUbergraph_BP_PromptActor_HuntersCallAtTheSovereign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PromptActor_HuntersCallAtTheSovereign.BP_PromptActor_HuntersCallAtTheSovereign_C.ExecuteUbergraph_BP_PromptActor_HuntersCallAtTheSovereign"));

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
