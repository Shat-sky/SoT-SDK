// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BreakableActorFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BreakableActorFramework.BreakableActorBase.Multicast_WasDefeated
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// class AActor*                  InInstigator                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InDirectInstigator             (Parm, ZeroConstructor, IsPlainOldData)

void ABreakableActorBase::Multicast_WasDefeated(class AActor* InInstigator, class AActor* InDirectInstigator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BreakableActorFramework.BreakableActorBase.Multicast_WasDefeated"));

	struct
	{
		class AActor*                  InInstigator;
		class AActor*                  InDirectInstigator;
	} params;

	params.InInstigator = InInstigator;
	params.InDirectInstigator = InDirectInstigator;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
