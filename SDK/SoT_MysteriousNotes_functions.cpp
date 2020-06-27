// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MysteriousNotes_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MysteriousNotes.ClientMysteriousNoteComponent.OnRep_PendingNotes
// (Final, Native, Private)

void UClientMysteriousNoteComponent::OnRep_PendingNotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function MysteriousNotes.ClientMysteriousNoteComponent.OnRep_PendingNotes");

	UClientMysteriousNoteComponent_OnRep_PendingNotes_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
