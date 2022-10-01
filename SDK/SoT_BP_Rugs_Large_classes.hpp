#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Rugs_Large_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rugs_Large.BP_Rugs_Large_C
// 0x0010 (0x03E8 - 0x03D8)
class ABP_Rugs_Large_C : public ABP_Rugs_C
{
public:
	class UStaticMeshComponent*                        CircularRugMeshComponent;                                 // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        RectangularRugMeshComponent;                              // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Rugs_Large.BP_Rugs_Large_C"));
		return ptr;
	}


	TArray<class UStaticMeshComponent*> GetRugMeshComponents();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
