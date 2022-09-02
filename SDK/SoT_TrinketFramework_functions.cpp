// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TrinketFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TrinketFramework.TrinketReplacementActor.RegisterTrinketReplacementMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ActorWithTrinkets              (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    ReplacementMesh                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ATrinketReplacementActor::RegisterTrinketReplacementMesh(class AActor* ActorWithTrinkets, class UStaticMeshComponent* ReplacementMesh)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TrinketFramework.TrinketReplacementActor.RegisterTrinketReplacementMesh"));

	struct
	{
		class AActor*                  ActorWithTrinkets;
		class UStaticMeshComponent*    ReplacementMesh;
	} params;

	params.ActorWithTrinkets = ActorWithTrinkets;
	params.ReplacementMesh = ReplacementMesh;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
