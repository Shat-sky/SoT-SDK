#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_WorldLocationPopUpFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WorldLocationPopUpFramework.TaleAllowWorldLocationPopUpStep
// 0x0000 (0x0098 - 0x0098)
class UTaleAllowWorldLocationPopUpStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.TaleAllowWorldLocationPopUpStep"));
		return ptr;
	}

};


// Class WorldLocationPopUpFramework.TaleWorldLocationPopUpService
// 0x0030 (0x0090 - 0x0060)
class UTaleWorldLocationPopUpService : public UTaleQuestService
{
public:
	TArray<struct FTaleWorldLocationPopUpServiceEntry> SuppressedWorldLocationPopUpNearbyLocations;              // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0070(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.TaleWorldLocationPopUpService"));
		return ptr;
	}

};


// Class WorldLocationPopUpFramework.TaleWorldLocationPopUpServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleWorldLocationPopUpServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.TaleWorldLocationPopUpServiceDesc"));
		return ptr;
	}

};


// Class WorldLocationPopUpFramework.TaleAllowWorldLocationPopUpStepDesc
// 0x0038 (0x00B8 - 0x0080)
class UTaleAllowWorldLocationPopUpStepDesc : public UTaleQuestStepDesc
{
public:
	float                                              MaxDistanceFromWorldLocationPopUp;                        // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FQuestVariableActor                         NearbyActor;                                              // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.TaleAllowWorldLocationPopUpStepDesc"));
		return ptr;
	}

};


// Class WorldLocationPopUpFramework.TalePreventWorldLocationPopUpStep
// 0x0000 (0x0098 - 0x0098)
class UTalePreventWorldLocationPopUpStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.TalePreventWorldLocationPopUpStep"));
		return ptr;
	}

};


// Class WorldLocationPopUpFramework.TalePreventWorldLocationPopUpStepDesc
// 0x0038 (0x00B8 - 0x0080)
class UTalePreventWorldLocationPopUpStepDesc : public UTaleQuestStepDesc
{
public:
	bool                                               DisableEntireIsland;                                      // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              MaxDistanceFromWorldLocationPopUp;                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableVector                        NearbyLocation;                                           // 0x0088(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.TalePreventWorldLocationPopUpStepDesc"));
		return ptr;
	}

};


// Class WorldLocationPopUpFramework.WorldLocationPopUpComponent
// 0x0090 (0x0370 - 0x02E0)
class UWorldLocationPopUpComponent : public USceneComponent
{
public:
	class UWorldLocationPopUpDataAsset*                PopUpData;                                                // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UShapeComponent*                             LocationOverlapVolume;                                    // 0x02E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LocationCooldown;                                         // 0x02F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowPopUp;                                          // 0x02F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x63];                                      // 0x02F5(0x0063) MISSED OFFSET
	TArray<struct FGuid>                               SuppressedCrews;                                          // 0x0358(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.WorldLocationPopUpComponent"));
		return ptr;
	}


	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
};


// Class WorldLocationPopUpFramework.WorldLocationPopUpDataAsset
// 0x0058 (0x0080 - 0x0028)
class UWorldLocationPopUpDataAsset : public UDataAsset
{
public:
	struct FName                                       Id;                                                       // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FStringAssetReference                       BannerIcon;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       DisplayText;                                              // 0x0040(0x0038) (Edit, DisableEditOnInstance)
	class UPopUpAudioDesc*                             AudioOverride;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.WorldLocationPopUpDataAsset"));
		return ptr;
	}

};


// Class WorldLocationPopUpFramework.WorldLocationVisitorInterface
// 0x0000 (0x0028 - 0x0028)
class UWorldLocationVisitorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.WorldLocationVisitorInterface"));
		return ptr;
	}

};


// Class WorldLocationPopUpFramework.WorldLocationVisitorComponent
// 0x0040 (0x0108 - 0x00C8)
class UWorldLocationVisitorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	float                                              RevisitCooldown;                                          // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x00D4(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class WorldLocationPopUpFramework.WorldLocationVisitorComponent"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
