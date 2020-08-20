#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ItemQuality.EEmissaryQualityLevel
enum class EEmissaryQualityLevel : uint8_t
{
	EEmissaryQualityLevel__Invalid = 0,
	EEmissaryQualityLevel__Level2  = 1,
	EEmissaryQualityLevel__Level3  = 2,
	EEmissaryQualityLevel__Level4  = 3,
	EEmissaryQualityLevel__Level6  = 4,
	EEmissaryQualityLevel__Level7  = 5,
	EEmissaryQualityLevel__Level8  = 6,
	EEmissaryQualityLevel__EEmissaryQualityLevel_MAX = 7
};


// Enum ItemQuality.EHealthIndex
enum class EHealthIndex : uint8_t
{
	EHealthIndex__DontCare         = 0,
	EHealthIndex__Level2           = 1,
	EHealthIndex__Level3           = 2,
	EHealthIndex__Level4           = 3,
	EHealthIndex__Level6           = 4,
	EHealthIndex__Level7           = 5,
	EHealthIndex__MAX              = 6
};


// Enum ItemQuality.EStatusType
enum class EStatusType : uint8_t
{
	EStatusType__DontCare          = 0,
	EStatusType__No                = 1,
	EStatusType__EStatusType_MAX   = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ItemQuality.PerComanyItemQualityEntry
// 0x0010
struct FPerComanyItemQualityEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEmissaryQualityLevel>                 Quality;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ItemQuality.ComplexItemQualityEntry
// 0x0010
struct FComplexItemQualityEntry
{
	TEnumAsByte<EStatusType>                           OnTime;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHealthIndex>                          HealthLevel;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStatusType>                           IsComissioned;                                            // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStatusType>                           IsStolen;                                                 // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEmissaryQualityLevel>                 QualityLevel;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       Rarity;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ItemQuality.PerComanyComplexItemQualityEntry
// 0x0018
struct FPerComanyComplexItemQualityEntry
{
	class UClass*                                      Company;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FComplexItemQualityEntry>            QualityData;                                              // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
