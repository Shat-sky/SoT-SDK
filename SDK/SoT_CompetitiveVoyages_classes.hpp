#pragma once

// Sea of Thieves (2) SDK

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
// 0x00A8 (0x0470 - 0x03C8)
class ACompetitiveVoyagesService : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03C8(0x0038) MISSED OFFSET
	class UCompetitiveVoyagesServiceParams*            ServiceParams;                                            // 0x0400(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0408(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.CompetitiveVoyagesService"));
		return ptr;
	}

};


// Class CompetitiveVoyages.CompetitiveVoyagesServiceParams
// 0x0010 (0x0038 - 0x0028)
class UCompetitiveVoyagesServiceParams : public UDataAsset
{
public:
	class UVoyageDescDataAsset*                        OptInVoyageDesc;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UVoyageDescDataAsset*                        MainVoyageDesc;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.CompetitiveVoyagesServiceParams"));
		return ptr;
	}

};


// Class CompetitiveVoyages.SetCrewOptInNPCDataStep
// 0x0000 (0x0098 - 0x0098)
class USetCrewOptInNPCDataStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.SetCrewOptInNPCDataStep"));
		return ptr;
	}

};


// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesService
// 0x0040 (0x00A0 - 0x0060)
class UTaleQuestCompetitiveVoyagesService : public UTaleQuestService
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       PhasedMarkerManager;                                      // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPhasedMarkerItem>                   PhasedMarkerItems;                                        // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

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


// Class CompetitiveVoyages.SetCrewOptInNPCDataStepDesc
// 0x0030 (0x00B0 - 0x0080)
class USetCrewOptInNPCDataStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableActor                         Actor;                                                    // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.SetCrewOptInNPCDataStepDesc"));
		return ptr;
	}

};


// Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary
// 0x0000 (0x0180 - 0x0180)
class UTaleQuestCompetitiveVoyagesFunctionStepLibrary : public UTaleQuestFunctionStepLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CompetitiveVoyages.TaleQuestCompetitiveVoyagesFunctionStepLibrary"));
		return ptr;
	}


	void SetTreasureHuntItemFound(class AActor* FindingActor);
	void SetPhasedMarkerManager(class AActor* InMarkerManager);
	void SetMainVoyageState(TEnumAsByte<ECompetitiveVoyagesMainVoyageState> InState);
	void SetCompetitiveVoyageState(TEnumAsByte<ECompetitiveVoyagesState> InState);
	void RemovePhasedMarkerItem(class AActor* InItemInfo);
	void RemovePhasedMapMarker(class AActor* InItemInfo);
	int GetNumTreasureHuntItemsFound();
	TEnumAsByte<ECompetitiveVoyagesMainVoyageState> GetMainVoyageState();
	void CreatePhasedMapMarkerService(class UClass* InClass);
	void AddPhasedMarkerItem(class AActor* InItemInfo);
	void AddPhasedMapMarker(class AActor* InItemInfo);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
