// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

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
