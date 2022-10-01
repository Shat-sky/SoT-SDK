// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CustomisableSovereignLadder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDockableInfo ABP_CustomisableSovereignLadder_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.GetDockableInfo"));

	struct
	{
		struct FDockableInfo           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Construct Ladder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CustomisableSovereignLadder_C::Construct_Ladder()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Construct Ladder"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Get Total Height Before Cap
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Height                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CustomisableSovereignLadder_C::Get_Total_Height_Before_Cap(float* Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Get Total Height Before Cap"));

	struct
	{
		float                          Height;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Height != nullptr)
		*Height = params.Height;
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Get Steps
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num_Steps                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CustomisableSovereignLadder_C::Get_Steps(int* Num_Steps)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Get Steps"));

	struct
	{
		int                            Num_Steps;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Num_Steps != nullptr)
		*Num_Steps = params.Num_Steps;
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.GetBottomLadderRungTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_CustomisableSovereignLadder_C::GetBottomLadderRungTransform()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.GetBottomLadderRungTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.GetTopLadderRungTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ABP_CustomisableSovereignLadder_C::GetTopLadderRungTransform()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.GetTopLadderRungTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Get World Loc at Height Along Z
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Relative_Z                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_CustomisableSovereignLadder_C::Get_World_Loc_at_Height_Along_Z(float Relative_Z, struct FVector* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.Get World Loc at Height Along Z"));

	struct
	{
		float                          Relative_Z;
		struct FVector                 Return_Value;
	} params;

	params.Relative_Z = Relative_Z;

	UObject::ProcessEvent(fn, &params);

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.SetupSpline
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline_Component               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         Positions                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_CustomisableSovereignLadder_C::SetupSpline(class USplineComponent* Spline_Component, TArray<struct FVector>* Positions)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.SetupSpline"));

	struct
	{
		class USplineComponent*        Spline_Component;
		TArray<struct FVector>         Positions;
	} params;

	params.Spline_Component = Spline_Component;

	UObject::ProcessEvent(fn, &params);

	if (Positions != nullptr)
		*Positions = params.Positions;
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CustomisableSovereignLadder_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_CustomisableSovereignLadder_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.ExecuteUbergraph_BP_CustomisableSovereignLadder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CustomisableSovereignLadder_C::ExecuteUbergraph_BP_CustomisableSovereignLadder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_CustomisableSovereignLadder.BP_CustomisableSovereignLadder_C.ExecuteUbergraph_BP_CustomisableSovereignLadder"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
