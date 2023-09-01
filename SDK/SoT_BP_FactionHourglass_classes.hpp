#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FactionHourglass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FactionHourglass.BP_FactionHourglass_C
// 0x00A0 (0x0560 - 0x04C0)
class ABP_FactionHourglass_C : public AFactionVoteInteractionActor
{
public:
	class UMaterialManipulationComponent*              MaterialManipulation;                                     // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosionComponent*                         Explosion;                                                // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFactionVoteAudioComponent*                  FactionVoteAudio;                                         // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFactionInteractionVoteComponent*            FactionInteractionVote;                                   // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        HourglassStand;                                           // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFactionParticleComponent*                   ParticlesFactionG;                                        // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFactionParticleComponent*                   ParticlesFactionB;                                        // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFactionFlipMeshComponent*                   FactionFlipMesh;                                          // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FH_VoteIndicator4;                                        // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PL_VoteIndicator4;                                        // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FH_VoteIndicator3;                                        // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PL_VoteIndicator3;                                        // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FH_VoteIndicator2;                                        // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PL_VoteIndicator2;                                        // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FH_VoteIndicator1;                                        // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PL_VoteIndicator1;                                        // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UEmissaryActiveTableVisualiserComponent*     EmissaryActiveTableVisualiser;                            // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshVoteVisualiserComponent*          StaticMeshVoteVisualiser;                                 // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UActionRulesComponent*                       ActionRules;                                              // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_FactionHourglass.BP_FactionHourglass_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
