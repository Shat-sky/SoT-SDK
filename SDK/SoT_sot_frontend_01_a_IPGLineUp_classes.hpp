#pragma once

// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_sot_frontend_01_a_IPGLineUp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C
// 0x0010 (0x0428 - 0x0418)
class Asot_frontend_01_a_IPGLineUp_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASkeletalMeshActor*                          shipSelect_CharMarker_ExecuteUbergraph_sot_frontend_01_a_IPGLineUp_RefProperty;// 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass sot_frontend_01_a_IPGLineUp.sot_frontend_01_a_IPGLineUp_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void showPlayerMarker();
	void hidePlayerMarker();
	void ExecuteUbergraph_sot_frontend_01_a_IPGLineUp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
