#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ConditionalFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ConditionalFramework.ActorSpecifierInterface
// 0x0000 (0x0028 - 0x0028)
class UActorSpecifierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ConditionalFramework.ActorSpecifierInterface"));
		return ptr;
	}

};


// Class ConditionalFramework.ActorSpecifierComponent
// 0x0010 (0x00D8 - 0x00C8)
class UActorSpecifierComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	class AActor*                                      SpecifiedActor;                                           // 0x00D0(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ConditionalFramework.ActorSpecifierComponent"));
		return ptr;
	}

};


// Class ConditionalFramework.ConditionRootAsset
// 0x0020 (0x0048 - 0x0028)
class UConditionRootAsset : public UDataAsset
{
public:
	struct FConditionInstance                          ConditionRoot;                                            // 0x0028(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ConditionalFramework.ConditionRootAsset"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
