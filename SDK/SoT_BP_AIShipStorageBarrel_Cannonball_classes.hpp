#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AIShipStorageBarrel_Cannonball_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIShipStorageBarrel_Cannonball.BP_AIShipStorageBarrel_Cannonball_C
// 0x0018 (0x04E0 - 0x04C8)
class ABP_AIShipStorageBarrel_Cannonball_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                            // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTelemetrySubjectComponent*              ShipTelemetrySubject;                                     // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AIShipStorageBarrel_Cannonball.BP_AIShipStorageBarrel_Cannonball_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif