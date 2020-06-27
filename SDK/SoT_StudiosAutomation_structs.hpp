#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum StudiosAutomation.EComparisonMethod
enum class EComparisonMethod : uint8_t
{
	EComparisonMethod__Equal_To    = 0,
	None                           = 1,
	EComparisonMethod__Greater_Than = 2,
	None01                         = 3,
	NameProperty                   = 4,
	ETestCategory__Unit            = 5
};


// Enum StudiosAutomation.ETestAutomationPlayModeOverride
enum class ETestAutomationPlayModeOverride : uint8_t
{
	ETestAutomationPlayModeOverride__Adventure = 0,
	None                           = 1,
	ETestAutomationPlayModeOverride__ETestAutomationPlayModeOverride_MAX = 2,
	ESelectionMode__None           = 3
};


// Enum StudiosAutomation.EPerformanceCaptureType
enum class EPerformanceCaptureType : uint8_t
{
	EPerformanceCaptureType__None  = 0,
	None                           = 1,
	EPerformanceCaptureType__EPerformanceCaptureType_MAX = 2,
	ETestAutomationPlayModeOverride__Adventure = 3
};


// Enum StudiosAutomation.ETestArea
enum class ETestArea : uint8_t
{
	ETestArea__None                = 0,
	None                           = 1,
	ETestArea__Art                 = 2,
	None01                         = 3,
	EFontHinting__Default          = 4
};


// Enum StudiosAutomation.ETestCategory
enum class ETestCategory : uint8_t
{
	ETestCategory__Unit            = 0,
	None                           = 1,
	ETestCategory__Soak            = 2,
	None01                         = 3,
	MovieScene3DPathSection_Axis__X = 4
};


// Enum StudiosAutomation.ECollectionAuditType
enum class ECollectionAuditType : uint8_t
{
	ECollectionAuditType__NoneSet  = 0,
	None                           = 1,
	ECollectionAuditType__AnimSequenceLimits = 2,
	None01                         = 3,
	ECollectionAuditType__ECollectionAuditType_MAX = 4,
	FunctionInput_Scalar           = 5,
	None02                         = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct StudiosAutomation.TestLevelMetadataEntry
// 0x0020
struct FTestLevelMetadataEntry
{
	class FString                                      Property;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct StudiosAutomation.ClientPawnDetails
// 0x0010
struct FClientPawnDetails
{
	TArray<class APawn*>                               Pawns;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct StudiosAutomation.SubstringAuditQueryData
// 0x0018
struct FSubstringAuditQueryData
{
	TArray<class FString>                              QueryStringArray;                                         // 0x0000(0x0010) (ZeroConstructor)
	int                                                SearchSetSize;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MemoryLimitForSet;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.FolderTotals
// 0x0028
struct FFolderTotals
{
	bool                                               EnforceCollectionMembership;                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               CollectionsAllowedForFolder;                              // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               AssetTypesToTest;                                         // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct StudiosAutomation.MeshAuditLimits
// 0x0038
struct FMeshAuditLimits
{
	TArray<struct FSubstringAuditQueryData>            SubstringQueries;                                         // 0x0000(0x0010) (ZeroConstructor)
	struct FFolderTotals                               FolderMeshLimits;                                         // 0x0010(0x0028)
};

// ScriptStruct StudiosAutomation.AssetAuditConstantEntry
// 0x0018
struct FAssetAuditConstantEntry
{
	class FString                                      Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                Value;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct StudiosAutomation.AssetAuditConstants
// 0x0010
struct FAssetAuditConstants
{
	TArray<struct FAssetAuditConstantEntry>            AssetAuditConstants;                                      // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct StudiosAutomation.CollectionTotalsLimits
// 0x0010
struct FCollectionTotalsLimits
{
	int                                                MaxTotalVerts;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTotalMemory;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MostExpensiveAssetsSetSize;                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ExpensiveAssetSetMaxTotalMemory;                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.CollectionMeshLimitsBase
// 0x0008
struct FCollectionMeshLimitsBase
{
	int                                                MaxVerts;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxMemory;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.CollectionStaticMeshLimits
// 0x0000 (0x0008 - 0x0008)
struct FCollectionStaticMeshLimits : public FCollectionMeshLimitsBase
{

};

// ScriptStruct StudiosAutomation.CollectionSkeleMeshLimits
// 0x0000 (0x0008 - 0x0008)
struct FCollectionSkeleMeshLimits : public FCollectionMeshLimitsBase
{

};

// ScriptStruct StudiosAutomation.CollectionAnimSequenceLimits
// 0x0004
struct FCollectionAnimSequenceLimits
{
	int                                                MaxMemory;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct StudiosAutomation.CollectionLimits
// 0x0034
struct FCollectionLimits
{
	struct FName                                       CollectionName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<ECollectionAuditType>                  AuditType;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnlyParentCollection;                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	struct FCollectionTotalsLimits                     CollectionTotals;                                         // 0x000C(0x0010) (Edit)
	struct FCollectionStaticMeshLimits                 StaticMeshLimits;                                         // 0x001C(0x0008) (Edit)
	struct FCollectionSkeleMeshLimits                  SkeleMeshLimits;                                          // 0x0024(0x0008) (Edit)
	struct FCollectionAnimSequenceLimits               AnimLimits;                                               // 0x002C(0x0004) (Edit)
	bool                                               CanUseComplexCollisionAsSimple;                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CanUseLOD0Collision;                                      // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
};

// ScriptStruct StudiosAutomation.CollectionLimitsArray
// 0x0010
struct FCollectionLimitsArray
{
	TArray<struct FCollectionLimits>                   CollectionLimits;                                         // 0x0000(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
