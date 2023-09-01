#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_SafeZoneReservationFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SafeZoneReservationFramework.SafeZoneComponent
// 0x0150 (0x0730 - 0x05E0)
class USafeZoneComponent : public UCapsuleComponent
{
public:
	struct FScriptMulticastDelegate                    OnSafeZoneIsEmptyDelegate;                                // 0x05E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              ExclusionRadius;                                          // 0x05F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	float                                              ExclusionHeight;                                          // 0x05F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SafeZoneEmptyCollisionProfile;                            // 0x05FC(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoActivateSafeZone;                                     // 0x0604(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeactivateSafeZoneAfterExclusionRadiusIsEmpty;            // 0x0605(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePlayerTeleport;                                        // 0x0606(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0607(0x0001) MISSED OFFSET
	float                                              PlayerTeleportRadius;                                     // 0x0608(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x060C(0x0004) MISSED OFFSET
	bool                                               UseRepelForce;                                            // 0x0610(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0611(0x0003) MISSED OFFSET
	float                                              RepelForceRadius;                                         // 0x0614(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0618(0x0004) MISSED OFFSET
	float                                              RepelForceExtents;                                        // 0x061C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepelForceMin;                                            // 0x0620(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RepelForceMax;                                            // 0x0624(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ApplyRepelForceAtCentreOfMass;                            // 0x0628(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          RepelForceGradientCurve;                                  // 0x0630(0x0080) (Edit, DisableEditOnInstance)
	bool                                               UseAngularImpulse;                                        // 0x06B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	float                                              AngularImpulseRadius;                                     // 0x06B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x06B8(0x0004) MISSED OFFSET
	float                                              AngularImpulseForce;                                      // 0x06BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDeflectionAngle;                                    // 0x06C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSafeZoneEmpty;                                          // 0x06C4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               StopAISpawning;                                           // 0x06C5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x06C6(0x0002) MISSED OFFSET
	struct FName                                       CurrentCollisionProfile;                                  // 0x06C8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESafeZoneState>                        SafeZoneState;                                            // 0x06D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5F];                                      // 0x06D1(0x005F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class SafeZoneReservationFramework.SafeZoneComponent"));
		return ptr;
	}


	void SafeZoneIsEmpty__DelegateSignature();
	void OnRep_UpdateCollisionProfile();
	void OnRep_EmptyStateChanged();
	void DeactivateSafeZone();
	void DeactivateCollider();
	void ActivateSafeZone();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
