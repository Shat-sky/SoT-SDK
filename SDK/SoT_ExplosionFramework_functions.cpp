// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ExplosionFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosionFramework.FuseInterface.GetIsActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFuseInterface::GetIsActive()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ExplosionFramework.FuseInterface.GetIsActive"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ExplosionFramework.TaleQuestFuseFunctionLibrary.TriggerFuse
// (Final, Native, Static, Public)
// Parameters:
// class AActor*                  InFuseActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestFuseFunctionLibrary::TriggerFuse(class AActor* InFuseActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function ExplosionFramework.TaleQuestFuseFunctionLibrary.TriggerFuse"));

	struct
	{
		class AActor*                  InFuseActor;
	} params;

	params.InFuseActor = InFuseActor;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
