#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Figurehead_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript
struct ABP_Figurehead_C_UserConstructionScript_Params
{
};

// Function BP_Figurehead.BP_Figurehead_C.OnPartMeshLoaded
struct ABP_Figurehead_C_OnPartMeshLoaded_Params
{
	class UStaticMesh*                                 Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Figurehead.BP_Figurehead_C.OnPartDescLoaded
struct ABP_Figurehead_C_OnPartDescLoaded_Params
{
	class UGenericPartDescAsset*                       Desc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Figurehead.BP_Figurehead_C.ExecuteUbergraph_BP_Figurehead
struct ABP_Figurehead_C_ExecuteUbergraph_BP_Figurehead_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
