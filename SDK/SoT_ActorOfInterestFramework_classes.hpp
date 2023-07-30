#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ActorOfInterestFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UActorOfInterestBlueprintFunctionLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorOfInterestFramework.ActorOfInterestBlueprintFunctionLibrary"));
		return ptr;
	}


	static void GetActorsOfInterestFromIds(class UObject* WorldContextObject, TArray<class UClass*> ActorOfInterestIds, TArray<class AActor*>* Actors);
	static class AActor* GetActorOfInterestFromId(class UObject* WorldContextObject, class UClass* ActorOfInterestId);
};


// Class ActorOfInterestFramework.ActorOfInterestComponent
// 0x0020 (0x00E8 - 0x00C8)
class UActorOfInterestComponent : public UActorComponent
{
public:
	class UClass*                                      ActorOfInterestId;                                        // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorOfInterestFramework.ActorOfInterestComponent"));
		return ptr;
	}

};


// Class ActorOfInterestFramework.ActorOfInterestId
// 0x0000 (0x0028 - 0x0028)
class UActorOfInterestId : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorOfInterestFramework.ActorOfInterestId"));
		return ptr;
	}

};


// Class ActorOfInterestFramework.ActorOfInterestServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UActorOfInterestServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorOfInterestFramework.ActorOfInterestServiceInterface"));
		return ptr;
	}

};


// Class ActorOfInterestFramework.ActorOfInterestService
// 0x0100 (0x04C8 - 0x03C8)
class AActorOfInterestService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET
	TMap<class UClass*, struct FActorsOfInterestList>  ActorsOfInterest;                                         // 0x03D8(0x0050) (ZeroConstructor)
	struct FObjectMessagingDispatcher                  EventDispatcher;                                          // 0x0428(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ActorOfInterestFramework.ActorOfInterestService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
