#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MeshMemoryConstraintCategory_StandingTrinket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeshMemoryConstraintCategory_StandingTrinket.MeshMemoryConstraintCategory_StandingTrinket_C
// 0x0000 (0x0028 - 0x0028)
class UMeshMemoryConstraintCategory_StandingTrinket_C : public UMeshMemoryConstraintCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MeshMemoryConstraintCategory_StandingTrinket.MeshMemoryConstraintCategory_StandingTrinket_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif