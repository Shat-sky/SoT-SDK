#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AIActionFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AIActionFramework.AIActionActivity
// 0x0000 (0x0028 - 0x0028)
class UAIActionActivity : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionActivity"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionActivity_Follow
// 0x0000 (0x0028 - 0x0028)
class UAIActionActivity_Follow : public UAIActionActivity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionActivity_Follow"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionActivity_Idle
// 0x0000 (0x0028 - 0x0028)
class UAIActionActivity_Idle : public UAIActionActivity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionActivity_Idle"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionActivity_Quest
// 0x0000 (0x0028 - 0x0028)
class UAIActionActivity_Quest : public UAIActionActivity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionActivity_Quest"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionContextTag
// 0x0000 (0x0028 - 0x0028)
class UAIActionContextTag : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionContextTag"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionInstigatorInterface
// 0x0000 (0x0028 - 0x0028)
class UAIActionInstigatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionInstigatorInterface"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionInstigatorComponent
// 0x0028 (0x00F0 - 0x00C8)
class UAIActionInstigatorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<class UClass*>                              CurrentRoles;                                             // 0x00D0(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      InitialActivity;                                          // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CurrentActivity;                                          // 0x00E8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionInstigatorComponent"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionRole
// 0x0000 (0x0028 - 0x0028)
class UAIActionRole : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionRole"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionSpotInterface
// 0x0000 (0x0028 - 0x0028)
class UAIActionSpotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionSpotInterface"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionSpotComponent
// 0x0058 (0x0120 - 0x00C8)
class UAIActionSpotComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<class UClass*>                              SupportedRoles;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              SupportedActivities;                                      // 0x00E0(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              ContextTags;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      CustomAnimInstance;                                       // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0108(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionSpotComponent"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionSpotServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIActionSpotServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionSpotServiceInterface"));
		return ptr;
	}

};


// Class AIActionFramework.AIActionSpotService
// 0x0068 (0x0090 - 0x0028)
class UAIActionSpotService : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AIActionFramework.AIActionSpotService"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
