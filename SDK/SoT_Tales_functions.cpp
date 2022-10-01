// Sea of Thieves (2.6.2) SDK

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
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UTaleQuestCargoRunContractsService::AddContract(TArray<class UClass*> InItems, class AActor* InCollectFromNPC, class AActor* InDeliverToNPC, int InTimeLimitInMinutes)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function Tales.TaleQuestCargoRunContractsService.AddContract"));

	struct
	{
		TArray<class UClass*>          InItems;
		class AActor*                  InCollectFromNPC;
		class AActor*                  InDeliverToNPC;
		int                            InTimeLimitInMinutes;
		struct FGuid                   ReturnValue;
	} params;

	params.InItems = InItems;
	params.InCollectFromNPC = InCollectFromNPC;
	params.InDeliverToNPC = InDeliverToNPC;
	params.InTimeLimitInMinutes = InTimeLimitInMinutes;

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
