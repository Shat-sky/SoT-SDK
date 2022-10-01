// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_FerretBlueprint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FerretBlueprint.MemFerretBlueprintInterface.StopTracking
// (Final, Native, Static, Public, BlueprintCallable)

void UMemFerretBlueprintInterface::StopTracking()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FerretBlueprint.MemFerretBlueprintInterface.StopTracking"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FerretBlueprint.MemFerretBlueprintInterface.StopAndSave
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  FileName                       (Parm, ZeroConstructor)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMemFerretBlueprintInterface::StopAndSave(const class FString& FileName)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FerretBlueprint.MemFerretBlueprintInterface.StopAndSave"));

	struct
	{
		class FString                  FileName;
		class FString                  ReturnValue;
	} params;

	params.FileName = FileName;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FerretBlueprint.MemFerretBlueprintInterface.StopAllocTracking
// (Final, Native, Static, Public, BlueprintCallable)

void UMemFerretBlueprintInterface::StopAllocTracking()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FerretBlueprint.MemFerretBlueprintInterface.StopAllocTracking"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FerretBlueprint.MemFerretBlueprintInterface.StartTracking
// (Final, Native, Static, Public, BlueprintCallable)

void UMemFerretBlueprintInterface::StartTracking()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FerretBlueprint.MemFerretBlueprintInterface.StartTracking"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FerretBlueprint.MemFerretBlueprintInterface.Snapshot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  FileName                       (Parm, ZeroConstructor)
// bool                           ShouldClearData                (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UMemFerretBlueprintInterface::Snapshot(const class FString& FileName, bool ShouldClearData)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FerretBlueprint.MemFerretBlueprintInterface.Snapshot"));

	struct
	{
		class FString                  FileName;
		bool                           ShouldClearData;
		class FString                  ReturnValue;
	} params;

	params.FileName = FileName;
	params.ShouldClearData = ShouldClearData;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FerretBlueprint.MemFerretBlueprintInterface.SetMemoryStatCollectionInterval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          CollectionInterval             (Parm, ZeroConstructor, IsPlainOldData)

void UMemFerretBlueprintInterface::SetMemoryStatCollectionInterval(float CollectionInterval)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FerretBlueprint.MemFerretBlueprintInterface.SetMemoryStatCollectionInterval"));

	struct
	{
		float                          CollectionInterval;
	} params;

	params.CollectionInterval = CollectionInterval;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FerretBlueprint.MemFerretBlueprintInterface.Reset
// (Final, Native, Static, Public, BlueprintCallable)

void UMemFerretBlueprintInterface::Reset()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function FerretBlueprint.MemFerretBlueprintInterface.Reset"));

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
