#pragma once

// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum EmissaryFramework.EEmisaryCompanyActionType
enum class EEmisaryCompanyActionType : uint8_t
{
	EEmisaryCompanyActionType__CompleteRiddleStep = 0,
	EEmisaryCompanyActionType__CompleteRiddleQuest = 1,
	EEmisaryCompanyActionType__CompleteXMarksTheSpotQuest = 2,
	EEmisaryCompanyActionType__DefeatNamedSkeleton = 3,
	EEmisaryCompanyActionType__CompleteBountyQuest = 4,
	EEmisaryCompanyActionType__CompleteCargoRunStep = 5,
	EEmisaryCompanyActionType__CompleteCargoRunQuest = 6,
	EEmisaryCompanyActionType__CompleteMerchantStep = 7,
	EEmisaryCompanyActionType__CompleteMerchantQuest = 8,
	EEmisaryCompanyActionType__CompleteGhostShipQuest = 9,
	EEmisaryCompanyActionType__MapPieceFound = 10,
	EEmisaryCompanyActionType__CompleteWayfinderVoyage = 11,
	EEmisaryCompanyActionType__DiscoveredLostShipmentsClue = 12,
	EEmisaryCompanyActionType__CompleteLostShipmentsVoyage = 13,
	EEmisaryCompanyActionType__CompleteLegendOfTheVeilVoyage = 14,
	EEmisaryCompanyActionType__CaughtFish = 15,
	EEmisaryCompanyActionType__CompletedTallTale = 16,
	EEmisaryCompanyActionType__CompletedTreasury = 17,
	EEmisaryCompanyActionType__CookedDish = 18,
	EEmisaryCompanyActionType__EEmisaryCompanyActionType_MAX = 19
};


// Enum EmissaryFramework.EEmisaryFactionActionType
enum class EEmisaryFactionActionType : uint8_t
{
	EEmisaryFactionActionType__SinkOpposingShip = 0,
	EEmisaryFactionActionType__EEmisaryFactionActionType_MAX = 1
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
