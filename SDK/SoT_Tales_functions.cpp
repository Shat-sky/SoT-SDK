// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Tales_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tales.TaleQuestStepInterface.Signal
// (Native, Public)

void UTaleQuestStepInterface::Signal()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestStepInterface.Signal"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestCargoRunContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTaleQuestCargoRunContract* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTaleQuestCargoRunContract* UTaleQuestCargoRunContractsService::GetContract(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCargoRunContractsService.GetContract"));

	struct
	{
		struct FGuid                   Guid;
		class UTaleQuestCargoRunContract* ReturnValue;
	} params;

	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestCargoRunContractsService.AddContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          InItems                        (Parm, ZeroConstructor)
// class AActor*                  InCollectFromNPC               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InDeliverToNPC                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            InTimeLimitInMinutes           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   InDeliveryHintLocationText     (Parm)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UTaleQuestCargoRunContractsService::AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes, const struct FText& InDeliveryHintLocationText)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCargoRunContractsService.AddContract"));

	struct
	{
		TArray<class UClass*>          InItems;
		class AActor*                  InCollectFromNPC;
		class AActor*                  InDeliverToNPC;
		int                            InTimeLimitInMinutes;
		struct FText                   InDeliveryHintLocationText;
		struct FGuid                   ReturnValue;
	} params;

	params.InItems = InItems;
	params.InCollectFromNPC = InCollectFromNPC;
	params.InDeliverToNPC = InDeliverToNPC;
	params.InTimeLimitInMinutes = InTimeLimitInMinutes;
	params.InDeliveryHintLocationText = InDeliveryHintLocationText;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.GetContract
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   Guid                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTaleQuestMerchantContract* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTaleQuestMerchantContract* UTaleQuestMerchantContractsService::GetContract(const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMerchantContractsService.GetContract"));

	struct
	{
		struct FGuid                   Guid;
		class UTaleQuestMerchantContract* ReturnValue;
	} params;

	params.Guid = Guid;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestMerchantContractsService.AddContract
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FTaleQuestDeliveryRequest> Requests                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   InDeliveryDestination          (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeLimit                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UTaleQuestMerchantContractsService::AddContract(TArray<struct FTaleQuestDeliveryRequest> Requests, const struct FName& InDeliveryDestination, float InTimeLimit)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMerchantContractsService.AddContract"));

	struct
	{
		TArray<struct FTaleQuestDeliveryRequest> Requests;
		struct FName                   InDeliveryDestination;
		float                          InTimeLimit;
		struct FGuid                   ReturnValue;
	} params;

	params.Requests = Requests;
	params.InDeliveryDestination = InDeliveryDestination;
	params.InTimeLimit = InTimeLimit;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestQueryableStatesReadInterface.ReadDataInt
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  DataID                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            OutDataContent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestQueryableStatesReadInterface::ReadDataInt(class UClass* DataID, int* OutDataContent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestQueryableStatesReadInterface.ReadDataInt"));

	struct
	{
		class UClass*                  DataID;
		int                            OutDataContent;
		bool                           ReturnValue;
	} params;

	params.DataID = DataID;

	UObject::ProcessEvent(fn, &params);

	if (OutDataContent != nullptr)
		*OutDataContent = params.OutDataContent;

	return params.ReturnValue;
}


// Function Tales.TaleQuestQueryableStatesReadInterface.ReadDataBool
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  DataID                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           OutDataContent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestQueryableStatesReadInterface::ReadDataBool(class UClass* DataID, bool* OutDataContent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestQueryableStatesReadInterface.ReadDataBool"));

	struct
	{
		class UClass*                  DataID;
		bool                           OutDataContent;
		bool                           ReturnValue;
	} params;

	params.DataID = DataID;

	UObject::ProcessEvent(fn, &params);

	if (OutDataContent != nullptr)
		*OutDataContent = params.OutDataContent;

	return params.ReturnValue;
}


// Function Tales.TaleQuestQueryableStatesReadInterface.CanDataBeRead
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  DataID                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestQueryableStatesReadInterface::CanDataBeRead(class UClass* DataID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestQueryableStatesReadInterface.CanDataBeRead"));

	struct
	{
		class UClass*                  DataID;
		bool                           ReturnValue;
	} params;

	params.DataID = DataID;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Seed                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestSelectorServiceBlueprintFunctionLibrary::SetDebugVoyageSeed(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.SetDebugVoyageSeed"));

	struct
	{
		int                            Seed;
	} params;

	params.Seed = Seed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed
// (Final, Native, Static, Public, BlueprintCallable)

void UTaleQuestSelectorServiceBlueprintFunctionLibrary::ResetVoyageDebugSeed()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestSelectorServiceBlueprintFunctionLibrary.ResetVoyageDebugSeed"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UCutsceneResponseCoordinator* Coordinator                    (Parm, ZeroConstructor, IsPlainOldData)

void UCutsceneResponsesTaleService::TrackResponseCoordinator(class UCutsceneResponseCoordinator* Coordinator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.TrackResponseCoordinator"));

	struct
	{
		class UCutsceneResponseCoordinator* Coordinator;
	} params;

	params.Coordinator = Coordinator;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UCutsceneResponsePlayerInterface> CutsceneResponsePlayer         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ResponseSheetClass             (Parm, ZeroConstructor, IsPlainOldData)
// class UCutsceneResponseSheet*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCutsceneResponseSheet* UCutsceneResponsesTaleService::StartCutsceneResponseSheet(class AActor* TargetActor, const TScriptInterface<class UCutsceneResponsePlayerInterface>& CutsceneResponsePlayer, class UClass* ResponseSheetClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.StartCutsceneResponseSheet"));

	struct
	{
		class AActor*                  TargetActor;
		TScriptInterface<class UCutsceneResponsePlayerInterface> CutsceneResponsePlayer;
		class UClass*                  ResponseSheetClass;
		class UCutsceneResponseSheet*  ReturnValue;
	} params;

	params.TargetActor = TargetActor;
	params.CutsceneResponsePlayer = CutsceneResponsePlayer;
	params.ResponseSheetClass = ResponseSheetClass;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UCutsceneResponsesTaleService::ClearAllActiveResponseSheets()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.ClearAllActiveResponseSheets"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UCutsceneResponsesTaleService::AddResponseSheetRelevantActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.CutsceneResponsesTaleService.AddResponseSheetRelevantActor"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestEQSService.AddVectorParam
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 VectorParam                    (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestEQSService::AddVectorParam(const struct FName& ParamName, const struct FVector& VectorParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestEQSService.AddVectorParam"));

	struct
	{
		struct FName                   ParamName;
		struct FVector                 VectorParam;
	} params;

	params.ParamName = ParamName;
	params.VectorParam = VectorParam;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestEQSService.AddFloatParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FloatParam                     (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestEQSService::AddFloatParam(const struct FName& ParamName, float FloatParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestEQSService.AddFloatParam"));

	struct
	{
		struct FName                   ParamName;
		float                          FloatParam;
	} params;

	params.ParamName = ParamName;
	params.FloatParam = FloatParam;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestEQSService.AddActorParam
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ActorParam                     (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestEQSService::AddActorParam(const struct FName& ParamName, class AActor* ActorParam)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestEQSService.AddActorParam"));

	struct
	{
		struct FName                   ParamName;
		class AActor*                  ActorParam;
	} params;

	params.ParamName = ParamName;
	params.ActorParam = ActorParam;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestInteractionPreventionService.PreventInteractionWithTargetActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestInteractionPreventionService::PreventInteractionWithTargetActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestInteractionPreventionService.PreventInteractionWithTargetActor"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestInteractionPreventionService.EnableInteractionWithTargetActor
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestInteractionPreventionService::EnableInteractionWithTargetActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestInteractionPreventionService.EnableInteractionWithTargetActor"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Minimum                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Maximum                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestSelectorService::GetRandomIntegerInRange(int Minimum, int Maximum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestSelectorService.GetRandomIntegerInRange"));

	struct
	{
		int                            Minimum;
		int                            Maximum;
		int                            ReturnValue;
	} params;

	params.Minimum = Minimum;
	params.Maximum = Maximum;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestSelectorService.GetRandomFloatInRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Minimum                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Maximum                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestSelectorService::GetRandomFloatInRange(float Minimum, float Maximum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestSelectorService.GetRandomFloatInRange"));

	struct
	{
		float                          Minimum;
		float                          Maximum;
		float                          ReturnValue;
	} params;

	params.Minimum = Minimum;
	params.Maximum = Maximum;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToEnable
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestToggleInteractionDescriptionService::TargetActorInteractionToEnable(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToEnable"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToDisable
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestToggleInteractionDescriptionService::TargetActorInteractionToDisable(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestToggleInteractionDescriptionService.TargetActorInteractionToDisable"));

	struct
	{
		class AActor*                  Actor;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.SelectNamedPointStepDesc.GetNamedPointsGroups
// (Final, Native, Public, Const)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> USelectNamedPointStepDesc::GetNamedPointsGroups()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.SelectNamedPointStepDesc.GetNamedPointsGroups"));

	struct
	{
		TArray<class FString>          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.ActorOfInterestTaleFunctionLibrary.GetActorsOfInterestForId
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class UClass*                  ActorsOfInterestId             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor)

void UActorOfInterestTaleFunctionLibrary::GetActorsOfInterestForId(class UClass* ActorsOfInterestId, TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.ActorOfInterestTaleFunctionLibrary.GetActorsOfInterestForId"));

	struct
	{
		class UClass*                  ActorsOfInterestId;
		TArray<class AActor*>          Actors;
	} params;

	params.ActorsOfInterestId = ActorsOfInterestId;

	UObject::ProcessEvent(fn, &params);

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function Tales.ActorOfInterestTaleFunctionLibrary.GetActorsOfInterest
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<class UClass*>          ActorsOfInterestId             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UActorOfInterestTaleFunctionLibrary::GetActorsOfInterest(TArray<class UClass*> ActorsOfInterestId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.ActorOfInterestTaleFunctionLibrary.GetActorsOfInterest"));

	struct
	{
		TArray<class UClass*>          ActorsOfInterestId;
		TArray<class AActor*>          ReturnValue;
	} params;

	params.ActorsOfInterestId = ActorsOfInterestId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.ActorOfInterestTaleFunctionLibrary.GetActorOfInterest
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class UClass*                  ActorOfInterestId              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UActorOfInterestTaleFunctionLibrary::GetActorOfInterest(class UClass* ActorOfInterestId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.ActorOfInterestTaleFunctionLibrary.GetActorOfInterest"));

	struct
	{
		class UClass*                  ActorOfInterestId;
		class AActor*                  ReturnValue;
	} params;

	params.ActorOfInterestId = ActorOfInterestId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestActorFunctionLibrary.SpawnActor
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UClass*                  What                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              Where                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           TrackActor                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutomaticallyGatherForMigration (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UTaleQuestActorFunctionLibrary::SpawnActor(class UClass* What, const struct FTransform& Where, bool TrackActor, bool AutomaticallyGatherForMigration)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestActorFunctionLibrary.SpawnActor"));

	struct
	{
		class UClass*                  What;
		struct FTransform              Where;
		bool                           TrackActor;
		bool                           AutomaticallyGatherForMigration;
		class AActor*                  ReturnValue;
	} params;

	params.What = What;
	params.Where = Where;
	params.TrackActor = TrackActor;
	params.AutomaticallyGatherForMigration = AutomaticallyGatherForMigration;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestActorFunctionLibrary.ResolveActor
// (Final, RequiredAPI, Native, Public, HasOutParms, Const)
// Parameters:
// TAssetPtr<class AActor>        ActorReference                 (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UTaleQuestActorFunctionLibrary::ResolveActor(TAssetPtr<class AActor> ActorReference)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestActorFunctionLibrary.ResolveActor"));

	struct
	{
		TAssetPtr<class AActor>        ActorReference;
		class AActor*                  ReturnValue;
	} params;

	params.ActorReference = ActorReference;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestActorFunctionLibrary.GetInterface
// (Final, RequiredAPI, Native, Static, Public, HasOutParms)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  InterfaceClass                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TScriptInterface<class UInterface> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TScriptInterface<class UInterface> UTaleQuestActorFunctionLibrary::GetInterface(class AActor* Actor, class UClass* InterfaceClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestActorFunctionLibrary.GetInterface"));

	struct
	{
		class AActor*                  Actor;
		class UClass*                  InterfaceClass;
		TScriptInterface<class UInterface> ReturnValue;
	} params;

	params.Actor = Actor;
	params.InterfaceClass = InterfaceClass;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestActorFunctionLibrary.GetComponentByClass
// (Final, RequiredAPI, Native, Public, HasOutParms, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ComponentClass                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UActorComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UActorComponent* UTaleQuestActorFunctionLibrary::GetComponentByClass(class AActor* Actor, class UClass* ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestActorFunctionLibrary.GetComponentByClass"));

	struct
	{
		class AActor*                  Actor;
		class UClass*                  ComponentClass;
		class UActorComponent*         ReturnValue;
	} params;

	params.Actor = Actor;
	params.ComponentClass = ComponentClass;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestActorFunctionLibrary.GetActorTransform
// (Final, RequiredAPI, Native, Static, Public, HasDefaults)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UTaleQuestActorFunctionLibrary::GetActorTransform(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestActorFunctionLibrary.GetActorTransform"));

	struct
	{
		class AActor*                  Actor;
		struct FTransform              ReturnValue;
	} params;

	params.Actor = Actor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestAnimationMontageFunctionLibrary.PushSetNextMontageSectionCommand
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class AClientCommandHandler*   CommandHandler                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   FromSectionName                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ToSectionName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestAnimationMontageFunctionLibrary::PushSetNextMontageSectionCommand(class AClientCommandHandler* CommandHandler, class AActor* TargetActor, class UAnimMontage* Montage, const struct FName& FromSectionName, const struct FName& ToSectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestAnimationMontageFunctionLibrary.PushSetNextMontageSectionCommand"));

	struct
	{
		class AClientCommandHandler*   CommandHandler;
		class AActor*                  TargetActor;
		class UAnimMontage*            Montage;
		struct FName                   FromSectionName;
		struct FName                   ToSectionName;
	} params;

	params.CommandHandler = CommandHandler;
	params.TargetActor = TargetActor;
	params.Montage = Montage;
	params.FromSectionName = FromSectionName;
	params.ToSectionName = ToSectionName;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestAnimationMontageFunctionLibrary.PushJumpToMontageSectionCommand
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class AClientCommandHandler*   CommandHandler                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SectionName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestAnimationMontageFunctionLibrary::PushJumpToMontageSectionCommand(class AClientCommandHandler* CommandHandler, class AActor* TargetActor, class UAnimMontage* Montage, const struct FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestAnimationMontageFunctionLibrary.PushJumpToMontageSectionCommand"));

	struct
	{
		class AClientCommandHandler*   CommandHandler;
		class AActor*                  TargetActor;
		class UAnimMontage*            Montage;
		struct FName                   SectionName;
		float                          ReturnValue;
	} params;

	params.CommandHandler = CommandHandler;
	params.TargetActor = TargetActor;
	params.Montage = Montage;
	params.SectionName = SectionName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestAnimationStepFunctionLibrary.MakePosseableSequence
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  ActorToPossess                 (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  TrackNameToPossess             (Parm, ZeroConstructor)
// struct FPossessableSequence    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPossessableSequence UTaleQuestAnimationStepFunctionLibrary::MakePosseableSequence(class AActor* ActorToPossess, const class FString& TrackNameToPossess)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestAnimationStepFunctionLibrary.MakePosseableSequence"));

	struct
	{
		class AActor*                  ActorToPossess;
		class FString                  TrackNameToPossess;
		struct FPossessableSequence    ReturnValue;
	} params;

	params.ActorToPossess = ActorToPossess;
	params.TrackNameToPossess = TrackNameToPossess;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestAudioFunctionLibrary.PlayOneShot
// (Final, Native, Public, Const)
// Parameters:
// TScriptInterface<class UMusicZoneInterface> MusicZone                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OneShotIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAudioFunctionLibrary::PlayOneShot(const TScriptInterface<class UMusicZoneInterface>& MusicZone, int OneShotIndex)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestAudioFunctionLibrary.PlayOneShot"));

	struct
	{
		TScriptInterface<class UMusicZoneInterface> MusicZone;
		int                            OneShotIndex;
	} params;

	params.MusicZone = MusicZone;
	params.OneShotIndex = OneShotIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestCharacterFunctionStepLibrary.EnableCharacterInput
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCharacterFunctionStepLibrary::EnableCharacterInput(class AActor* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCharacterFunctionStepLibrary.EnableCharacterInput"));

	struct
	{
		class AActor*                  Character;
	} params;

	params.Character = Character;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestCharacterFunctionStepLibrary.DisableCharacterInput
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCharacterFunctionStepLibrary::DisableCharacterInput(class AActor* Character)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCharacterFunctionStepLibrary.DisableCharacterInput"));

	struct
	{
		class AActor*                  Character;
	} params;

	params.Character = Character;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestClassFunctionLibrary.IsChildOf
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  BaseClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestClassFunctionLibrary::IsChildOf(class UClass* Class, class UClass* BaseClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestClassFunctionLibrary.IsChildOf"));

	struct
	{
		class UClass*                  Class;
		class UClass*                  BaseClass;
		bool                           ReturnValue;
	} params;

	params.Class = Class;
	params.BaseClass = BaseClass;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestClassFunctionLibrary.Equals_Class
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                  Left                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Right                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestClassFunctionLibrary::Equals_Class(class UClass* Left, class UClass* Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestClassFunctionLibrary.Equals_Class"));

	struct
	{
		class UClass*                  Left;
		class UClass*                  Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestClientCommandFunctionLibrary.PushStopMontageAnimationCommand
// (Final, Native, Public, Const)
// Parameters:
// class AClientCommandHandler*   CommandHandler                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestClientCommandFunctionLibrary::PushStopMontageAnimationCommand(class AClientCommandHandler* CommandHandler, class AActor* TargetActor, class UAnimMontage* Montage, float BlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestClientCommandFunctionLibrary.PushStopMontageAnimationCommand"));

	struct
	{
		class AClientCommandHandler*   CommandHandler;
		class AActor*                  TargetActor;
		class UAnimMontage*            Montage;
		float                          BlendOutTime;
	} params;

	params.CommandHandler = CommandHandler;
	params.TargetActor = TargetActor;
	params.Montage = Montage;
	params.BlendOutTime = BlendOutTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestClientCommandFunctionLibrary.PushPlayMontageAnimationCommand
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AClientCommandHandler*   CommandHandler                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestClientCommandFunctionLibrary::PushPlayMontageAnimationCommand(class AClientCommandHandler* CommandHandler, class AActor* TargetActor, class UAnimMontage* Montage, float PlayRate, float Position)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestClientCommandFunctionLibrary.PushPlayMontageAnimationCommand"));

	struct
	{
		class AClientCommandHandler*   CommandHandler;
		class AActor*                  TargetActor;
		class UAnimMontage*            Montage;
		float                          PlayRate;
		float                          Position;
		float                          ReturnValue;
	} params;

	params.CommandHandler = CommandHandler;
	params.TargetActor = TargetActor;
	params.Montage = Montage;
	params.PlayRate = PlayRate;
	params.Position = Position;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestClientCommandFunctionLibrary.CreateCommandHandler
// (Final, Native, Public, Const)
// Parameters:
// class AClientCommandHandler*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AClientCommandHandler* UTaleQuestClientCommandFunctionLibrary::CreateCommandHandler()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestClientCommandFunctionLibrary.CreateCommandHandler"));

	struct
	{
		class AClientCommandHandler*   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.TextToString
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UTaleQuestConversionFunctionLibrary::TextToString(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.TextToString"));

	struct
	{
		struct FText                   Text;
		class FString                  ReturnValue;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.TextToName
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UTaleQuestConversionFunctionLibrary::TextToName(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.TextToName"));

	struct
	{
		struct FText                   Text;
		struct FName                   ReturnValue;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.StringToText
// (Final, Native, Public, Const)
// Parameters:
// class FString                  String                         (Parm, ZeroConstructor)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTaleQuestConversionFunctionLibrary::StringToText(const class FString& String)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.StringToText"));

	struct
	{
		class FString                  String;
		struct FText                   ReturnValue;
	} params;

	params.String = String;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.StringToName
// (Final, Native, Public, Const)
// Parameters:
// class FString                  String                         (Parm, ZeroConstructor)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UTaleQuestConversionFunctionLibrary::StringToName(const class FString& String)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.StringToName"));

	struct
	{
		class FString                  String;
		struct FName                   ReturnValue;
	} params;

	params.String = String;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.NameToText
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTaleQuestConversionFunctionLibrary::NameToText(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.NameToText"));

	struct
	{
		struct FName                   Name;
		struct FText                   ReturnValue;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.NameToString
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UTaleQuestConversionFunctionLibrary::NameToString(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.NameToString"));

	struct
	{
		struct FName                   Name;
		class FString                  ReturnValue;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.IntToString
// (Final, Native, Public, Const)
// Parameters:
// int                            Int                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UTaleQuestConversionFunctionLibrary::IntToString(int Int)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.IntToString"));

	struct
	{
		int                            Int;
		class FString                  ReturnValue;
	} params;

	params.Int = Int;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.IntToFloat
// (Final, Native, Public, Const)
// Parameters:
// int                            Int                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestConversionFunctionLibrary::IntToFloat(int Int)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.IntToFloat"));

	struct
	{
		int                            Int;
		float                          ReturnValue;
	} params;

	params.Int = Int;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.FloatToString
// (Final, Native, Public, Const)
// Parameters:
// float                          Float                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UTaleQuestConversionFunctionLibrary::FloatToString(float Float)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.FloatToString"));

	struct
	{
		float                          Float;
		class FString                  ReturnValue;
	} params;

	params.Float = Float;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.FloatToInt
// (Final, Native, Public, Const)
// Parameters:
// float                          Float                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestConversionFunctionLibrary::FloatToInt(float Float)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.FloatToInt"));

	struct
	{
		float                          Float;
		int                            ReturnValue;
	} params;

	params.Float = Float;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestConversionFunctionLibrary.BoolToString
// (Final, Native, Public, Const)
// Parameters:
// bool                           Bool                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UTaleQuestConversionFunctionLibrary::BoolToString(bool Bool)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestConversionFunctionLibrary.BoolToString"));

	struct
	{
		bool                           Bool;
		class FString                  ReturnValue;
	} params;

	params.Bool = Bool;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestCoreFunctionLibrary.GetGameState
// (Final, Native, Public, Const)
// Parameters:
// class AGameState*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGameState* UTaleQuestCoreFunctionLibrary::GetGameState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCoreFunctionLibrary.GetGameState"));

	struct
	{
		class AGameState*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestCrewFunctionLibrary.AddCrewShipToCrew
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FGuid                   CrewId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AShip*                   Ship                           (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCrewFunctionLibrary::AddCrewShipToCrew(const struct FGuid& CrewId, class AShip* Ship)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCrewFunctionLibrary.AddCrewShipToCrew"));

	struct
	{
		struct FGuid                   CrewId;
		class AShip*                   Ship;
	} params;

	params.CrewId = CrewId;
	params.Ship = Ship;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestCurveFunctionLibrary.SampleCurve_Float
// (Final, Native, Public, Const)
// Parameters:
// class UCurveFloat*             Curve                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestCurveFunctionLibrary::SampleCurve_Float(class UCurveFloat* Curve, float Time)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCurveFunctionLibrary.SampleCurve_Float"));

	struct
	{
		class UCurveFloat*             Curve;
		float                          Time;
		float                          ReturnValue;
	} params;

	params.Curve = Curve;
	params.Time = Time;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestCutscenesFunctionLibrary.FireEventCutsceneTargetReady
// (Final, RequiredAPI, Native, Static, Public)
// Parameters:
// class AActor*                  TargetRetrievalActor           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCutscenesFunctionLibrary::FireEventCutsceneTargetReady(class AActor* TargetRetrievalActor, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCutscenesFunctionLibrary.FireEventCutsceneTargetReady"));

	struct
	{
		class AActor*                  TargetRetrievalActor;
		class AActor*                  TargetActor;
	} params;

	params.TargetRetrievalActor = TargetRetrievalActor;
	params.TargetActor = TargetActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestDeathFunctionLibrary.WaitForParticipantDeath
// (Final, Native, Public, HasOutParms)
// Parameters:
// class ACharacter*              DyingParticipant               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageInstance         FinalBlow                      (Parm, OutParm)
// TEnumAsByte<ECharacterDeathType> DeathType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTaleQuestDeathFunctionLibrary::WaitForParticipantDeath(class ACharacter** DyingParticipant, struct FDamageInstance* FinalBlow, TEnumAsByte<ECharacterDeathType>* DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestDeathFunctionLibrary.WaitForParticipantDeath"));

	struct
	{
		class ACharacter*              DyingParticipant;
		struct FDamageInstance         FinalBlow;
		TEnumAsByte<ECharacterDeathType> DeathType;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (DyingParticipant != nullptr)
		*DyingParticipant = params.DyingParticipant;
	if (FinalBlow != nullptr)
		*FinalBlow = params.FinalBlow;
	if (DeathType != nullptr)
		*DeathType = params.DeathType;
}


// Function Tales.TaleQuestDeathFunctionLibrary.Kill
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TScriptInterface<class UKillableCharacterInterface> KillableCharacter              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ECharacterDeathType> DeathType                      (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestDeathFunctionLibrary::Kill(const TScriptInterface<class UKillableCharacterInterface>& KillableCharacter, TEnumAsByte<ECharacterDeathType> DeathType)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestDeathFunctionLibrary.Kill"));

	struct
	{
		TScriptInterface<class UKillableCharacterInterface> KillableCharacter;
		TEnumAsByte<ECharacterDeathType> DeathType;
	} params;

	params.KillableCharacter = KillableCharacter;
	params.DeathType = DeathType;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestDialogueFunctionLibrary.WatchForNPCDialogueInteractionWithQueryableState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  DialogueActor                  (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              InteractingCharacter           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DataID                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTaleQuestDialogueFunctionLibrary::WatchForNPCDialogueInteractionWithQueryableState(class AActor* DialogueActor, class ACharacter** InteractingCharacter, class UClass** DataID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestDialogueFunctionLibrary.WatchForNPCDialogueInteractionWithQueryableState"));

	struct
	{
		class AActor*                  DialogueActor;
		class ACharacter*              InteractingCharacter;
		class UClass*                  DataID;
	} params;

	params.DialogueActor = DialogueActor;

	UObject::ProcessEvent(fn, &params);

	if (InteractingCharacter != nullptr)
		*InteractingCharacter = params.InteractingCharacter;
	if (DataID != nullptr)
		*DataID = params.DataID;
}


// Function Tales.TaleQuestDialogueFunctionLibrary.WatchForNPCDialogueInteraction
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  DialogueActor                  (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              InteractingCharacter           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   DialogueEvent                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTaleQuestDialogueFunctionLibrary::WatchForNPCDialogueInteraction(class AActor* DialogueActor, class ACharacter** InteractingCharacter, struct FName* DialogueEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestDialogueFunctionLibrary.WatchForNPCDialogueInteraction"));

	struct
	{
		class AActor*                  DialogueActor;
		class ACharacter*              InteractingCharacter;
		struct FName                   DialogueEvent;
	} params;

	params.DialogueActor = DialogueActor;

	UObject::ProcessEvent(fn, &params);

	if (InteractingCharacter != nullptr)
		*InteractingCharacter = params.InteractingCharacter;
	if (DialogueEvent != nullptr)
		*DialogueEvent = params.DialogueEvent;
}


// Function Tales.TaleQuestDialogueFunctionLibrary.WaitForNPCDialogueInteractionWithQueryableState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  DialogueActor                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ExpectedDataID                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              InteractingCharacter           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTaleQuestDialogueFunctionLibrary::WaitForNPCDialogueInteractionWithQueryableState(class AActor* DialogueActor, class UClass* ExpectedDataID, class ACharacter** InteractingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestDialogueFunctionLibrary.WaitForNPCDialogueInteractionWithQueryableState"));

	struct
	{
		class AActor*                  DialogueActor;
		class UClass*                  ExpectedDataID;
		class ACharacter*              InteractingCharacter;
	} params;

	params.DialogueActor = DialogueActor;
	params.ExpectedDataID = ExpectedDataID;

	UObject::ProcessEvent(fn, &params);

	if (InteractingCharacter != nullptr)
		*InteractingCharacter = params.InteractingCharacter;
}


// Function Tales.TaleQuestDialogueFunctionLibrary.SetDialogueInteractionPrompt
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class AClientCommandHandler*   CommandHandler                 (Parm, ZeroConstructor, IsPlainOldData)
// class UNPCDialogComponent*     DialogueComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   Prompt                         (ConstParm, Parm, OutParm, ReferenceParm)

void UTaleQuestDialogueFunctionLibrary::SetDialogueInteractionPrompt(class AClientCommandHandler* CommandHandler, class UNPCDialogComponent* DialogueComponent, const struct FText& Prompt)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestDialogueFunctionLibrary.SetDialogueInteractionPrompt"));

	struct
	{
		class AClientCommandHandler*   CommandHandler;
		class UNPCDialogComponent*     DialogueComponent;
		struct FText                   Prompt;
	} params;

	params.CommandHandler = CommandHandler;
	params.DialogueComponent = DialogueComponent;
	params.Prompt = Prompt;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestDialogueFunctionLibrary.SetDialogueInteractionEnabled
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class UNPCDialogComponentInterface> DialogueComponent              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestDialogueFunctionLibrary::SetDialogueInteractionEnabled(const TScriptInterface<class UNPCDialogComponentInterface>& DialogueComponent, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestDialogueFunctionLibrary.SetDialogueInteractionEnabled"));

	struct
	{
		TScriptInterface<class UNPCDialogComponentInterface> DialogueComponent;
		bool                           Enabled;
	} params;

	params.DialogueComponent = DialogueComponent;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestEmoteFunctionLibrary.PushIntoEmoteActionState
// (Final, Native, Public, Const)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UEmoteInfo*              EmoteInfo                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForcedEmote                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestEmoteFunctionLibrary::PushIntoEmoteActionState(class AActor* Target, class UEmoteInfo* EmoteInfo, bool ForcedEmote)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestEmoteFunctionLibrary.PushIntoEmoteActionState"));

	struct
	{
		class AActor*                  Target;
		class UEmoteInfo*              EmoteInfo;
		bool                           ForcedEmote;
	} params;

	params.Target = Target;
	params.EmoteInfo = EmoteInfo;
	params.ForcedEmote = ForcedEmote;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.Subtract_Float
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestFloatMathsFunctionLibrary::Subtract_Float(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.Subtract_Float"));

	struct
	{
		float                          Left;
		float                          Right;
		float                          ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.RandRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Min                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestFloatMathsFunctionLibrary::RandRange(float Min, float Max)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.RandRange"));

	struct
	{
		float                          Min;
		float                          Max;
		float                          ReturnValue;
	} params;

	params.Min = Min;
	params.Max = Max;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.NotEquals_Float
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestFloatMathsFunctionLibrary::NotEquals_Float(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.NotEquals_Float"));

	struct
	{
		float                          Left;
		float                          Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.Multiply_Float
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestFloatMathsFunctionLibrary::Multiply_Float(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.Multiply_Float"));

	struct
	{
		float                          Left;
		float                          Right;
		float                          ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.Modulus_Float
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Reminder                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestFloatMathsFunctionLibrary::Modulus_Float(float Left, float Right, float* Reminder)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.Modulus_Float"));

	struct
	{
		float                          Left;
		float                          Right;
		float                          Reminder;
		float                          ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	if (Reminder != nullptr)
		*Reminder = params.Reminder;

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.LessThanOrEqual_Float
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestFloatMathsFunctionLibrary::LessThanOrEqual_Float(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.LessThanOrEqual_Float"));

	struct
	{
		float                          Left;
		float                          Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.LessThan
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestFloatMathsFunctionLibrary::LessThan(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.LessThan"));

	struct
	{
		float                          Left;
		float                          Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.GreaterThanOrEqual_Float
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestFloatMathsFunctionLibrary::GreaterThanOrEqual_Float(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.GreaterThanOrEqual_Float"));

	struct
	{
		float                          Left;
		float                          Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.GreaterThan
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestFloatMathsFunctionLibrary::GreaterThan(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.GreaterThan"));

	struct
	{
		float                          Left;
		float                          Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.Equals_Float
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestFloatMathsFunctionLibrary::Equals_Float(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.Equals_Float"));

	struct
	{
		float                          Left;
		float                          Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.Divide_Float
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestFloatMathsFunctionLibrary::Divide_Float(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.Divide_Float"));

	struct
	{
		float                          Left;
		float                          Right;
		float                          ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestFloatMathsFunctionLibrary.Add_Float
// (Final, Native, Public, Const)
// Parameters:
// float                          Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestFloatMathsFunctionLibrary::Add_Float(float Left, float Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestFloatMathsFunctionLibrary.Add_Float"));

	struct
	{
		float                          Left;
		float                          Right;
		float                          ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestHealthFunctionStepLibrary.SetMaxHealth
// (Final, Native, Public, Const)
// Parameters:
// TScriptInterface<class UHealthInterface> HealthInterface                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestHealthFunctionStepLibrary::SetMaxHealth(const TScriptInterface<class UHealthInterface>& HealthInterface, float Health)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestHealthFunctionStepLibrary.SetMaxHealth"));

	struct
	{
		TScriptInterface<class UHealthInterface> HealthInterface;
		float                          Health;
	} params;

	params.HealthInterface = HealthInterface;
	params.Health = Health;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestHealthFunctionStepLibrary.SetHealthChangeEnabled
// (Final, Native, Public, Const)
// Parameters:
// TScriptInterface<class UHealthInterface> HealthInterface                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestHealthFunctionStepLibrary::SetHealthChangeEnabled(const TScriptInterface<class UHealthInterface>& HealthInterface, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestHealthFunctionStepLibrary.SetHealthChangeEnabled"));

	struct
	{
		TScriptInterface<class UHealthInterface> HealthInterface;
		bool                           Enabled;
	} params;

	params.HealthInterface = HealthInterface;
	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestHealthFunctionStepLibrary.SetHealth
// (Final, Native, Static, Public)
// Parameters:
// TScriptInterface<class UHealthInterface> HealthInterface                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHealthChangedReason> Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestHealthFunctionStepLibrary::SetHealth(const TScriptInterface<class UHealthInterface>& HealthInterface, float Health, TEnumAsByte<EHealthChangedReason> Reason)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestHealthFunctionStepLibrary.SetHealth"));

	struct
	{
		TScriptInterface<class UHealthInterface> HealthInterface;
		float                          Health;
		TEnumAsByte<EHealthChangedReason> Reason;
	} params;

	params.HealthInterface = HealthInterface;
	params.Health = Health;
	params.Reason = Reason;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestHealthFunctionStepLibrary.ResetToMaxHealth
// (Final, Native, Public, Const)
// Parameters:
// TScriptInterface<class UHealthInterface> HealthInterface                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestHealthFunctionStepLibrary::ResetToMaxHealth(const TScriptInterface<class UHealthInterface>& HealthInterface)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestHealthFunctionStepLibrary.ResetToMaxHealth"));

	struct
	{
		TScriptInterface<class UHealthInterface> HealthInterface;
	} params;

	params.HealthInterface = HealthInterface;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestHealthFunctionStepLibrary.GetMaxHealth
// (Final, Native, Public, Const)
// Parameters:
// TScriptInterface<class UHealthInterface> HealthInterface                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestHealthFunctionStepLibrary::GetMaxHealth(const TScriptInterface<class UHealthInterface>& HealthInterface)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestHealthFunctionStepLibrary.GetMaxHealth"));

	struct
	{
		TScriptInterface<class UHealthInterface> HealthInterface;
		float                          ReturnValue;
	} params;

	params.HealthInterface = HealthInterface;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestHealthFunctionStepLibrary.GetHealth
// (Final, Native, Static, Public)
// Parameters:
// TScriptInterface<class UHealthInterface> HealthInterface                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestHealthFunctionStepLibrary::GetHealth(const TScriptInterface<class UHealthInterface>& HealthInterface)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestHealthFunctionStepLibrary.GetHealth"));

	struct
	{
		TScriptInterface<class UHealthInterface> HealthInterface;
		float                          ReturnValue;
	} params;

	params.HealthInterface = HealthInterface;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.Subtract_Int
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestIntMathsFunctionLibrary::Subtract_Int(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.Subtract_Int"));

	struct
	{
		int                            Left;
		int                            Right;
		int                            ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.NotEquals
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestIntMathsFunctionLibrary::NotEquals(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.NotEquals"));

	struct
	{
		int                            Left;
		int                            Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.Multiply_Int
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestIntMathsFunctionLibrary::Multiply_Int(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.Multiply_Int"));

	struct
	{
		int                            Left;
		int                            Right;
		int                            ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.Modulus_Int
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestIntMathsFunctionLibrary::Modulus_Int(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.Modulus_Int"));

	struct
	{
		int                            Left;
		int                            Right;
		int                            ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.LessThanOrEqual
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestIntMathsFunctionLibrary::LessThanOrEqual(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.LessThanOrEqual"));

	struct
	{
		int                            Left;
		int                            Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.LessThan
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestIntMathsFunctionLibrary::LessThan(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.LessThan"));

	struct
	{
		int                            Left;
		int                            Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.Increment_Int
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestIntMathsFunctionLibrary::Increment_Int(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.Increment_Int"));

	struct
	{
		int                            Value;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThanOrEqual
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestIntMathsFunctionLibrary::GreaterThanOrEqual(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThanOrEqual"));

	struct
	{
		int                            Left;
		int                            Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThan
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestIntMathsFunctionLibrary::GreaterThan(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.GreaterThan"));

	struct
	{
		int                            Left;
		int                            Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.Equals
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestIntMathsFunctionLibrary::Equals(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.Equals"));

	struct
	{
		int                            Left;
		int                            Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.Divide_Int
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestIntMathsFunctionLibrary::Divide_Int(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.Divide_Int"));

	struct
	{
		int                            Left;
		int                            Right;
		int                            ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.Decrement_Int
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            Value                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestIntMathsFunctionLibrary::Decrement_Int(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.Decrement_Int"));

	struct
	{
		int                            Value;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Tales.TaleQuestIntMathsFunctionLibrary.Add_Int
// (Final, Native, Static, Public)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestIntMathsFunctionLibrary::Add_Int(int Left, int Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestIntMathsFunctionLibrary.Add_Int"));

	struct
	{
		int                            Left;
		int                            Right;
		int                            ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestItemFunctionLibrary.WaitForItemHandIn
// (Final, Native, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UNPCCustomItemPurchaseInterface> NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UVoyageParticipantInterface> HandInParticipant              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTaleQuestItemFunctionLibrary::WaitForItemHandIn(const TScriptInterface<class UNPCCustomItemPurchaseInterface>& NPC, class UClass* Item, TScriptInterface<class UVoyageParticipantInterface>* HandInParticipant)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestItemFunctionLibrary.WaitForItemHandIn"));

	struct
	{
		TScriptInterface<class UNPCCustomItemPurchaseInterface> NPC;
		class UClass*                  Item;
		TScriptInterface<class UVoyageParticipantInterface> HandInParticipant;
	} params;

	params.NPC = NPC;
	params.Item = Item;

	UObject::ProcessEvent(fn, &params);

	if (HandInParticipant != nullptr)
		*HandInParticipant = params.HandInParticipant;
}


// Function Tales.TaleQuestItemFunctionLibrary.SpawnAndWieldItem
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  Wielder                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TrackItem                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MarkItemAsCritical             (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CritialItemLostMessage         (ConstParm, Parm, OutParm, ReferenceParm)
// class AItemInfo*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AItemInfo* UTaleQuestItemFunctionLibrary::SpawnAndWieldItem(class AActor* Wielder, class UClass* Item, bool TrackItem, bool MarkItemAsCritical, const struct FText& CritialItemLostMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestItemFunctionLibrary.SpawnAndWieldItem"));

	struct
	{
		class AActor*                  Wielder;
		class UClass*                  Item;
		bool                           TrackItem;
		bool                           MarkItemAsCritical;
		struct FText                   CritialItemLostMessage;
		class AItemInfo*               ReturnValue;
	} params;

	params.Wielder = Wielder;
	params.Item = Item;
	params.TrackItem = TrackItem;
	params.MarkItemAsCritical = MarkItemAsCritical;
	params.CritialItemLostMessage = CritialItemLostMessage;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestLogicFunctionLibrary.Logic_XOr
// (Final, Native, Static, Public)
// Parameters:
// bool                           Left                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestLogicFunctionLibrary::Logic_XOr(bool Left, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestLogicFunctionLibrary.Logic_XOr"));

	struct
	{
		bool                           Left;
		bool                           Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestLogicFunctionLibrary.Logic_Or
// (Final, Native, Static, Public)
// Parameters:
// bool                           Left                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestLogicFunctionLibrary::Logic_Or(bool Left, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestLogicFunctionLibrary.Logic_Or"));

	struct
	{
		bool                           Left;
		bool                           Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestLogicFunctionLibrary.Logic_Not
// (Final, Native, Static, Public)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestLogicFunctionLibrary::Logic_Not(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestLogicFunctionLibrary.Logic_Not"));

	struct
	{
		bool                           Value;
		bool                           ReturnValue;
	} params;

	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestLogicFunctionLibrary.Logic_And
// (Final, Native, Static, Public)
// Parameters:
// bool                           Left                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Right                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestLogicFunctionLibrary::Logic_And(bool Left, bool Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestLogicFunctionLibrary.Logic_And"));

	struct
	{
		bool                           Left;
		bool                           Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestModifyPagesFunctionLibrary.ReplacePages
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<class UQuestBookPageBundle*> Pages                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UQuestBookPageBundle*> PagesToReplace                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTaleQuestModifyPagesFunctionLibrary::ReplacePages(TArray<class UQuestBookPageBundle*> Pages, TArray<class UQuestBookPageBundle*> PagesToReplace)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestModifyPagesFunctionLibrary.ReplacePages"));

	struct
	{
		TArray<class UQuestBookPageBundle*> Pages;
		TArray<class UQuestBookPageBundle*> PagesToReplace;
	} params;

	params.Pages = Pages;
	params.PagesToReplace = PagesToReplace;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestModifyPagesFunctionLibrary.ModifyPagesAtIndex
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<class UQuestBookPageBundle*> Pages                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            BookPageIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EModifyAtIndexType> ModifyTypeEnum                 (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestModifyPagesFunctionLibrary::ModifyPagesAtIndex(TArray<class UQuestBookPageBundle*> Pages, int BookPageIndex, TEnumAsByte<EModifyAtIndexType> ModifyTypeEnum)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestModifyPagesFunctionLibrary.ModifyPagesAtIndex"));

	struct
	{
		TArray<class UQuestBookPageBundle*> Pages;
		int                            BookPageIndex;
		TEnumAsByte<EModifyAtIndexType> ModifyTypeEnum;
	} params;

	params.Pages = Pages;
	params.BookPageIndex = BookPageIndex;
	params.ModifyTypeEnum = ModifyTypeEnum;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestNamedPointsFunctionLibrary.GetNamedPointsFromGroup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TAssetPtr<class AActor>        PointsContainer                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   GroupName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ESpaceType>        ReturnSpace                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FOrientedPoint>  Points                         (Parm, OutParm, ZeroConstructor)

void UTaleQuestNamedPointsFunctionLibrary::GetNamedPointsFromGroup(TAssetPtr<class AActor> PointsContainer, const struct FName& GroupName, TEnumAsByte<ESpaceType> ReturnSpace, TArray<struct FOrientedPoint>* Points)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestNamedPointsFunctionLibrary.GetNamedPointsFromGroup"));

	struct
	{
		TAssetPtr<class AActor>        PointsContainer;
		struct FName                   GroupName;
		TEnumAsByte<ESpaceType>        ReturnSpace;
		TArray<struct FOrientedPoint>  Points;
	} params;

	params.PointsContainer = PointsContainer;
	params.GroupName = GroupName;
	params.ReturnSpace = ReturnSpace;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Points != nullptr)
		*Points = params.Points;
}


// Function Tales.TaleQuestNameFunctionLibrary.IsNone
// (Final, Native, Static, Public)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestNameFunctionLibrary::IsNone(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestNameFunctionLibrary.IsNone"));

	struct
	{
		struct FName                   Name;
		bool                           ReturnValue;
	} params;

	params.Name = Name;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestNameFunctionLibrary.Equals
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FName                   Left                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Right                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestNameFunctionLibrary::Equals(const struct FName& Left, const struct FName& Right)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestNameFunctionLibrary.Equals"));

	struct
	{
		struct FName                   Left;
		struct FName                   Right;
		bool                           ReturnValue;
	} params;

	params.Left = Left;
	params.Right = Right;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestNPCHideFunctionLibrary.FadeOut
// (Final, Native, Public)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestNPCHideFunctionLibrary::FadeOut(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestNPCHideFunctionLibrary.FadeOut"));

	struct
	{
		class AActor*                  InActor;
	} params;

	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestNPCHideFunctionLibrary.FadeIn
// (Final, Native, Public)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestNPCHideFunctionLibrary::FadeIn(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestNPCHideFunctionLibrary.FadeIn"));

	struct
	{
		class AActor*                  InActor;
	} params;

	params.InActor = InActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestOfferingNPCFunctionLibrary.OfferItemAndWaitForPickup
// (Final, Native, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UOfferingNPCInterface> OfferingNPC                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemToShow                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ItemToOffer                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   PickupItemTooltip              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   CannotPickupItemTooltip        (ConstParm, Parm, OutParm, ReferenceParm)

void UTaleQuestOfferingNPCFunctionLibrary::OfferItemAndWaitForPickup(const TScriptInterface<class UOfferingNPCInterface>& OfferingNPC, class UClass* ItemToShow, class UClass* ItemToOffer, const struct FText& PickupItemTooltip, const struct FText& CannotPickupItemTooltip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestOfferingNPCFunctionLibrary.OfferItemAndWaitForPickup"));

	struct
	{
		TScriptInterface<class UOfferingNPCInterface> OfferingNPC;
		class UClass*                  ItemToShow;
		class UClass*                  ItemToOffer;
		struct FText                   PickupItemTooltip;
		struct FText                   CannotPickupItemTooltip;
	} params;

	params.OfferingNPC = OfferingNPC;
	params.ItemToShow = ItemToShow;
	params.ItemToOffer = ItemToOffer;
	params.PickupItemTooltip = PickupItemTooltip;
	params.CannotPickupItemTooltip = CannotPickupItemTooltip;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestParticipantFunctionLibrary.GetParticipants
// (Final, Native, Public, Const)
// Parameters:
// TArray<TScriptInterface<class UVoyageParticipantInterface>> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<TScriptInterface<class UVoyageParticipantInterface>> UTaleQuestParticipantFunctionLibrary::GetParticipants()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestParticipantFunctionLibrary.GetParticipants"));

	struct
	{
		TArray<TScriptInterface<class UVoyageParticipantInterface>> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestParticipantFunctionLibrary.GetParticipantCharacter
// (Final, Native, Public, Const)
// Parameters:
// TScriptInterface<class UVoyageParticipantInterface> Participant                    (Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACharacter* UTaleQuestParticipantFunctionLibrary::GetParticipantCharacter(const TScriptInterface<class UVoyageParticipantInterface>& Participant)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestParticipantFunctionLibrary.GetParticipantCharacter"));

	struct
	{
		TScriptInterface<class UVoyageParticipantInterface> Participant;
		class ACharacter*              ReturnValue;
	} params;

	params.Participant = Participant;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestQueryableStateAddToIntFunctionLibrary.AddToIntQueryableState
// (Final, Native, Public)
// Parameters:
// class UClass*                  DataID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            DataToAdd                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestQueryableStateAddToIntFunctionLibrary::AddToIntQueryableState(class UClass* DataID, int DataToAdd)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestQueryableStateAddToIntFunctionLibrary.AddToIntQueryableState"));

	struct
	{
		class UClass*                  DataID;
		int                            DataToAdd;
	} params;

	params.DataID = DataID;
	params.DataToAdd = DataToAdd;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestQueryableStateReadBoolFunctionLibrary.ReadBoolQueryableState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  DataID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DataValue                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestQueryableStateReadBoolFunctionLibrary::ReadBoolQueryableState(class UClass* DataID, bool* DataValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestQueryableStateReadBoolFunctionLibrary.ReadBoolQueryableState"));

	struct
	{
		class UClass*                  DataID;
		bool                           DataValue;
		bool                           ReturnValue;
	} params;

	params.DataID = DataID;

	UObject::ProcessEvent(fn, &params);

	if (DataValue != nullptr)
		*DataValue = params.DataValue;

	return params.ReturnValue;
}


// Function Tales.TaleQuestQueryableStateReadIntFunctionLibrary.ReadIntQueryableState
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  DataID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            DataValue                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestQueryableStateReadIntFunctionLibrary::ReadIntQueryableState(class UClass* DataID, int* DataValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestQueryableStateReadIntFunctionLibrary.ReadIntQueryableState"));

	struct
	{
		class UClass*                  DataID;
		int                            DataValue;
		bool                           ReturnValue;
	} params;

	params.DataID = DataID;

	UObject::ProcessEvent(fn, &params);

	if (DataValue != nullptr)
		*DataValue = params.DataValue;

	return params.ReturnValue;
}


// Function Tales.TaleQuestQueryableStateWriteBoolFunctionLibrary.WriteBoolQueryableState
// (Final, Native, Public)
// Parameters:
// class UClass*                  DataID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DataValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestQueryableStateWriteBoolFunctionLibrary::WriteBoolQueryableState(class UClass* DataID, bool DataValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestQueryableStateWriteBoolFunctionLibrary.WriteBoolQueryableState"));

	struct
	{
		class UClass*                  DataID;
		bool                           DataValue;
	} params;

	params.DataID = DataID;
	params.DataValue = DataValue;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestQueryableStateWriteIntFunctionLibrary.WriteIntQueryableState
// (Final, Native, Public)
// Parameters:
// class UClass*                  DataID                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            DataValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestQueryableStateWriteIntFunctionLibrary::WriteIntQueryableState(class UClass* DataID, int DataValue)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestQueryableStateWriteIntFunctionLibrary.WriteIntQueryableState"));

	struct
	{
		class UClass*                  DataID;
		int                            DataValue;
	} params;

	params.DataID = DataID;
	params.DataValue = DataValue;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestShantyFunctionLibrary.StopShantyMusic
// (Final, Native, Public, Const)
// Parameters:
// class AShantyPlayer*           InShantyPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestShantyFunctionLibrary::StopShantyMusic(class AShantyPlayer* InShantyPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestShantyFunctionLibrary.StopShantyMusic"));

	struct
	{
		class AShantyPlayer*           InShantyPlayer;
	} params;

	params.InShantyPlayer = InShantyPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestShantyFunctionLibrary.StartShantyMusic
// (Final, Native, Public, Const)
// Parameters:
// class AShantyPlayer*           InShantyPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestShantyFunctionLibrary::StartShantyMusic(class AShantyPlayer* InShantyPlayer)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestShantyFunctionLibrary.StartShantyMusic"));

	struct
	{
		class AShantyPlayer*           InShantyPlayer;
	} params;

	params.InShantyPlayer = InShantyPlayer;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestSpawnShipFunctionLibrary.SpawnShipFromClass
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// TAssetPtr<class UClass>        ShipClassToSpawn               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ShipSpawnTransform             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  ShipSize                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ShipType                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  ShipCategory                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AShip*                   SpawnedShip                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTaleQuestSpawnShipFunctionLibrary::SpawnShipFromClass(TAssetPtr<class UClass> ShipClassToSpawn, const struct FTransform& ShipSpawnTransform, class UClass* ShipSize, class UClass* ShipType, class UClass* ShipCategory, class AShip** SpawnedShip)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestSpawnShipFunctionLibrary.SpawnShipFromClass"));

	struct
	{
		TAssetPtr<class UClass>        ShipClassToSpawn;
		struct FTransform              ShipSpawnTransform;
		class UClass*                  ShipSize;
		class UClass*                  ShipType;
		class UClass*                  ShipCategory;
		class AShip*                   SpawnedShip;
	} params;

	params.ShipClassToSpawn = ShipClassToSpawn;
	params.ShipSpawnTransform = ShipSpawnTransform;
	params.ShipSize = ShipSize;
	params.ShipType = ShipType;
	params.ShipCategory = ShipCategory;

	UObject::ProcessEvent(fn, &params);

	if (SpawnedShip != nullptr)
		*SpawnedShip = params.SpawnedShip;
}


// Function Tales.TaleQuestStoryFunctionLibrary.WaitForStory
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FName                   StoryName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ShouldBeActive                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestStoryFunctionLibrary::WaitForStory(const struct FName& StoryName, bool ShouldBeActive)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestStoryFunctionLibrary.WaitForStory"));

	struct
	{
		struct FName                   StoryName;
		bool                           ShouldBeActive;
	} params;

	params.StoryName = StoryName;
	params.ShouldBeActive = ShouldBeActive;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestStoryFunctionLibrary.IsStoryActive
// (Final, RequiredAPI, Native, Public, HasOutParms, Const)
// Parameters:
// struct FName                   StoryName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestStoryFunctionLibrary::IsStoryActive(const struct FName& StoryName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestStoryFunctionLibrary.IsStoryActive"));

	struct
	{
		struct FName                   StoryName;
		bool                           ReturnValue;
	} params;

	params.StoryName = StoryName;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestStoryBranchFunctionLibrary.BranchOnStory
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName                   StoryName                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestStoryBranchFunctionLibrary::BranchOnStory(const struct FName& StoryName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestStoryBranchFunctionLibrary.BranchOnStory"));

	struct
	{
		struct FName                   StoryName;
	} params;

	params.StoryName = StoryName;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestTransformMathsFunctionLibrary.ToWorld_Transform
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTransform              RootTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              RelativeTransform              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UTaleQuestTransformMathsFunctionLibrary::ToWorld_Transform(const struct FTransform& RootTransform, const struct FTransform& RelativeTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestTransformMathsFunctionLibrary.ToWorld_Transform"));

	struct
	{
		struct FTransform              RootTransform;
		struct FTransform              RelativeTransform;
		struct FTransform              ReturnValue;
	} params;

	params.RootTransform = RootTransform;
	params.RelativeTransform = RelativeTransform;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestTransfromConversionFunctionLibrary.ToVector
// (Final, Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FTransform              InTransform                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UTaleQuestTransfromConversionFunctionLibrary::ToVector(const struct FTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestTransfromConversionFunctionLibrary.ToVector"));

	struct
	{
		struct FTransform              InTransform;
		struct FVector                 ReturnValue;
	} params;

	params.InTransform = InTransform;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 InTranslation                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UTaleQuestTransfromConversionFunctionLibrary::FromVector(const struct FVector& InTranslation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromVector"));

	struct
	{
		struct FVector                 InTranslation;
		struct FTransform              ReturnValue;
	} params;

	params.InTranslation = InTranslation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromOrientedPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FOrientedPoint          InOrientedPoint                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UTaleQuestTransfromConversionFunctionLibrary::FromOrientedPoint(const struct FOrientedPoint& InOrientedPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestTransfromConversionFunctionLibrary.FromOrientedPoint"));

	struct
	{
		struct FOrientedPoint          InOrientedPoint;
		struct FTransform              ReturnValue;
	} params;

	params.InOrientedPoint = InOrientedPoint;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestUObjectFunctionLibrary.IsValid
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestUObjectFunctionLibrary::IsValid(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestUObjectFunctionLibrary.IsValid"));

	struct
	{
		class UObject*                 Object;
		bool                           ReturnValue;
	} params;

	params.Object = Object;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestUtilityFunctionLibrary.FailTale
// (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   FailureMessage                 (ConstParm, Parm, OutParm, ReferenceParm)

void UTaleQuestUtilityFunctionLibrary::FailTale(const struct FText& FailureMessage)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestUtilityFunctionLibrary.FailTale"));

	struct
	{
		struct FText                   FailureMessage;
	} params;

	params.FailureMessage = FailureMessage;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestValueFunctionLibrary.Make_Text
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FText                   Value                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UTaleQuestValueFunctionLibrary::Make_Text(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestValueFunctionLibrary.Make_Text"));

	struct
	{
		struct FText                   Value;
		struct FText                   ReturnValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestValueFunctionLibrary.Make_String
// (Final, Native, Public, Const)
// Parameters:
// class FString                  Value                          (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UTaleQuestValueFunctionLibrary::Make_String(const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestValueFunctionLibrary.Make_String"));

	struct
	{
		class FString                  Value;
		class FString                  ReturnValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestValueFunctionLibrary.Make_Name
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FName                   Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UTaleQuestValueFunctionLibrary::Make_Name(const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestValueFunctionLibrary.Make_Name"));

	struct
	{
		struct FName                   Value;
		struct FName                   ReturnValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestValueFunctionLibrary.Make_Int32
// (Final, Native, Public, Const)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestValueFunctionLibrary::Make_Int32(int Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestValueFunctionLibrary.Make_Int32"));

	struct
	{
		int                            Value;
		int                            ReturnValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestValueFunctionLibrary.Make_Float
// (Final, Native, Public, Const)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestValueFunctionLibrary::Make_Float(float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestValueFunctionLibrary.Make_Float"));

	struct
	{
		float                          Value;
		float                          ReturnValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestValueFunctionLibrary.Make_Bool
// (Final, Native, Public, Const)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestValueFunctionLibrary::Make_Bool(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestValueFunctionLibrary.Make_Bool"));

	struct
	{
		bool                           Value;
		bool                           ReturnValue;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestValueFunctionLibrary.Append_String
// (Final, Native, Public, Const)
// Parameters:
// class FString                  Prefix                         (ConstParm, Parm, ZeroConstructor)
// class FString                  Value                          (Parm, ZeroConstructor)
// class FString                  Suffix                         (ConstParm, Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UTaleQuestValueFunctionLibrary::Append_String(const class FString& Prefix, const class FString& Value, const class FString& Suffix)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestValueFunctionLibrary.Append_String"));

	struct
	{
		class FString                  Prefix;
		class FString                  Value;
		class FString                  Suffix;
		class FString                  ReturnValue;
	} params;

	params.Prefix = Prefix;
	params.Value = Value;
	params.Suffix = Suffix;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestVectorMathsFunctionLibrary.DistanceSquared
// (Final, Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 To                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestVectorMathsFunctionLibrary::DistanceSquared(const struct FVector& From, const struct FVector& To)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestVectorMathsFunctionLibrary.DistanceSquared"));

	struct
	{
		struct FVector                 From;
		struct FVector                 To;
		float                          ReturnValue;
	} params;

	params.From = From;
	params.To = To;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestVectorMathsFunctionLibrary.Distance
// (Final, Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 From                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 To                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTaleQuestVectorMathsFunctionLibrary::Distance(const struct FVector& From, const struct FVector& To)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestVectorMathsFunctionLibrary.Distance"));

	struct
	{
		struct FVector                 From;
		struct FVector                 To;
		float                          ReturnValue;
	} params;

	params.From = From;
	params.To = To;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestWaterVolumeFunctionLibrary.SetExactWaterLevel
// (Final, Native, Public)
// Parameters:
// class AWaterVolume*            WaterVolume                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          WaterLevel                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestWaterVolumeFunctionLibrary::SetExactWaterLevel(class AWaterVolume* WaterVolume, float WaterLevel)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestWaterVolumeFunctionLibrary.SetExactWaterLevel"));

	struct
	{
		class AWaterVolume*            WaterVolume;
		float                          WaterLevel;
	} params;

	params.WaterVolume = WaterVolume;
	params.WaterLevel = WaterLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestWaterVolumeFunctionLibrary.IsWaterVolumeFull
// (Final, Native, Public)
// Parameters:
// class AWaterVolume*            WaterVolume                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTaleQuestWaterVolumeFunctionLibrary::IsWaterVolumeFull(class AWaterVolume* WaterVolume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestWaterVolumeFunctionLibrary.IsWaterVolumeFull"));

	struct
	{
		class AWaterVolume*            WaterVolume;
		bool                           ReturnValue;
	} params;

	params.WaterVolume = WaterVolume;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Tales.TaleQuestWaterVolumeFunctionLibrary.EmptyWaterVolume
// (Final, Native, Public)
// Parameters:
// class AWaterVolume*            WaterVolume                    (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestWaterVolumeFunctionLibrary::EmptyWaterVolume(class AWaterVolume* WaterVolume)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestWaterVolumeFunctionLibrary.EmptyWaterVolume"));

	struct
	{
		class AWaterVolume*            WaterVolume;
	} params;

	params.WaterVolume = WaterVolume;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestWaterVolumeFunctionLibrary.AddWaterAmount
// (Final, Native, Public)
// Parameters:
// class AWaterVolume*            WaterVolume                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          AmountToAdd                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          LerpRate                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestWaterVolumeFunctionLibrary::AddWaterAmount(class AWaterVolume* WaterVolume, float AmountToAdd, float LerpRate)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestWaterVolumeFunctionLibrary.AddWaterAmount"));

	struct
	{
		class AWaterVolume*            WaterVolume;
		float                          AmountToAdd;
		float                          LerpRate;
	} params;

	params.WaterVolume = WaterVolume;
	params.AmountToAdd = AmountToAdd;
	params.LerpRate = LerpRate;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestMapService.UpdateMerchantMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTaleQuestDeliverableItem Deliverable                    (Parm)

void UTaleQuestMapService::UpdateMerchantMap(const struct FName& MapId, int Index, const struct FTaleQuestDeliverableItem& Deliverable)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMapService.UpdateMerchantMap"));

	struct
	{
		struct FName                   MapId;
		int                            Index;
		struct FTaleQuestDeliverableItem Deliverable;
	} params;

	params.MapId = MapId;
	params.Index = Index;
	params.Deliverable = Deliverable;

	UObject::ProcessEvent(fn, &params);
}


// Function Tales.TaleQuestMapService.AdvanceRiddleMap
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   MapId                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestMapService::AdvanceRiddleMap(const struct FName& MapId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestMapService.AdvanceRiddleMap"));

	struct
	{
		struct FName                   MapId;
	} params;

	params.MapId = MapId;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
