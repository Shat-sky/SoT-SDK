#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_CaptainsLog_Interactable_Proxy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CaptainsLog_Interactable_Proxy.BP_CaptainsLog_Interactable_Proxy_C
// 0x0008 (0x06A8 - 0x06A0)
class ABP_CaptainsLog_Interactable_Proxy_C : public ACaptainsLogbookInteractableProxy
{
public:
	class USceneComponent*                             PlayerPosition;                                           // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_CaptainsLog_Interactable_Proxy.BP_CaptainsLog_Interactable_Proxy_C"));
		return ptr;
	}


	struct FText GetObjectDisplayName();
	struct FDockableInfo GetDockableInfo();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
