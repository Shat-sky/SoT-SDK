#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_VFXStoryResponseManager_GoldenSands_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VFXStoryResponseManager_GoldenSands.BP_VFXStoryResponseManager_GoldenSands_C
// 0x0008 (0x0418 - 0x0410)
class ABP_VFXStoryResponseManager_GoldenSands_C : public AVfxStoryResponseManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_VFXStoryResponseManager_GoldenSands.BP_VFXStoryResponseManager_GoldenSands_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif