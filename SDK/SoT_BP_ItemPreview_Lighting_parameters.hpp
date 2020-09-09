#pragma once

// Sea of Thieves (2.0.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ItemPreview_Lighting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.UserConstructionScript
struct ABP_ItemPreview_Lighting_C_UserConstructionScript_Params
{
};

// Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewReady__DelegateSignature
struct ABP_ItemPreview_Lighting_C_PreviewReady__DelegateSignature_Params
{
	struct FPiratePreviewReadyEvent                    Data;                                                     // (Parm)
};

// Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewBusy__DelegateSignature
struct ABP_ItemPreview_Lighting_C_PreviewBusy__DelegateSignature_Params
{
	struct FPiratePreviewBusyEvent                     Data;                                                     // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
