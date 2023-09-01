#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ShipDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ShipDamage.DamageablePartsInterface
// 0x0000 (0x0028 - 0x0028)
class UDamageablePartsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.DamageablePartsInterface"));
		return ptr;
	}


	void UnregisterDamageablePart(class AActor* DamageableActor);
	void RegisterDamageablePart(class AActor* DamageableActor);
	TArray<class AActor*> GetDamageableParts();
};


// Class ShipDamage.GenericShipDamageablePart
// 0x0020 (0x03E8 - 0x03C8)
class AGenericShipDamageablePart : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	class UShipDamageableComponent*                    ShipDamageableComponent;                                  // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.GenericShipDamageablePart"));
		return ptr;
	}

};


// Class ShipDamage.HullDamageInterface
// 0x0000 (0x0028 - 0x0028)
class UHullDamageInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.HullDamageInterface"));
		return ptr;
	}

};


// Class ShipDamage.HullDamageProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UHullDamageProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.HullDamageProviderInterface"));
		return ptr;
	}

};


// Class ShipDamage.LandscapeDamagerType
// 0x0000 (0x0028 - 0x0028)
class ULandscapeDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.LandscapeDamagerType"));
		return ptr;
	}

};


// Class ShipDamage.ShipDamagerType
// 0x0000 (0x0028 - 0x0028)
class UShipDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.ShipDamagerType"));
		return ptr;
	}

};


// Class ShipDamage.ShipPartsDamageTrackerComponent
// 0x0008 (0x00D0 - 0x00C8)
class UShipPartsDamageTrackerComponent : public UActorComponent
{
public:
	int                                                IsAnyShipPartDamaged;                                     // 0x00C8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.ShipPartsDamageTrackerComponent"));
		return ptr;
	}

};


// Class ShipDamage.ShipRestorationSettings
// 0x0010 (0x0048 - 0x0038)
class UShipRestorationSettings : public UDeveloperSettings
{
public:
	float                                              MaxDistanceSquared;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	uint64_t                                           RestorationCooldown;                                      // 0x0040(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.ShipRestorationSettings"));
		return ptr;
	}

};


// Class ShipDamage.StrainDamagerType
// 0x0000 (0x0028 - 0x0028)
class UStrainDamagerType : public UDamagerType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ShipDamage.StrainDamagerType"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
