#pragma once

// Sea of Thieves (2.8.4) SDK

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
