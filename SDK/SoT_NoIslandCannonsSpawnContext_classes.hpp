#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NoIslandCannonsSpawnContext_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NoIslandCannonsSpawnContext.NoIslandCannonsSpawnContext_C
// 0x0000 (0x0028 - 0x0028)
class UNoIslandCannonsSpawnContext_C : public UAISpawnContextId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass NoIslandCannonsSpawnContext.NoIslandCannonsSpawnContext_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
