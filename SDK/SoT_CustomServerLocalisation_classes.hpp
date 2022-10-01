#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomServerLocalisation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomServerLocalisation.CustomServerLocalisationInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomServerLocalisationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomServerLocalisation.CustomServerLocalisationInterface"));
		return ptr;
	}

};


// Class CustomServerLocalisation.CustomServerLocalisationService
// 0x0098 (0x0460 - 0x03C8)
class ACustomServerLocalisationService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET
	TArray<struct FCustomServerLocalisationData>       LocalisationData;                                         // 0x03D0(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x80];                                      // 0x03E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomServerLocalisation.CustomServerLocalisationService"));
		return ptr;
	}


	void OnRep_GenerateLocalisationData();
	void BeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
