#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BarrelItemTypes_Food_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BarrelItemTypes_Food.BarrelItemTypes_Food_C
// 0x0000 (0x0080 - 0x0080)
class UBarrelItemTypes_Food_C : public UCannonballItemCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BarrelItemTypes_Food.BarrelItemTypes_Food_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
