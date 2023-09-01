#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_RareGameService_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RareGameService.RareGameServiceInterface
// 0x0000 (0x0028 - 0x0028)
class URareGameServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareGameService.RareGameServiceInterface"));
		return ptr;
	}

};


// Class RareGameService.RareGameServiceProviderInterface
// 0x0000 (0x0028 - 0x0028)
class URareGameServiceProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareGameService.RareGameServiceProviderInterface"));
		return ptr;
	}


	void UnregisterRareGameService(class UObject* Service);
	bool RegisterRareGameService(class UObject* Service, class UClass* Class);
	class UObject* GetRareGameService(class UClass* Class);
};


// Class RareGameService.RareGameServiceManagerComponent
// 0x0068 (0x0130 - 0x00C8)
class URareGameServiceManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
	TArray<class UObject*>                             ReplicatedServices;                                       // 0x00D0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET
	TArray<struct FRareGameServiceSpecification>       ServiceSpecifications;                                    // 0x0120(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class RareGameService.RareGameServiceManagerComponent"));
		return ptr;
	}


	void OnRep_ReplicatedServices();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
