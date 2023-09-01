// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomServerLocalisation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomServerLocalisation.CustomServerLocalisationService.OnRep_GenerateLocalisationData
// (Final, Native, Private)

void ACustomServerLocalisationService::OnRep_GenerateLocalisationData()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomServerLocalisation.CustomServerLocalisationService.OnRep_GenerateLocalisationData"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CustomServerLocalisation.CustomServerLocalisationService.BeginPlay
// (Final, Native, Private)

void ACustomServerLocalisationService::BeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomServerLocalisation.CustomServerLocalisationService.BeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
