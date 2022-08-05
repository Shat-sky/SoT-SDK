#pragma once

// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CustomServerLocalisation.LocPairData
// 0x0020
struct FLocPairData
{
	class FString                                      Locale;                                                   // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerLocalisation.CustomServerLocalisationData
// 0x0020
struct FCustomServerLocalisationData
{
	class FString                                      Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FLocPairData>                        LocaleEntries;                                            // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct CustomServerLocalisation.CustomServerLocalisationModel
// 0x0050
struct FCustomServerLocalisationModel
{
	TMap<class FString, struct FCustomServerLocalisationData> LocalisationModelData;                                    // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct CustomServerLocalisation.CustomServerClientData
// 0x0020
struct FCustomServerClientData
{
	class FString                                      Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
