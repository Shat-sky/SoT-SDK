// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_WaterVolume_LH_WSP_Ext3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WaterVolume_LH_WSP_Ext3.BP_WaterVolume_LH_WSP_Ext3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WaterVolume_LH_WSP_Ext3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterVolume_LH_WSP_Ext3.BP_WaterVolume_LH_WSP_Ext3_C.UserConstructionScript");

	ABP_WaterVolume_LH_WSP_Ext3_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
