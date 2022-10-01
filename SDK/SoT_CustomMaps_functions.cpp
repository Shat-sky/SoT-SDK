// Sea of Thieves (2.6.2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomMaps_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomMaps.CustomMap.OnRep_FontUpdated
// (Final, Native, Private)

void ACustomMap::OnRep_FontUpdated()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomMaps.CustomMap.OnRep_FontUpdated"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CustomMaps.CustomMap.OnRep_DisplayItem
// (Final, Native, Private)

void ACustomMap::OnRep_DisplayItem()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomMaps.CustomMap.OnRep_DisplayItem"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CustomMaps.CustomMap.OnMapItemsUpdate
// (Final, Native, Private)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ACustomMap::OnMapItemsUpdate(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function CustomMaps.CustomMap.OnMapItemsUpdate"));

	struct
	{
		class UCanvas*                 Canvas;
		int                            Width;
		int                            Height;
	} params;

	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
