#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NoGunpowderAmbientGoldHoarderCastawaySpawnContext_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NoGunpowderAmbientGoldHoarderCastawaySpawnContext.NoGunpowderAmbientGoldHoarderCastawaySpawnContext_C
// 0x0000 (0x0030 - 0x0030)
class UNoGunpowderAmbientGoldHoarderCastawaySpawnContext_C : public UAISpawnContextId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass NoGunpowderAmbientGoldHoarderCastawaySpawnContext.NoGunpowderAmbientGoldHoarderCastawaySpawnContext_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
