#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_EnchantedCompass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EnchantedCompass.MultiTargetEnchantedCompass
// 0x0010 (0x0890 - 0x0880)
class AMultiTargetEnchantedCompass : public ACompass
{
public:
	class UInventoryItemComponent*                     InventoryItem;                                            // 0x0880(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0888(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EnchantedCompass.MultiTargetEnchantedCompass");
		return ptr;
	}


	float CalculateDesiredYaw(const struct FRotator& CompassRotation);
};


// Class EnchantedCompass.TaleQuestSetCompassTargetToActorStep
// 0x0018 (0x0080 - 0x0068)
class UTaleQuestSetCompassTargetToActorStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EnchantedCompass.TaleQuestSetCompassTargetToActorStep");
		return ptr;
	}

};


// Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc
// 0x0018 (0x0048 - 0x0030)
class UTaleQuestSetCompassTargetToActorStepDesc : public UTaleQuestStepDesc
{
public:
	TEnumAsByte<ETargetUpdateReason>                   TargetUpdateReason;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FQuestVariableActor                         TargetActor;                                              // 0x0038(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
