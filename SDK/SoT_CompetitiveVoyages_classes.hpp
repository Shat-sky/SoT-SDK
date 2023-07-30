#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CompetitiveVoyages_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CompetitiveVoyages.CompetitiveVoyagesServiceInterface
// 0x0000 (0x0028 - 0x0028)
class UCompetitiveVoyagesServiceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.CompetitiveVoyagesServiceInterface"));
		return ptr;
	}

};


// Class CompetitiveVoyages.CompetitiveVoyagesService
// 0x0080 (0x0448 - 0x03C8)
class ACompetitiveVoyagesService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03C8(0x0038) MISSED OFFSET
	class UCompetitiveVoyagesServiceParams*            ServiceParams;                                            // 0x0400(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0408(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.CompetitiveVoyagesService"));
		return ptr;
	}

};


// Class CompetitiveVoyages.CompetitiveVoyagesServiceParams
// 0x0008 (0x0030 - 0x0028)
class UCompetitiveVoyagesServiceParams : public UDataAsset
{
public:
	class UVoyageDescDataAsset*                        VoyageDesc;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.CompetitiveVoyagesServiceParams"));
		return ptr;
	}

};


// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesService
// 0x0000 (0x0060 - 0x0060)
class UTaleQuestCompetitiveVoyagesService : public UTaleQuestService
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesService"));
		return ptr;
	}

};


// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesServiceDesc
// 0x0000 (0x0028 - 0x0028)
class UTaleQuestCompetitiveVoyagesServiceDesc : public UTaleQuestServiceDesc
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesServiceDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
