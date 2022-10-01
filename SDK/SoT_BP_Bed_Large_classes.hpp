#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Bed_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bed_Large.BP_Bed_Large_C
// 0x0008 (0x03E0 - 0x03D8)
class ABP_Bed_Large_C : public ABP_Bed_C
{
public:
	class UStaticMeshComponent*                        DrapesMeshComponent;                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Bed_Large.BP_Bed_Large_C"));
		return ptr;
	}


	class UStaticMeshComponent* GetDrapesMeshComponent();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
