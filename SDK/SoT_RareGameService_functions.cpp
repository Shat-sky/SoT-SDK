// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareGameService_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RareGameService.RareGameServiceProviderInterface.UnregisterRareGameService
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData)

void URareGameServiceProviderInterface::UnregisterRareGameService(class UObject* Service)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareGameService.RareGameServiceProviderInterface.UnregisterRareGameService"));

	struct
	{
		class UObject*                 Service;
	} params;

	params.Service = Service;

	UObject::ProcessEvent(fn, &params);
}


// Function RareGameService.RareGameServiceProviderInterface.RegisterRareGameService
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Service                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URareGameServiceProviderInterface::RegisterRareGameService(class UObject* Service, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareGameService.RareGameServiceProviderInterface.RegisterRareGameService"));

	struct
	{
		class UObject*                 Service;
		class UClass*                  Class;
		bool                           ReturnValue;
	} params;

	params.Service = Service;
	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareGameService.RareGameServiceProviderInterface.GetRareGameService
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* URareGameServiceProviderInterface::GetRareGameService(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareGameService.RareGameServiceProviderInterface.GetRareGameService"));

	struct
	{
		class UClass*                  Class;
		class UObject*                 ReturnValue;
	} params;

	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function RareGameService.RareGameServiceManagerComponent.OnRep_ReplicatedServices
// (Final, Native, Private)

void URareGameServiceManagerComponent::OnRep_ReplicatedServices()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function RareGameService.RareGameServiceManagerComponent.OnRep_ReplicatedServices"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
