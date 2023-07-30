// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PuzzleManagerFramework_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PuzzleManagerFramework.PuzzleManager.ResetAllPuzzles
// (Final, Native, Public, BlueprintCallable)

void APuzzleManager::ResetAllPuzzles()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function PuzzleManagerFramework.PuzzleManager.ResetAllPuzzles"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
