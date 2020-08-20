#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_GameServiceTests_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameServiceTests.GameModeWithServiceProviderGameState
// 0x0000 (0x0550 - 0x0550)
class AGameModeWithServiceProviderGameState : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.GameModeWithServiceProviderGameState"));
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UTestGameServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestGameServiceInterface"));
		return ptr;
	}

};


// Class GameServiceTests.TestGameService
// 0x0018 (0x0040 - 0x0028)
class UTestGameService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestGameService"));
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceRequiringUninitialisation
// 0x0010 (0x0038 - 0x0028)
class UTestGameServiceRequiringUninitialisation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestGameServiceRequiringUninitialisation"));
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceActorInterface
// 0x0000 (0x0028 - 0x0028)
class UTestGameServiceActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestGameServiceActorInterface"));
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceActor
// 0x0008 (0x0460 - 0x0458)
class ATestGameServiceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestGameServiceActor"));
		return ptr;
	}

};


// Class GameServiceTests.TestGameServiceProvider
// 0x0078 (0x00A0 - 0x0028)
class UTestGameServiceProvider : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestGameServiceProvider"));
		return ptr;
	}

};


// Class GameServiceTests.TestGameStateWithCollection
// 0x0060 (0x0510 - 0x04B0)
class ATestGameStateWithCollection : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestGameStateWithCollection"));
		return ptr;
	}

};


// Class GameServiceTests.TestGameStateWithObjectMessagingServiceProvider
// 0x00D8 (0x0630 - 0x0558)
class ATestGameStateWithObjectMessagingServiceProvider : public ATestGameStateWithObjectMessagingDispatcher
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0558(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestGameStateWithObjectMessagingServiceProvider"));
		return ptr;
	}

};


// Class GameServiceTests.TestServiceProviderGameInstance
// 0x0018 (0x00A0 - 0x0088)
class UTestServiceProviderGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	class UObject*                                     ServiceToReturn;                                          // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestServiceProviderGameInstance"));
		return ptr;
	}

};


// Class GameServiceTests.TestServiceProviderGameState
// 0x0018 (0x04C8 - 0x04B0)
class ATestServiceProviderGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET
	class UObject*                                     ServiceToReturn;                                          // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class GameServiceTests.TestServiceProviderGameState"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
