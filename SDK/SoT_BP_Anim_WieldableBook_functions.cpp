// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_WieldableBook_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_WieldableBook.BP_Anim_WieldableBook_C.OnUseStarted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UClass*                  InputID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FWieldableItemActionVisuals ActionVisuals                  (ConstParm, Parm, OutParm, ReferenceParm)

void UBP_Anim_WieldableBook_C::OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_WieldableBook.BP_Anim_WieldableBook_C.OnUseStarted"));

	struct
	{
		class UClass*                  InputID;
		struct FWieldableItemActionVisuals ActionVisuals;
	} params;

	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_WieldableBook.BP_Anim_WieldableBook_C.OnUseStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                  InputID                        (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_WieldableBook_C::OnUseStopped(class UClass* InputID)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_WieldableBook.BP_Anim_WieldableBook_C.OnUseStopped"));

	struct
	{
		class UClass*                  InputID;
	} params;

	params.InputID = InputID;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Anim_WieldableBook.BP_Anim_WieldableBook_C.ExecuteUbergraph_BP_Anim_WieldableBook
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_WieldableBook_C::ExecuteUbergraph_BP_Anim_WieldableBook(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_Anim_WieldableBook.BP_Anim_WieldableBook_C.ExecuteUbergraph_BP_Anim_WieldableBook"));

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