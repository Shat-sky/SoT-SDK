#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleAI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TaleAI.TaleAIRegionBase
// 0x0048 (0x0070 - 0x0028)
class UTaleAIRegionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAIProximityPlayerTracker*                   ProximityPlayerTracker;                                   // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleAIRegionBase"));
		return ptr;
	}

};


// Class TaleAI.TaleAICustomRegion
// 0x0018 (0x0088 - 0x0070)
class UTaleAICustomRegion : public UTaleAIRegionBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleAICustomRegion"));
		return ptr;
	}

};


// Class TaleAI.TaleAIRegionFunctionLibrary
// 0x0000 (0x0180 - 0x0180)
class UTaleAIRegionFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleAIRegionFunctionLibrary"));
		return ptr;
	}


	class UTaleAICustomRegion* CreateCustomRegion(const struct FVector& RegionCentre, float RegionRadius);
};


// Class TaleAI.TaleQuestAIAsset
// 0x0010 (0x0038 - 0x0028)
class UTaleQuestAIAsset : public UDataAsset
{
public:
	class UTaleQuestSpawnAICustomRootStepDesc*         SpawnerRoot;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTaleStruct*                                 SpawnerParameters;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestAIAsset"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestAIBlackboardFunctionStepLibrary
// 0x0000 (0x0180 - 0x0180)
class UTaleQuestAIBlackboardFunctionStepLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestAIBlackboardFunctionStepLibrary"));
		return ptr;
	}


	void WaitForBlackboardValueAsObject(class APawn* Pawn, const struct FName& KeyName, class UObject* ExpectedValue);
	void WaitForBlackboardValueAsClass(class APawn* Pawn, const struct FName& KeyName, class UClass* ExpectedValue);
	void WaitForBlackboardValueAsBool(class APawn* Pawn, const struct FName& KeyName, bool ExpectedValue);
	static void SetBlackboardValueAsVector(class APawn* Pawn, const struct FName& KeyName, const struct FVector& Value);
	static void SetBlackboardValueAsString(class APawn* Pawn, const struct FName& KeyName, const class FString& Value);
	static void SetBlackboardValueAsRotator(class APawn* Pawn, const struct FName& KeyName, const struct FRotator& Value);
	static void SetBlackboardValueAsObject(class APawn* Pawn, const struct FName& KeyName, class UObject* Value);
	static void SetBlackboardValueAsName(class APawn* Pawn, const struct FName& KeyName, const struct FName& Value);
	static void SetBlackboardValueAsInt(class APawn* Pawn, const struct FName& KeyName, int Value);
	static void SetBlackboardValueAsFloat(class APawn* Pawn, const struct FName& KeyName, float Value);
	static void SetBlackboardValueAsClass(class APawn* Pawn, const struct FName& KeyName, class UClass* Value);
	static void SetBlackboardValueAsBool(class APawn* Pawn, const struct FName& KeyName, bool Value);
	void RunBehaviourTree(class APawn* Pawn, TAssetPtr<class UBehaviorTree> BehaviourTree);
	static void GetBlackboardValueAsVector(class APawn* Pawn, const struct FName& KeyName, struct FVector* Value);
	static void GetBlackboardValueAsString(class APawn* Pawn, const struct FName& KeyName, class FString* Value);
	static void GetBlackboardValueAsRotator(class APawn* Pawn, const struct FName& KeyName, struct FRotator* Value);
	static void GetBlackboardValueAsObject(class APawn* Pawn, const struct FName& KeyName, class UObject** Value);
	static void GetBlackboardValueAsName(class APawn* Pawn, const struct FName& KeyName, struct FName* Value);
	static void GetBlackboardValueAsInt(class APawn* Pawn, const struct FName& KeyName, int* Value);
	static void GetBlackboardValueAsFloat(class APawn* Pawn, const struct FName& KeyName, float* Value);
	static void GetBlackboardValueAsClass(class APawn* Pawn, const struct FName& KeyName, class UClass** Value);
	static void GetBlackboardValueAsBool(class APawn* Pawn, const struct FName& KeyName, bool* Value);
	static void ClearBlackboardValue(class APawn* Pawn, const struct FName& KeyName);
};


// Class TaleAI.TaleQuestAIGoalFunctionStepLibrary
// 0x0000 (0x0180 - 0x0180)
class UTaleQuestAIGoalFunctionStepLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestAIGoalFunctionStepLibrary"));
		return ptr;
	}


	static void SetQuestTargetLocation(class APawn* Pawn, const struct FVector& Value);
	static void SetQuestTargetActor(class APawn* Pawn, class UObject* Value);
	static void SetQuestLookAtActor(class APawn* Pawn, class UObject* Value);
	static void SetAreaOfOperation(const TScriptInterface<class UAIAreaOfOperationInterface>& AIAreaOfOperationInterface, const struct FVector& AreaLocation, float AreaRadius);
	static void ClearQuestTargetLocation(class APawn* Pawn);
	static void ClearQuestTargetActor(class APawn* Pawn);
	static void ClearQuestLookAtActor(class APawn* Pawn);
	static void ClearAreaOfOperation(const TScriptInterface<class UAIAreaOfOperationInterface>& AIAreaOfOperationInterface);
};


// Class TaleAI.TaleQuestAINameplateFunctionLibrary
// 0x0000 (0x0180 - 0x0180)
class UTaleQuestAINameplateFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestAINameplateFunctionLibrary"));
		return ptr;
	}


	void SetAINamplateName(class UAINameplateComponent* NameplateComponent, const struct FText& Title, const struct FText& Name);
};


// Class TaleAI.TaleQuestAISpawner
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestAISpawner : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestAISpawner"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestAISpawnFunctionLibrary
// 0x0000 (0x0180 - 0x0180)
class UTaleQuestAISpawnFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestAISpawnFunctionLibrary"));
		return ptr;
	}


	void WaitForSpawnComplete(class APawn* Pawn);
};


// Class TaleAI.TaleQuestSpawnAICustomOnDespawnFrame
// 0x0028 (0x0050 - 0x0028)
class UTaleQuestSpawnAICustomOnDespawnFrame : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FSpawnAICustomOnDespawnTaskData             Data;                                                     // 0x0030(0x0020) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomOnDespawnFrame"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomOnSpawnFrame
// 0x0020 (0x0048 - 0x0028)
class UTaleQuestSpawnAICustomOnSpawnFrame : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FSpawnAICustomOnSpawnTaskData               Data;                                                     // 0x0030(0x0018) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomOnSpawnFrame"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomRootStep
// 0x00F0 (0x0188 - 0x0098)
class UTaleQuestSpawnAICustomRootStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	struct FTaleStructInstance                         Params;                                                   // 0x00A8(0x0010) (ZeroConstructor, Transient)
	TArray<class UTaleQuestSpawnAICustomTaskBase*>     ActiveTasks;                                              // 0x00B8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class UTaleAIRegionBase*                           Region;                                                   // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA8];                                      // 0x00E0(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomRootStep"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomRootStepDesc
// 0x00E8 (0x0168 - 0x0080)
class UTaleQuestSpawnAICustomRootStepDesc : public UTaleQuestStepDesc
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	struct FSpawnAICustomSetupTaskData                 SetupTaskData;                                            // 0x0088(0x0018)
	struct FSpawnActorCustomOnTriggerWaveTaskData      OnTriggerWaveTaskData;                                    // 0x00A0(0x0010)
	struct FSpawnActorCustomOnCompleteWaveTaskData     OnCompleteWaveTaskData;                                   // 0x00B0(0x0008)
	struct FSpawnAICustomPreSpawnTaskData              PreSpawnTaskData;                                         // 0x00B8(0x0078)
	struct FSpawnAICustomOnSpawnTaskData               OnSpawnTaskData;                                          // 0x0130(0x0018)
	struct FSpawnAICustomOnDespawnTaskData             OnDespawnTaskData;                                        // 0x0148(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomRootStepDesc"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomStep
// 0x00B0 (0x0148 - 0x0098)
class UTaleQuestSpawnAICustomStep : public UTaleQuestStep
{
public:
	TScriptInterface<class UTaleQuestStepInterface>    SpawnerInstance;                                          // 0x0098(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<int, TScriptInterface<class UTaleQuestStepInterface>> OnSpawnedTasks;                                           // 0x00A8(0x0050) (ZeroConstructor, Transient)
	TMap<int, TScriptInterface<class UTaleQuestStepInterface>> OnDespawnTasks;                                           // 0x00F8(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomStep"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomStepDesc
// 0x0080 (0x0100 - 0x0080)
class UTaleQuestSpawnAICustomStepDesc : public UTaleQuestStepDesc
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	class UTaleQuestAIAsset*                           AISpawner;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTaleQuestStepDesc*                          OnSpawn;                                                  // 0x0090(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	class UTaleQuestStepDesc*                          OnDespawn;                                                // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TMap<struct FName, struct FQuestVariableAny>       ParameterMapping;                                         // 0x00A0(0x0050) (Edit, ZeroConstructor, EditConst)
	struct FTaleStructInstance                         ParamterInstance;                                         // 0x00F0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomStepDesc"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomTaskBase
// 0x0050 (0x0078 - 0x0028)
class UTaleQuestSpawnAICustomTaskBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UTaleQuestSpawnAICustomRootStep*             MyRootStep;                                               // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0038(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomTaskBase"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomOnDespawnTask
// 0x0030 (0x00A8 - 0x0078)
class UTaleQuestSpawnAICustomOnDespawnTask : public UTaleQuestSpawnAICustomTaskBase
{
public:
	TScriptInterface<class UTaleQuestStepInterface>    Body;                                                     // 0x0078(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSpawnAICustomOnDespawnTaskData             TaskData;                                                 // 0x0088(0x0020) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomOnDespawnTask"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomOnSpawnTask
// 0x00A8 (0x0120 - 0x0078)
class UTaleQuestSpawnAICustomOnSpawnTask : public UTaleQuestSpawnAICustomTaskBase
{
public:
	TScriptInterface<class UTaleQuestStepInterface>    Body;                                                     // 0x0078(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSpawnAICustomOnSpawnTaskData               TaskData;                                                 // 0x0088(0x0018) (Transient)
	unsigned char                                      UnknownData00[0x80];                                      // 0x00A0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomOnSpawnTask"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomPreSpawnTask
// 0x0098 (0x0110 - 0x0078)
class UTaleQuestSpawnAICustomPreSpawnTask : public UTaleQuestSpawnAICustomTaskBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	TScriptInterface<class UTaleQuestStepInterface>    Body;                                                     // 0x0080(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSpawnAICustomPreSpawnTaskData              TaskData;                                                 // 0x0090(0x0078) (Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomPreSpawnTask"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomSetupTask
// 0x0028 (0x00A0 - 0x0078)
class UTaleQuestSpawnAICustomSetupTask : public UTaleQuestSpawnAICustomTaskBase
{
public:
	struct FSpawnAICustomSetupTaskData                 TaskData;                                                 // 0x0078(0x0018) (Transient)
	TScriptInterface<class UTaleQuestStepInterface>    Body;                                                     // 0x0090(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomSetupTask"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomSpawnerOnCompleteWaveTask
// 0x0018 (0x0090 - 0x0078)
class UTaleQuestSpawnAICustomSpawnerOnCompleteWaveTask : public UTaleQuestSpawnAICustomTaskBase
{
public:
	struct FSpawnActorCustomOnCompleteWaveTaskData     TaskData;                                                 // 0x0078(0x0008) (Transient)
	TScriptInterface<class UTaleQuestStepInterface>    Body;                                                     // 0x0080(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomSpawnerOnCompleteWaveTask"));
		return ptr;
	}

};


// Class TaleAI.TaleQuestSpawnAICustomSpawnerOnTriggerWaveTask
// 0x0020 (0x0098 - 0x0078)
class UTaleQuestSpawnAICustomSpawnerOnTriggerWaveTask : public UTaleQuestSpawnAICustomTaskBase
{
public:
	struct FSpawnActorCustomOnTriggerWaveTaskData      TaskData;                                                 // 0x0078(0x0010) (Transient)
	TScriptInterface<class UTaleQuestStepInterface>    Body;                                                     // 0x0088(0x0010) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TaleAI.TaleQuestSpawnAICustomSpawnerOnTriggerWaveTask"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
