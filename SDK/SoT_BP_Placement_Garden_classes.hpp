#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Placement_Garden_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Placement_Garden.BP_Placement_Garden_C
// 0x00A5 (0x046D - 0x03C8)
class ABP_Placement_Garden_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Spherical_Volume;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlacementGardenSeed>                Meshes;                                                   // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Radius;                                                   // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Radius_Visible;                                           // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	float                                              Spawn_Density;                                            // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spawn_Clustering;                                         // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	TArray<class UObject*>                             Physical_Materials;                                       // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Update_On_Drag;                                           // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	TArray<float>                                      Mesh_Probabilities;                                       // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInstancedStaticMeshComponent*>       Instanced_Meshes;                                         // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandomStream                               Random;                                                   // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Instance_Count;                                           // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        Mesh_Radii;                                               // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Max_Draw_Distance;                                        // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Cast_Shadows;                                             // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Placement_Garden.BP_Placement_Garden_C"));
		return ptr;
	}


	void Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created);
	void Create_Garden();
	void Initialise_Instances();
	void UserConstructionScript();
	void Force_Create_Garden();
	void ExecuteUbergraph_BP_Placement_Garden(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
