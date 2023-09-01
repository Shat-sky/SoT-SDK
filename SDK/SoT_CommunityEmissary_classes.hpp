#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CommunityEmissary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommunityEmissary.CommunityEmissaryFlagComponent
// 0x0030 (0x0650 - 0x0620)
class UCommunityEmissaryFlagComponent : public UStaticMeshComponent
{
public:
	class UCommunityEmissaryFlagData*                  CommunityEmissaryDataAsset;                               // 0x0620(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0628(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommunityEmissary.CommunityEmissaryFlagComponent"));
		return ptr;
	}


	void Multicast_UpdateCommunityEmissaryFlag(int FlagDataIndex);
};


// Class CommunityEmissary.CommunityEmissaryFlagData
// 0x0010 (0x0038 - 0x0028)
class UCommunityEmissaryFlagData : public UDataAsset
{
public:
	TArray<struct FCommunityFlagGradeData>             GradeData;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CommunityEmissary.CommunityEmissaryFlagData"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
