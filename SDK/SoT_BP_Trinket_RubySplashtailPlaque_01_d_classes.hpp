#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Trinket_RubySplashtailPlaque_01_d_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Trinket_RubySplashtailPlaque_01_d.BP_Trinket_RubySplashtailPlaque_01_d_C
// 0x0010 (0x0418 - 0x0408)
class ABP_Trinket_RubySplashtailPlaque_01_d_C : public ABP_Trinket_HangingSinglePoint_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Trinket_RubySplashtailPlaque_01_d.BP_Trinket_RubySplashtailPlaque_01_d_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
