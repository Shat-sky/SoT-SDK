// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RemoteActorDestruction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors
// (Native, Public, HasOutParms)
// Parameters:
// TArray<class UClass*>          ClassesToDestroy               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URemoteActorDestructionInterface::DestroyExistingActors(TArray<class UClass*> ClassesToDestroy)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyExistingActors"));

	struct
	{
		TArray<class UClass*>          ClassesToDestroy;
	} params;

	params.ClassesToDestroy = ClassesToDestroy;

	UObject::ProcessEvent(fn, &params);
}


// Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor
// (Native, Public, HasOutParms)
// Parameters:
// struct FDestroyActorGameServerRequestModel DestroyActorGameServerRequestModel (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void URemoteActorDestructionInterface::DestroyActor(const struct FDestroyActorGameServerRequestModel& DestroyActorGameServerRequestModel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RemoteActorDestruction.RemoteActorDestructionInterface.DestroyActor"));

	struct
	{
		struct FDestroyActorGameServerRequestModel DestroyActorGameServerRequestModel;
	} params;

	params.DestroyActorGameServerRequestModel = DestroyActorGameServerRequestModel;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
