// Sea of Thieves (2.6.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_audio_wpn_shop_bsp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_audio_wpn_shop_bsp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_audio_wpn_shop_bsp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.ExecuteUbergraph_BP_audio_wpn_shop_bsp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_audio_wpn_shop_bsp_C::ExecuteUbergraph_BP_audio_wpn_shop_bsp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_audio_wpn_shop_bsp.BP_audio_wpn_shop_bsp_C.ExecuteUbergraph_BP_audio_wpn_shop_bsp"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
