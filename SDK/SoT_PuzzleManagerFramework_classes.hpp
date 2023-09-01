#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PuzzleManagerFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PuzzleManagerFramework.PuzzleManager
// 0x0010 (0x03D8 - 0x03C8)
class APuzzleManager : public AActor
{
public:
	TArray<class UPuzzleManagerPolicy*>                PuzzleManagerPolicies;                                    // 0x03C8(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PuzzleManagerFramework.PuzzleManager"));
		return ptr;
	}


	void ResetAllPuzzles();
};


// Class PuzzleManagerFramework.PuzzleManagerPolicyInterface
// 0x0000 (0x0028 - 0x0028)
class UPuzzleManagerPolicyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PuzzleManagerFramework.PuzzleManagerPolicyInterface"));
		return ptr;
	}

};


// Class PuzzleManagerFramework.PuzzleManagerPolicy
// 0x00B8 (0x00E0 - 0x0028)
class UPuzzleManagerPolicy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class AActor*                                      PuzzleManager;                                            // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0040(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PuzzleManagerFramework.PuzzleManagerPolicy"));
		return ptr;
	}

};


// Class PuzzleManagerFramework.PuzzleManagerPolicyTriggerInterface
// 0x0000 (0x0028 - 0x0028)
class UPuzzleManagerPolicyTriggerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class PuzzleManagerFramework.PuzzleManagerPolicyTriggerInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
