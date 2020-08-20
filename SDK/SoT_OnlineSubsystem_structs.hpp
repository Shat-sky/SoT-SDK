#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystem.EOnlineStatsSuccess
enum class EOnlineStatsSuccess : uint8_t
{
	EOnlineStatsSuccess__Success   = 0,
	EOnlineStatsSuccess__InvalidStatId = 1,
	EOnlineStatsSuccess__InvalidArgument = 2,
	EOnlineStatsSuccess__InvalidUser = 3
};


// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Success   = 0,
	EInAppPurchaseState__Cancelled = 1,
	EInAppPurchaseState__Invalid   = 2,
	EInAppPurchaseState__NotAllowed = 3,
	EInAppPurchaseState__Unknown   = 4,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 5
};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Won           = 1,
	EMPMatchOutcome__Lost          = 2,
	EMPMatchOutcome__Tied          = 3,
	EMPMatchOutcome__First         = 4,
	EMPMatchOutcome__Second        = 5,
	EMPMatchOutcome__Third         = 6,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     InterfaceObject;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      InterfaceClassName;                                       // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A0
struct FInAppPurchaseProductInfo
{
	class FString                                      Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      TransactionIdentifier;                                    // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayName;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayDescription;                                       // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DisplayPrice;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      CurrencyCode;                                             // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      CurrencySymbol;                                           // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DecimalSeparator;                                         // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      GroupingSeparator;                                        // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ReceiptData;                                              // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0020
struct FInAppPurchaseRestoreInfo
{
	class FString                                      Identifier;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      ReceiptData;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.OnlineStoreCatalogItem
// 0x0090
struct FOnlineStoreCatalogItem
{
	class FString                                      ProductId;                                                // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Title;                                                    // 0x0010(0x0010) (ZeroConstructor)
	class FString                                      Description;                                              // 0x0020(0x0010) (ZeroConstructor)
	class FString                                      FormattedPrice;                                           // 0x0030(0x0010) (ZeroConstructor)
	class FString                                      FormattedBasePrice;                                       // 0x0040(0x0010) (ZeroConstructor)
	bool                                               IsOnSale;                                                 // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FDateTime                                   SaleEndDate;                                              // 0x0058(0x0008) (ZeroConstructor)
	class FString                                      ImageUri;                                                 // 0x0060(0x0010) (ZeroConstructor)
	class FString                                      CurrencyCode;                                             // 0x0070(0x0010) (ZeroConstructor)
	TArray<class FString>                              MetaTags;                                                 // 0x0080(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018
struct FInAppPurchaseProductRequest
{
	class FString                                      ProductIdentifier;                                        // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsConsumable;                                            // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
