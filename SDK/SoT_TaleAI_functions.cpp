// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleAI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TaleAI.TaleAIRegionFunctionLibrary.CreateCustomRegion
// (Final, Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
// struct FVector                 RegionCentre                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          RegionRadius                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTaleAICustomRegion*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTaleAICustomRegion* UTaleAIRegionFunctionLibrary::CreateCustomRegion(const struct FVector& RegionCentre, float RegionRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleAIRegionFunctionLibrary.CreateCustomRegion"));

	struct
	{
		struct FVector                 RegionCentre;
		float                          RegionRadius;
		class UTaleAICustomRegion*     ReturnValue;
	} params;

	params.RegionCentre = RegionCentre;
	params.RegionRadius = RegionRadius;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestAIBlackboardFunctionStepLibrary::SetBlackboardValueAsVector(class APawn* Pawn, const struct FName& KeyName, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsVector"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
		struct FVector                 Value;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class FString                  Value                          (Parm, ZeroConstructor)

void UTaleQuestAIBlackboardFunctionStepLibrary::SetBlackboardValueAsString(class APawn* Pawn, const struct FName& KeyName, const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsString"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
		class FString                  Value;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestAIBlackboardFunctionStepLibrary::SetBlackboardValueAsRotator(class APawn* Pawn, const struct FName& KeyName, const struct FRotator& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsRotator"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
		struct FRotator                Value;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIBlackboardFunctionStepLibrary::SetBlackboardValueAsObject(class APawn* Pawn, const struct FName& KeyName, class UObject* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsObject"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
		class UObject*                 Value;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestAIBlackboardFunctionStepLibrary::SetBlackboardValueAsName(class APawn* Pawn, const struct FName& KeyName, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsName"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
		struct FName                   Value;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIBlackboardFunctionStepLibrary::SetBlackboardValueAsInt(class APawn* Pawn, const struct FName& KeyName, int Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsInt"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
		int                            Value;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIBlackboardFunctionStepLibrary::SetBlackboardValueAsFloat(class APawn* Pawn, const struct FName& KeyName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsFloat"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
		float                          Value;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UClass*                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIBlackboardFunctionStepLibrary::SetBlackboardValueAsClass(class APawn* Pawn, const struct FName& KeyName, class UClass* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsClass"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
		class UClass*                  Value;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIBlackboardFunctionStepLibrary::SetBlackboardValueAsBool(class APawn* Pawn, const struct FName& KeyName, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.SetBlackboardValueAsBool"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
		bool                           Value;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.RunBehaviourTree
// (Final, Native, Public, HasOutParms)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UBehaviorTree> BehaviourTree                  (ConstParm, Parm, OutParm, ReferenceParm)

void UTaleQuestAIBlackboardFunctionStepLibrary::RunBehaviourTree(class APawn* Pawn, TAssetPtr<class UBehaviorTree> BehaviourTree)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.RunBehaviourTree"));

	struct
	{
		class APawn*                   Pawn;
		TAssetPtr<class UBehaviorTree> BehaviourTree;
	} params;

	params.Pawn = Pawn;
	params.BehaviourTree = BehaviourTree;

	UObject::ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.ClearBlackboardValue
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KeyName                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestAIBlackboardFunctionStepLibrary::ClearBlackboardValue(class APawn* Pawn, const struct FName& KeyName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIBlackboardFunctionStepLibrary.ClearBlackboardValue"));

	struct
	{
		class APawn*                   Pawn;
		struct FName                   KeyName;
	} params;

	params.Pawn = Pawn;
	params.KeyName = KeyName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetQuestTargetLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTaleQuestAIGoalFunctionStepLibrary::SetQuestTargetLocation(class APawn* Pawn, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetQuestTargetLocation"));

	struct
	{
		class APawn*                   Pawn;
		struct FVector                 Value;
	} params;

	params.Pawn = Pawn;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetQuestTargetActor
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIGoalFunctionStepLibrary::SetQuestTargetActor(class APawn* Pawn, class UObject* Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetQuestTargetActor"));

	struct
	{
		class APawn*                   Pawn;
		class UObject*                 Value;
	} params;

	params.Pawn = Pawn;
	params.Value = Value;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetAreaOfOperation
// (Final, Native, Static, Public, HasOutParms, HasDefaults)
// Parameters:
// TScriptInterface<class UAIAreaOfOperationInterface> AIAreaOfOperationInterface     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AreaLocation                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          AreaRadius                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIGoalFunctionStepLibrary::SetAreaOfOperation(const TScriptInterface<class UAIAreaOfOperationInterface>& AIAreaOfOperationInterface, const struct FVector& AreaLocation, float AreaRadius)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.SetAreaOfOperation"));

	struct
	{
		TScriptInterface<class UAIAreaOfOperationInterface> AIAreaOfOperationInterface;
		struct FVector                 AreaLocation;
		float                          AreaRadius;
	} params;

	params.AIAreaOfOperationInterface = AIAreaOfOperationInterface;
	params.AreaLocation = AreaLocation;
	params.AreaRadius = AreaRadius;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearQuestTargetLocation
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIGoalFunctionStepLibrary::ClearQuestTargetLocation(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearQuestTargetLocation"));

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearQuestTargetActor
// (Final, Native, Static, Public)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIGoalFunctionStepLibrary::ClearQuestTargetActor(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearQuestTargetActor"));

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearAreaOfOperation
// (Final, Native, Static, Public)
// Parameters:
// TScriptInterface<class UAIAreaOfOperationInterface> AIAreaOfOperationInterface     (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAIGoalFunctionStepLibrary::ClearAreaOfOperation(const TScriptInterface<class UAIAreaOfOperationInterface>& AIAreaOfOperationInterface)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAIGoalFunctionStepLibrary.ClearAreaOfOperation"));

	struct
	{
		TScriptInterface<class UAIAreaOfOperationInterface> AIAreaOfOperationInterface;
	} params;

	params.AIAreaOfOperationInterface = AIAreaOfOperationInterface;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAINameplateFunctionLibrary.SetAINamplateName
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// class UAINameplateComponent*   NameplateComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FText                   Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   Name                           (ConstParm, Parm, OutParm, ReferenceParm)

void UTaleQuestAINameplateFunctionLibrary::SetAINamplateName(class UAINameplateComponent* NameplateComponent, const struct FText& Title, const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAINameplateFunctionLibrary.SetAINamplateName"));

	struct
	{
		class UAINameplateComponent*   NameplateComponent;
		struct FText                   Title;
		struct FText                   Name;
	} params;

	params.NameplateComponent = NameplateComponent;
	params.Title = Title;
	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function TaleAI.TaleQuestAISpawnFunctionLibrary.WaitForSpawnComplete
// (Final, Native, Public)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestAISpawnFunctionLibrary::WaitForSpawnComplete(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleAI.TaleQuestAISpawnFunctionLibrary.WaitForSpawnComplete"));

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
