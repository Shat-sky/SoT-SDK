// Sea of Thieves (2.8.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostSands_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LostSands.LostSandsRowboatGunpowderBarrel.IsFuseEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALostSandsRowboatGunpowderBarrel::IsFuseEnabled()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostSands.LostSandsRowboatGunpowderBarrel.IsFuseEnabled"));

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LostSands.LostSandsRowboatGunpowderBarrel.IsExplosionAtGoldenSandsOutpost
// (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 InLocation                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALostSandsRowboatGunpowderBarrel::IsExplosionAtGoldenSandsOutpost(const struct FVector& InLocation)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostSands.LostSandsRowboatGunpowderBarrel.IsExplosionAtGoldenSandsOutpost"));

	struct
	{
		struct FVector                 InLocation;
		bool                           ReturnValue;
	} params;

	params.InLocation = InLocation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function LostSands.LostSandsRowboatGunpowderBarrel.EnableFuse
// (Final, RequiredAPI, Native, Public, BlueprintCallable)

void ALostSandsRowboatGunpowderBarrel::EnableFuse()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostSands.LostSandsRowboatGunpowderBarrel.EnableFuse"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function LostSands.LostSandsRowboatGunpowderBarrel.DisableFuse
// (Final, RequiredAPI, Native, Public, BlueprintCallable)

void ALostSandsRowboatGunpowderBarrel::DisableFuse()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function LostSands.LostSandsRowboatGunpowderBarrel.DisableFuse"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
