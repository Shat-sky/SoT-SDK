// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TaleCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TaleCore.ClientCommandHandler.OnRep_CommandQueue
// (Final, Native, Private)

void AClientCommandHandler::OnRep_CommandQueue()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function TaleCore.ClientCommandHandler.OnRep_CommandQueue"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
