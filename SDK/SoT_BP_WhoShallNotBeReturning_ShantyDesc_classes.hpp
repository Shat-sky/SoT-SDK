#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WhoShallNotBeReturning_ShantyDesc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WhoShallNotBeReturning_ShantyDesc.BP_WhoShallNotBeReturning_ShantyDesc_C
// 0x0000 (0x0118 - 0x0118)
class UBP_WhoShallNotBeReturning_ShantyDesc_C : public UShantyItemDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WhoShallNotBeReturning_ShantyDesc.BP_WhoShallNotBeReturning_ShantyDesc_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
