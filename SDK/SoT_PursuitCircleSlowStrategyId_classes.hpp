#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PursuitCircleSlowStrategyId_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PursuitCircleSlowStrategyId.PursuitCircleSlowStrategyId_C
// 0x0000 (0x0028 - 0x0028)
class UPursuitCircleSlowStrategyId_C : public UAIStrategyId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PursuitCircleSlowStrategyId.PursuitCircleSlowStrategyId_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
