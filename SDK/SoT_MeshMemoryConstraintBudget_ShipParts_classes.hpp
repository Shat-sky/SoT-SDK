#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_MeshMemoryConstraintBudget_ShipParts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeshMemoryConstraintBudget_ShipParts.MeshMemoryConstraintBudget_ShipParts_C
// 0x0000 (0x0028 - 0x0028)
class UMeshMemoryConstraintBudget_ShipParts_C : public UMeshMemoryConstraintBudget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MeshMemoryConstraintBudget_ShipParts.MeshMemoryConstraintBudget_ShipParts_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif