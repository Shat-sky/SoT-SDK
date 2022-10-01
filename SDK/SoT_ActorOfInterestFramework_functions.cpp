// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActorOfInterestFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorsOfInterestFromIds
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ActorOfInterestIds             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)

void UActorOfInterestBlueprintFunctionLibrary::GetActorsOfInterestFromIds(class UObject* WorldContextObject, TArray<class UClass*> ActorOfInterestIds, TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorsOfInterestFromIds"));

	struct
	{
		class UObject*                 WorldContextObject;
		TArray<class UClass*>          ActorOfInterestIds;
		TArray<class AActor*>          Actors;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ActorOfInterestIds = ActorOfInterestIds;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorOfInterestFromId
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ActorOfInterestId              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UActorOfInterestBlueprintFunctionLibrary::GetActorOfInterestFromId(class UObject* WorldContextObject, class UClass* ActorOfInterestId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary.GetActorOfInterestFromId"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UClass*                  ActorOfInterestId;
		class AActor*                  ReturnValue;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ActorOfInterestId = ActorOfInterestId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
