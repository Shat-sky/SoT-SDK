// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TreasuryFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer
// (Native, Event, Public, BlueprintEvent)

void AShimmerActor::OnDeactivateShimmer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.ShimmerActor.OnActivateShimmer
// (Native, Event, Public, BlueprintEvent)

void AShimmerActor::OnActivateShimmer()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.ShimmerActor.OnActivateShimmer"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnWaveStart
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETreasuryEncounterType> EncounterType                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETreasuryWaveType> WaveType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnWaveStart(TEnumAsByte<ETreasuryEncounterType> EncounterType, TEnumAsByte<ETreasuryWaveType> WaveType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnWaveStart"));

	struct
	{
		TEnumAsByte<ETreasuryEncounterType> EncounterType;
		TEnumAsByte<ETreasuryWaveType> WaveType;
	} params;

	params.EncounterType = EncounterType;
	params.WaveType = WaveType;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnWaveFinishedVaultMaster
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UMechanismActionInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnWaveFinishedVaultMaster(const TScriptInterface<class UMechanismActionInterface>& Action)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnWaveFinishedVaultMaster"));

	struct
	{
		TScriptInterface<class UMechanismActionInterface> Action;
	} params;

	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnWaveFinished
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UMechanismActionInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnWaveFinished(const TScriptInterface<class UMechanismActionInterface>& Action)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnWaveFinished"));

	struct
	{
		TScriptInterface<class UMechanismActionInterface> Action;
	} params;

	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnWaveComplete
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETreasuryEncounterType> EncounterType                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnWaveComplete(TEnumAsByte<ETreasuryEncounterType> EncounterType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnWaveComplete"));

	struct
	{
		TEnumAsByte<ETreasuryEncounterType> EncounterType;
	} params;

	params.EncounterType = EncounterType;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnVaultOpen
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnVaultOpen()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnVaultOpen"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnVaultClosed
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnVaultClosed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnVaultClosed"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETreasuryState>    PrevState                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETreasuryState>    NewState                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnTreasuryStateChange(TEnumAsByte<ETreasuryState> PrevState, TEnumAsByte<ETreasuryState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange"));

	struct
	{
		TEnumAsByte<ETreasuryState>    PrevState;
		TEnumAsByte<ETreasuryState>    NewState;
	} params;

	params.PrevState = PrevState;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnTreasuryDeactivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnTreasuryActivate()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnStartRaiseWater()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnStartDrainWater
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnStartDrainWater()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnStartDrainWater"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnRoomStarted
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnRoomStarted()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnRoomStarted"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnRaisedWater
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UMechanismResetInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnRaisedWater(const TScriptInterface<class UMechanismResetInterface>& Action)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnRaisedWater"));

	struct
	{
		TScriptInterface<class UMechanismResetInterface> Action;
	} params;

	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnLeaveRoom
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnLeaveRoom(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnLeaveRoom"));

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnEnterRoom
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnEnterRoom(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnEnterRoom"));

	struct
	{
		class AActor*                  OtherActor;
	} params;

	params.OtherActor = OtherActor;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup
// (Native, Event, Public, BlueprintEvent)

void ATreasuryRoom::OnEncounterParamsSetup()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.OnDrainedWater
// (Final, Native, Protected)
// Parameters:
// TScriptInterface<class UMechanismResetInterface> Action                         (Parm, ZeroConstructor, IsPlainOldData)

void ATreasuryRoom::OnDrainedWater(const TScriptInterface<class UMechanismResetInterface>& Action)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.OnDrainedWater"));

	struct
	{
		TScriptInterface<class UMechanismResetInterface> Action;
	} params;

	params.Action = Action;

	UObject::ProcessEvent(fn, &params);
}


// Function TreasuryFramework.TreasuryRoom.GetState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ETreasuryState>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETreasuryState> ATreasuryRoom::GetState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TreasuryFramework.TreasuryRoom.GetState"));

	struct
	{
		TEnumAsByte<ETreasuryState>    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
