#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Tales_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LostShipmentsClueFramework.QuestVariableClueSite
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClueSite : public FQuestVariable
{

};

// ScriptStruct LostShipmentsClueFramework.ClueSite
// 0x0020
struct FClueSite
{
	class UClass*                                      SiteType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClueSiteData*                               SiteData;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct LostShipmentsClueFramework.LandClueCreationChoice
// 0x0018
struct FLandClueCreationChoice
{
	class UClass*                                      ClueSiteType;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       IslandIdentifier;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULandClueCreator*                            ClueCreator;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
