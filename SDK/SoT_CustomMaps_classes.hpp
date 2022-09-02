#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_CustomMaps_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomMaps.CustomMapDisplayObjectBase
// 0x0010 (0x0038 - 0x0028)
class UCustomMapDisplayObjectBase : public UObject
{
public:
	struct FGuid                                       Guid;                                                     // 0x0028(0x0010) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapDisplayObjectBase"));
		return ptr;
	}

};


// Class CustomMaps.CustomMap
// 0x0030 (0x0860 - 0x0830)
class ACustomMap : public ARenderToTextureMapBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0830(0x0008) MISSED OFFSET
	class UFont*                                       Font;                                                     // 0x0838(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	TArray<class UCustomMapDisplayObjectBase*>         DisplayItems;                                             // 0x0840(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0850(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMap"));
		return ptr;
	}


	void OnRep_FontUpdated();
	void OnRep_DisplayItem();
	void OnMapItemsUpdate(class UCanvas* Canvas, int Width, int Height);
};


// Class CustomMaps.CustomMapCollectionInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomMapCollectionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapCollectionInterface"));
		return ptr;
	}

};


// Class CustomMaps.CustomMapDataTypeBase
// 0x0010 (0x0038 - 0x0028)
class UCustomMapDataTypeBase : public UObject
{
public:
	struct FGuid                                       Guid;                                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapDataTypeBase"));
		return ptr;
	}

};


// Class CustomMaps.CustomMapData
// 0x0020 (0x0048 - 0x0028)
class UCustomMapData : public UDataAsset
{
public:
	class UClass*                                      CustomMapItemDescClass;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFont*                                       Font;                                                     // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UCustomMapDataTypeBase*>              MapDisplayItemList;                                       // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapData"));
		return ptr;
	}

};


// Class CustomMaps.CustomMapDataTypePositional
// 0x0010 (0x0048 - 0x0038)
class UCustomMapDataTypePositional : public UCustomMapDataTypeBase
{
public:
	struct FVector2D                                   Position;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Orientation;                                              // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapDataTypePositional"));
		return ptr;
	}

};


// Class CustomMaps.CustomMapDisplayObjectPositional
// 0x0010 (0x0048 - 0x0038)
class UCustomMapDisplayObjectPositional : public UCustomMapDisplayObjectBase
{
public:
	struct FVector2D                                   Position;                                                 // 0x0038(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Orientation;                                              // 0x0040(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapDisplayObjectPositional"));
		return ptr;
	}

};


// Class CustomMaps.CustomMapDisplayObjectText
// 0x0090 (0x00D8 - 0x0048)
class UCustomMapDisplayObjectText : public UCustomMapDisplayObjectPositional
{
public:
	struct FText                                       Text;                                                     // 0x0048(0x0038) (Net)
	float                                              FontScale;                                                // 0x0080(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               StrikeThrough;                                            // 0x0084(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              StrikethroughThickness;                                   // 0x0088(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4C];                                      // 0x008C(0x004C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapDisplayObjectText"));
		return ptr;
	}

};


// Class CustomMaps.CustomMapDataTypeText
// 0x0048 (0x0090 - 0x0048)
class UCustomMapDataTypeText : public UCustomMapDataTypePositional
{
public:
	struct FText                                       Text;                                                     // 0x0048(0x0038) (Edit, DisableEditOnInstance)
	float                                              FontScale;                                                // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StrikeThrough;                                            // 0x0084(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	float                                              StrikethroughThickness;                                   // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapDataTypeText"));
		return ptr;
	}

};


// Class CustomMaps.CustomMapSettings
// 0x0008 (0x0040 - 0x0038)
class UCustomMapSettings : public UDeveloperSettings
{
public:
	class UClass*                                      CustomMapItemDescClass;                                   // 0x0038(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class CustomMaps.CustomMapSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
