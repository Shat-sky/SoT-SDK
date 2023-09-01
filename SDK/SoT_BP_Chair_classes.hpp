#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Chair_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Chair.BP_Chair_C
// 0x0008 (0x0478 - 0x0470)
class ABP_Chair_C : public AGenericPartWithMMC
{
public:
	class UStaticMeshMemoryConstraintComponent*        ChairMesh;                                                // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Chair.BP_Chair_C"));
		return ptr;
	}


	class UStaticMeshComponent* GetMeshComponent();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
