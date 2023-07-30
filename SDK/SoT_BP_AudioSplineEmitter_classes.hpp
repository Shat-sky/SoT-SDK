#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AudioSplineEmitter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AudioSplineEmitter.BP_AudioSplineEmitter_C
// 0x0008 (0x03D0 - 0x03C8)
class ABP_AudioSplineEmitter_C : public AActor
{
public:
	class USplineWithEmitterComponent*                 SplineWithEmitter;                                        // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AudioSplineEmitter.BP_AudioSplineEmitter_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif