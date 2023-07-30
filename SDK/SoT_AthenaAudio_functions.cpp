// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaAudio.AudioPortalComponent.SetParentShip
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ParentShip                     (Parm, ZeroConstructor, IsPlainOldData)

void UAudioPortalComponent::SetParentShip(class AActor* ParentShip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.AudioPortalComponent.SetParentShip"));

	struct
	{
		class AActor*                  ParentShip;
	} params;

	params.ParentShip = ParentShip;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAudio.AudioPortalInterface.UnregisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAudioPortalInterface::UnregisterPortal(class UAudioPortalComponent* AudioPortal)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.AudioPortalInterface.UnregisterPortal"));

	struct
	{
		class UAudioPortalComponent*   AudioPortal;
	} params;

	params.AudioPortal = AudioPortal;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAudio.AudioPortalInterface.RegisterPortal
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAudioPortalComponent*   AudioPortal                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UAudioPortalInterface::RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.AudioPortalInterface.RegisterPortal"));

	struct
	{
		class UAudioPortalComponent*   AudioPortal;
		class AActor*                  OwningActor;
	} params;

	params.AudioPortal = AudioPortal;
	params.OwningActor = OwningActor;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace
// (Native, Public)
// Parameters:
// class UAudioSpaceDataAsset*    AudioSpace                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortalsInSpecificSpace"));

	struct
	{
		class UAudioSpaceDataAsset*    AudioSpace;
		class AActor*                  OwningActor;
		TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;
	} params;

	params.AudioSpace = AudioSpace;
	params.OwningActor = OwningActor;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortals
// (Native, Public, Const)
// Parameters:
// TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TWeakObjectPtr<class UAudioPortalComponent>> UAudioPortalInterface::GetAllRegisteredPortals()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.AudioPortalInterface.GetAllRegisteredPortals"));

	struct
	{
		TArray<TWeakObjectPtr<class UAudioPortalComponent>> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAudio.AudioSpaceComponent.OnOverlapEnd
// (Final, Native, Private)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UAudioSpaceComponent::OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.AudioSpaceComponent.OnOverlapEnd"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAudio.AudioSpaceComponent.OnOverlapBegin
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromSweep                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void UAudioSpaceComponent::OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.AudioSpaceComponent.OnOverlapBegin"));

	struct
	{
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           FromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.FromSweep = FromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAudio.AudioSpaceTrackerComponent.GetCurrentSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioSpaceDataAsset*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAudioSpaceDataAsset* UAudioSpaceTrackerComponent::GetCurrentSpace()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.AudioSpaceTrackerComponent.GetCurrentSpace"));

	struct
	{
		class UAudioSpaceDataAsset*    ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function AthenaAudio.MultiEmitter.ResetNamingCount
// (Final, Native, Public, BlueprintCallable)

void AMultiEmitter::ResetNamingCount()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.MultiEmitter.ResetNamingCount"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AthenaAudio.MultiEmitter.CreateAndAddMergedEmitterComponentToRoot
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InOffset                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UWwiseEvent*             InWwiseEvent                   (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseObjectPoolWrapper* InPool                         (Parm, ZeroConstructor, IsPlainOldData)

void AMultiEmitter::CreateAndAddMergedEmitterComponentToRoot(const struct FName& InName, const struct FVector& InOffset, class UWwiseEvent* InWwiseEvent, class UWwiseObjectPoolWrapper* InPool)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AthenaAudio.MultiEmitter.CreateAndAddMergedEmitterComponentToRoot"));

	struct
	{
		struct FName                   InName;
		struct FVector                 InOffset;
		class UWwiseEvent*             InWwiseEvent;
		class UWwiseObjectPoolWrapper* InPool;
	} params;

	params.InName = InName;
	params.InOffset = InOffset;
	params.InWwiseEvent = InWwiseEvent;
	params.InPool = InPool;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
