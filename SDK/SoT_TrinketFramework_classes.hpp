#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_TrinketFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TrinketFramework.TrinketLoadoutFinderPolicyBase
// 0x0000 (0x0028 - 0x0028)
class UTrinketLoadoutFinderPolicyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.TrinketLoadoutFinderPolicyBase"));
		return ptr;
	}

};


// Class TrinketFramework.TrinketAudioInterface
// 0x0000 (0x0028 - 0x0028)
class UTrinketAudioInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.TrinketAudioInterface"));
		return ptr;
	}

};


// Class TrinketFramework.TrinketCategory
// 0x0000 (0x0078 - 0x0078)
class UTrinketCategory : public UCategoryBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.TrinketCategory"));
		return ptr;
	}

};


// Class TrinketFramework.InvalidTrinketCategory
// 0x0000 (0x0078 - 0x0078)
class UInvalidTrinketCategory : public UTrinketCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.InvalidTrinketCategory"));
		return ptr;
	}

};


// Class TrinketFramework.TrinketDesc
// 0x0030 (0x00F8 - 0x00C8)
class UTrinketDesc : public UEntitlementDesc
{
public:
	struct FStringClassReference                       TrinketClass;                                             // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringClassReference                       PreviousItem;                                             // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FStringClassReference                       NextItem;                                                 // 0x00E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.TrinketDesc"));
		return ptr;
	}

};


// Class TrinketFramework.TrinketLoadoutControlInterface
// 0x0000 (0x0028 - 0x0028)
class UTrinketLoadoutControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.TrinketLoadoutControlInterface"));
		return ptr;
	}

};


// Class TrinketFramework.SameActorTrinketLoadoutFinderPolicy
// 0x0010 (0x0038 - 0x0028)
class USameActorTrinketLoadoutFinderPolicy : public UTrinketLoadoutFinderPolicyBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.SameActorTrinketLoadoutFinderPolicy"));
		return ptr;
	}

};


// Class TrinketFramework.TrinketLoadoutViewInterface
// 0x0000 (0x0028 - 0x0028)
class UTrinketLoadoutViewInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.TrinketLoadoutViewInterface"));
		return ptr;
	}

};


// Class TrinketFramework.TrinketReplacementActor
// 0x0010 (0x03D8 - 0x03C8)
class ATrinketReplacementActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.TrinketReplacementActor"));
		return ptr;
	}


	void RegisterTrinketReplacementMesh(class AActor* ActorWithTrinkets, class UStaticMeshComponent* ReplacementMesh);
};


// Class TrinketFramework.TrinketSetControlInterface
// 0x0000 (0x0028 - 0x0028)
class UTrinketSetControlInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.TrinketSetControlInterface"));
		return ptr;
	}

};


// Class TrinketFramework.TrinketSfxDataAsset
// 0x0020 (0x0048 - 0x0028)
class UTrinketSfxDataAsset : public UDataAsset
{
public:
	class UWwiseEvent*                                 MountSfx;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 RemoveSfx;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 NudgeSfx;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 StraightenSfx;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TrinketFramework.TrinketSfxDataAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
