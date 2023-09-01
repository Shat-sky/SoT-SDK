// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FactionsFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FactionsFramework.FactionServiceInterface.Blueprint_GetActiveFactionIdentifierForCrew
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                   InCrewId                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UFactionServiceInterface::Blueprint_GetActiveFactionIdentifierForCrew(const struct FGuid& InCrewId)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FactionsFramework.FactionServiceInterface.Blueprint_GetActiveFactionIdentifierForCrew"));

	struct
	{
		struct FGuid                   InCrewId;
		struct FName                   ReturnValue;
	} params;

	params.InCrewId = InCrewId;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
