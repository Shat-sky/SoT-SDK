#pragma once

// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Liv_Bone_ColourClothingCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Liv_Bone_ColourClothingCategory.Liv_Bone_ColourClothingCategory_C
// 0x0000 (0x00A0 - 0x00A0)
class ULiv_Bone_ColourClothingCategory_C : public UClothingCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Liv_Bone_ColourClothingCategory.Liv_Bone_ColourClothingCategory_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
