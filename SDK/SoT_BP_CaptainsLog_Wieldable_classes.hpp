#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptainsLog_Wieldable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C
// 0x0018 (0x0CC8 - 0x0CB0)
class ABP_CaptainsLog_Wieldable_C : public ACaptainsLogbookWieldable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0CB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalStashedMeshMemoryConstraintComponent* SkeletalStashedMeshMemoryConstraint;                      // 0x0CC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CaptainsLog_Wieldable.BP_CaptainsLog_Wieldable_C"));
		return ptr;
	}


	struct FText GetObjectDisplayName();
	class USkeletalMeshMemoryConstraintComponent* GetStashedMeshMemoryConstraintComponent();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CaptainsLog_Wieldable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
