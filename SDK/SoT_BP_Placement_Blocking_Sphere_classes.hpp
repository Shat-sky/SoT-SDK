#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Blocking_Sphere_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C
// 0x002C (0x03F4 - 0x03C8)
class ABP_Placement_Blocking_Sphere_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Physical_Materials;                                       // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Radius;                                                   // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Placement_Blocking_Sphere.BP_Placement_Blocking_Sphere_C"));
		return ptr;
	}


	void UserConstructionScript();
	void Set_Bomb_Parameters(float Radius, int Seed);
	void Interface_Trigger();
	void Delete_Overlapping_Placement();
	void ExecuteUbergraph_BP_Placement_Blocking_Sphere(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
