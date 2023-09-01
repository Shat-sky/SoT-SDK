// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CompetitiveVoyages_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetTreasureHuntItemFound
// (Final, Native, Public, Const)
// Parameters:
// class AActor*                  FindingActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCompetitiveVoyagesFunctionStepLibrary::SetTreasureHuntItemFound(class AActor* FindingActor)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetTreasureHuntItemFound"));

	struct
	{
		class AActor*                  FindingActor;
	} params;

	params.FindingActor = FindingActor;

	UObject::ProcessEvent(fn, &params);
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetPhasedMarkerManager
// (Final, Native, Public)
// Parameters:
// class AActor*                  InMarkerManager                (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCompetitiveVoyagesFunctionStepLibrary::SetPhasedMarkerManager(class AActor* InMarkerManager)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetPhasedMarkerManager"));

	struct
	{
		class AActor*                  InMarkerManager;
	} params;

	params.InMarkerManager = InMarkerManager;

	UObject::ProcessEvent(fn, &params);
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetMainVoyageState
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<ECompetitiveVoyagesMainVoyageState> InState                        (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCompetitiveVoyagesFunctionStepLibrary::SetMainVoyageState(TEnumAsByte<ECompetitiveVoyagesMainVoyageState> InState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetMainVoyageState"));

	struct
	{
		TEnumAsByte<ECompetitiveVoyagesMainVoyageState> InState;
	} params;

	params.InState = InState;

	UObject::ProcessEvent(fn, &params);
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetCompetitiveVoyageState
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<ECompetitiveVoyagesState> InState                        (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCompetitiveVoyagesFunctionStepLibrary::SetCompetitiveVoyageState(TEnumAsByte<ECompetitiveVoyagesState> InState)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.SetCompetitiveVoyageState"));

	struct
	{
		TEnumAsByte<ECompetitiveVoyagesState> InState;
	} params;

	params.InState = InState;

	UObject::ProcessEvent(fn, &params);
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMarkerItem
// (Final, Native, Public)
// Parameters:
// class AActor*                  InItemInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCompetitiveVoyagesFunctionStepLibrary::RemovePhasedMarkerItem(class AActor* InItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMarkerItem"));

	struct
	{
		class AActor*                  InItemInfo;
	} params;

	params.InItemInfo = InItemInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMapMarker
// (Final, Native, Public)
// Parameters:
// class AActor*                  InItemInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCompetitiveVoyagesFunctionStepLibrary::RemovePhasedMapMarker(class AActor* InItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.RemovePhasedMapMarker"));

	struct
	{
		class AActor*                  InItemInfo;
	} params;

	params.InItemInfo = InItemInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetNumTreasureHuntItemsFound
// (Final, Native, Public, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTaleQuestCompetitiveVoyagesFunctionStepLibrary::GetNumTreasureHuntItemsFound()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetNumTreasureHuntItemsFound"));

	struct
	{
		int                            ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetMainVoyageState
// (Final, Native, Public, Const)
// Parameters:
// TEnumAsByte<ECompetitiveVoyagesMainVoyageState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECompetitiveVoyagesMainVoyageState> UTaleQuestCompetitiveVoyagesFunctionStepLibrary::GetMainVoyageState()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.GetMainVoyageState"));

	struct
	{
		TEnumAsByte<ECompetitiveVoyagesMainVoyageState> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.CreatePhasedMapMarkerService
// (Final, Native, Public)
// Parameters:
// class UClass*                  InClass                        (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCompetitiveVoyagesFunctionStepLibrary::CreatePhasedMapMarkerService(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.CreatePhasedMapMarkerService"));

	struct
	{
		class UClass*                  InClass;
	} params;

	params.InClass = InClass;

	UObject::ProcessEvent(fn, &params);
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMarkerItem
// (Final, Native, Public)
// Parameters:
// class AActor*                  InItemInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCompetitiveVoyagesFunctionStepLibrary::AddPhasedMarkerItem(class AActor* InItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMarkerItem"));

	struct
	{
		class AActor*                  InItemInfo;
	} params;

	params.InItemInfo = InItemInfo;

	UObject::ProcessEvent(fn, &params);
}


// Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMapMarker
// (Final, Native, Public)
// Parameters:
// class AActor*                  InItemInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UTaleQuestCompetitiveVoyagesFunctionStepLibrary::AddPhasedMapMarker(class AActor* InItemInfo)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary.AddPhasedMapMarker"));

	struct
	{
		class AActor*                  InItemInfo;
	} params;

	params.InItemInfo = InItemInfo;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
