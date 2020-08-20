#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Damagers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Damagers.RadialDamagerComponent
// 0x0038 (0x0100 - 0x00C8)
class URadialDamagerComponent : public UActorComponent
{
public:
	float                                              DamageIntervalSeconds;                                    // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerSecondAtCentre;                                  // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerSecondAtMaxRadius;                               // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageRadius;                                             // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamagerType;                                              // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHealthChangedReason>                  HealthChangedReason;                                      // 0x00E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00E2(0x0002) MISSED OFFSET
	struct FVector                                     LocalOffset;                                              // 0x00E4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Damagers.RadialDamagerComponent"));
		return ptr;
	}


	void SetDamageRadius(float Radius);
	void EndDamage();
	void BeginDamage();
};


// Class Damagers.ShipDamagerComponent
// 0x0158 (0x0220 - 0x00C8)
class UShipDamagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         Shape;                                                    // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TScriptInterface<class UHullDamageInterface>> ShipHulls;                                                // 0x00D8(0x0010) (ZeroConstructor, Transient)
	TArray<TScriptInterface<class UHealthInterface>>   WatercraftHealthInterfaces;                               // 0x00E8(0x0010) (ZeroConstructor, Transient)
	struct FStrainDamage                               ShipStrainDamage;                                         // 0x00F8(0x0028) (Edit)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenWatercraftDamage;                              // 0x0120(0x0030) (Edit)
	float                                              WatercraftDamage;                                         // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xCC];                                      // 0x0154(0x00CC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class Damagers.ShipDamagerComponent"));
		return ptr;
	}


	void SetShape(class UPrimitiveComponent* InShape);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
