#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SplinePathing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SplinePathing.FixedSplinePathingActor
// 0x0050 (0x0418 - 0x03C8)
class AFixedSplinePathingActor : public AActor
{
public:
	class USceneComponent*                             Root;                                                     // 0x03C8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UFakedBuoyancyComponent*                     FakedBuoyancyComponent;                                   // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Speed;                                                    // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class USplineComponent*                            FollowingSpline;                                          // 0x03E0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CanTick;                                                  // 0x03E8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x03E9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SplinePathing.FixedSplinePathingActor"));
		return ptr;
	}


	void SetSplineActor(class AActor* Actor);
	void OnRep_SplineActor();
	void OnRep_CanTick();
};


// Class SplinePathing.SplinePathingActor
// 0x00E8 (0x04B0 - 0x03C8)
class ASplinePathingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	struct FObjectMessagingDispatcher                  ObjectMessageDispatcher;                                  // 0x03D0(0x00A0) (BlueprintVisible)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0470(0x0010) MISSED OFFSET
	class USceneComponent*                             Root;                                                     // 0x0480(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0488(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Force;                                                    // 0x0490(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxVelocity;                                              // 0x0494(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceAlongSplineToTarget;                              // 0x0498(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DistanceFromDestination;                                  // 0x049C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x04A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SplinePathing.SplinePathingActor"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
