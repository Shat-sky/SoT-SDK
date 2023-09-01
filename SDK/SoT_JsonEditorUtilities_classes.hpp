#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_JsonEditorUtilities_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class JsonEditorUtilities.JsonUtilitiesBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UJsonUtilitiesBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class JsonEditorUtilities.JsonUtilitiesBlueprintHelperLibrary"));
		return ptr;
	}


	static bool UStructToJsonObjectString(const struct FGenericStruct& Struct, class FString* OutJsonString);
	static bool JsonObjectStringToUStruct(const class FString& InJsonString, const struct FGenericStruct& Struct);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
