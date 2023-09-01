#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EnchantedCompass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EnchantedCompass.RotatingCompass
// 0x0040 (0x0A10 - 0x09D0)
class ARotatingCompass : public AEnchantedCompass
{
public:
	class UPoseableMeshMemoryConstraintComponent*      PoseableStashedMeshComponent;                             // 0x09D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWieldableInteractableComponent*             WieldableInteractableComponent;                           // 0x09D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      SplinePathActor;                                          // 0x09E0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RotationSequenceCurve;                                    // 0x09E8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class URotatingCompassSpinComponent*               RotatingCompassSpinComponent;                             // 0x09F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<ERotatingCompassRotationStates>        RotationState;                                            // 0x09F8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09F9(0x0003) MISSED OFFSET
	float                                              SplineDistanceOffset;                                     // 0x09FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetYawAngleBeforeRotationSequence;                     // 0x0A00(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0A04(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.RotatingCompass"));
		return ptr;
	}


	void OnRep_RotationState();
};


// Class EnchantedCompass.EnchantedCompassProximityAnnouncementComponent
// 0x0148 (0x0210 - 0x00C8)
class UEnchantedCompassProximityAnnouncementComponent : public UActorComponent
{
public:
	class UWwiseEvent*                                 StartAnnouncingEvent;                                     // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StopAnnouncingEvent;                                      // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFrequencyDistanceSquared;                              // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TScriptInterface<class UCharacterOrientationInterface> WielderOrientation;                                       // 0x00E0(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UWwiseEmitterInterface>     WielderWwiseEmitterInterface;                             // 0x00F0(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UWieldableInterface>        OwnerWieldableInterface;                                  // 0x0100(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UObjectMessagingDispatcherInterface> ObjectMessagingDispatcher;                                // 0x0110(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSettingEnabled;                                         // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xEF];                                      // 0x0121(0x00EF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.EnchantedCompassProximityAnnouncementComponent"));
		return ptr;
	}

};


// Class EnchantedCompass.MultiTargetEnchantedCompass
// 0x0030 (0x0910 - 0x08E0)
class AMultiTargetEnchantedCompass : public ACompass
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08E0(0x0008) MISSED OFFSET
	TArray<struct FGuid>                               LocationIds;                                              // 0x08E8(0x0010) (ZeroConstructor, Transient)
	class UInventoryItemComponent*                     InventoryItem;                                            // 0x08F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UEnchantedCompassProximityAnnouncementComponent* ProximityAnnouncementComponent;                           // 0x0900(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0908(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.MultiTargetEnchantedCompass"));
		return ptr;
	}

};


// Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass
// 0x0000 (0x0910 - 0x0910)
class APrototypeMultiTargetEnchantedCompass : public AMultiTargetEnchantedCompass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass"));
		return ptr;
	}


	float GetFloatMax();
	float CalculateDesiredYaw(const struct FRotator& CompassRotation);
	TArray<struct FVector> BP_GetTargetLocations();
};


// Class EnchantedCompass.RotatingCompassSpinComponent
// 0x0008 (0x01F0 - 0x01E8)
class URotatingCompassSpinComponent : public UCompassSpinComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.RotatingCompassSpinComponent"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStep
// 0x0008 (0x00A0 - 0x0098)
class UTaleQuestMultiTargetCompassAddTrackedLocationStep : public UTaleQuestStep
{
public:
	class UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc;                                                     // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStep"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStepDesc
// 0x0060 (0x00E0 - 0x0080)
class UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        Location;                                                 // 0x0080(0x0030)
	struct FQuestVariableGuid                          TargetID;                                                 // 0x00B0(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStep
// 0x0010 (0x00A8 - 0x0098)
class UTaleQuestMultiTargetCompassRemoveTrackedLocationStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStep"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UTaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableGuid                          TargetID;                                                 // 0x0080(0x0030) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassService
// 0x0020 (0x0190 - 0x0170)
class UTaleQuestMultiTargetCompassService : public UTaleQuestToolService
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0170(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassService"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestMultiTargetCompassServiceDesc
// 0x0008 (0x0038 - 0x0030)
class UTaleQuestMultiTargetCompassServiceDesc : public UTaleQuestToolServiceDesc
{
public:
	class UClass*                                      CompassDesc;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestMultiTargetCompassServiceDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestRotatingCompassService
// 0x00A8 (0x0108 - 0x0060)
class UTaleQuestRotatingCompassService : public UTaleQuestService
{
public:
	class AActor*                                      SplinePathActor;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class ARotatingCompass*                            RotatingCompass;                                          // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0070(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestRotatingCompassService"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestRotatingCompassServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestRotatingCompassServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestRotatingCompassServiceDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestRotatingCompassFunctionLibrary
// 0x0000 (0x0180 - 0x0180)
class UTaleQuestRotatingCompassFunctionLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestRotatingCompassFunctionLibrary"));
		return ptr;
	}


	void WaitForRotatingCompassDestroyed(class AActor* InRotatingCompass);
	void UpdateRotatingCompassSplinePath(class AActor* InRotatingCompass);
	void SetRotatingCompass(class AActor* InRotatingCompass);
};


// Class EnchantedCompass.TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStep
// 0x0008 (0x00A0 - 0x0098)
class UTaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStep"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStepDesc
// 0x0030 (0x00B0 - 0x0080)
class UTaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         SplinePathActor;                                          // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestRotatingCompassSplinePathSetupAndWaitForCompletionStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetCompassTargetToTargetStep
// 0x0060 (0x00F8 - 0x0098)
class UTaleQuestSetCompassTargetToTargetStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0098(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetCompassTargetToTargetStep"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetCompassTargetBaseStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestSetCompassTargetBaseStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<ETargetUpdateReason>                   TargetUpdateReason;                                       // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetCompassTargetBaseStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc
// 0x0030 (0x00B8 - 0x0088)
class UTaleQuestSetCompassTargetToActorStepDesc : public UTaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct FQuestVariableActor                         TargetActor;                                              // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetCompassTargetToPointStepDesc
// 0x0030 (0x00B8 - 0x0088)
class UTaleQuestSetCompassTargetToPointStepDesc : public UTaleQuestSetCompassTargetBaseStepDesc
{
public:
	struct FQuestVariableOrientedPoint                 TargetPoint;                                              // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetCompassTargetToPointStepDesc"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetRotationCurveForRotatingCompassStep
// 0x0000 (0x0098 - 0x0098)
class UTaleQuestSetRotationCurveForRotatingCompassStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetRotationCurveForRotatingCompassStep"));
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetRotationCurveForRotatingCompassStepDesc
// 0x0008 (0x0088 - 0x0080)
class UTaleQuestSetRotationCurveForRotatingCompassStepDesc : public UTaleQuestStepDesc
{
public:
	class UCurveFloat*                                 RotationSequenceCurve;                                    // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class EnchantedCompass.TaleQuestSetRotationCurveForRotatingCompassStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
