#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FerretBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FerretBlueprint.MemFerretBlueprintInterface
// 0x0000 (0x0028 - 0x0028)
class UMemFerretBlueprintInterface : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class FerretBlueprint.MemFerretBlueprintInterface"));
		return ptr;
	}


	static void StopTracking();
	static class FString StopAndSave(const class FString& FileName);
	static void StopAllocTracking();
	static void StartTracking();
	static class FString Snapshot(const class FString& FileName, bool ShouldClearData);
	static void SetMemoryStatCollectionInterval(float CollectionInterval);
	static void Reset();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
