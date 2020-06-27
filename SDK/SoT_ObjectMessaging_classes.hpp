#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessaging_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ObjectMessaging.ObjectMessagingDispatcherInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectMessagingDispatcherInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ObjectMessaging.ObjectMessagingDispatcherInterface");
		return ptr;
	}

};


// Class ObjectMessaging.ObjectMessagingDispatcherComponent
// 0x00A8 (0x0170 - 0x00C8)
class UObjectMessagingDispatcherComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00C8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ObjectMessaging.ObjectMessagingDispatcherComponent");
		return ptr;
	}

};


// Class ObjectMessaging.ObjectMessagingInterface
// 0x0000 (0x0028 - 0x0028)
class UObjectMessagingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ObjectMessaging.ObjectMessagingInterface");
		return ptr;
	}

};


// Class ObjectMessaging.ObjectMessagingFunctions
// 0x0000 (0x0028 - 0x0028)
class UObjectMessagingFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ObjectMessaging.ObjectMessagingFunctions");
		return ptr;
	}


	void STATIC_UnregisterEventsForObject(class UObject* EventSource, struct FObjectMessagingObjectScoper* ObjectScoper);
	void STATIC_UnregisterEvents(struct FObjectMessagingObjectScoper* ObjectScoper);
	void STATIC_UnregisterEventFromHandle(struct FObjectMessagingDispatcherHandle* Dispatcher, struct FObjectMessagingHandle* Handle);
	void STATIC_UnregisterEvent(struct FObjectMessagingDispatcher* Dispatcher, struct FObjectMessagingHandle* Handle);
	void STATIC_RegisterEventWithObjectScoper(class UObject* EventSource, class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingObjectScoper* ObjectScoper);
	void STATIC_RegisterEventFromHandle(class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FObjectMessagingHandle* Handle);
	void STATIC_RegisterEvent(class UObject* FunctionOwner, const class FString& FunctionName, class UStruct* EventType, struct FObjectMessagingDispatcher* MessageDispatcher, struct FObjectMessagingHandle* Handle);
	bool STATIC_IsObjectMessagingDispatcherValid(struct FObjectMessagingDispatcherHandle* Handle);
	bool STATIC_IsHandleRegistered(struct FObjectMessagingHandle* Handle);
	struct FObjectMessagingDispatcherHandle STATIC_GetObjectMessagingDispatcherFromActor(class UObject* Object);
	struct FObjectMessagingDispatcherHandle STATIC_GetObjectMessagingDispatcher(const TScriptInterface<class UObjectMessagingDispatcherInterface>& ObjectMessagingDispatcher);
	void STATIC_FireEventWithDataFromHandle(class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FObjectMessagingDispatcherHandle* MessageDispatcher, struct FGenericStruct* Value);
	void STATIC_FireEventWithData(class UStruct* EventDataStruct, const class FString& Scope, const class FString& ScopeId, struct FObjectMessagingDispatcher* MessageDispatcher, struct FGenericStruct* Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
