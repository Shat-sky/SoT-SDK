#pragma once

// Sea of Thieves (2.0.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_LostShipmentsClueFramework_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LostShipmentsClueFramework.ClueSiteData
// 0x0000 (0x0028 - 0x0028)
class UClueSiteData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueSiteData"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueSiteType
// 0x0000 (0x0028 - 0x0028)
class UClueSiteType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueSiteType"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.LandClueCreator
// 0x0008 (0x0030 - 0x0028)
class ULandClueCreator : public UObject
{
public:
	class UObject*                                     WorldContextObject;                                       // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.LandClueCreator"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy
// 0x0000 (0x0028 - 0x0028)
class UClueChoiceSelectionStrategy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy
// 0x0008 (0x0030 - 0x0028)
class UFixedClueChoiceSelectionStrategy : public UClueChoiceSelectionStrategy
{
public:
	int                                                IndexToSelect;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDescriptor
// 0x0000 (0x0028 - 0x0028)
class UClueDescriptor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueDestinationDescriptor
// 0x0000 (0x0028 - 0x0028)
class UClueDestinationDescriptor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueDestinationDescriptor"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueFactoryConfig
// 0x0018 (0x0040 - 0x0028)
class UClueFactoryConfig : public UDataAsset
{
public:
	TArray<class ULandClueCreator*>                    LandClueCreators;                                         // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClueChoiceSelectionStrategy*                ChoiceStrategy;                                           // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueFactoryConfig"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.ClueFactory
// 0x0008 (0x0030 - 0x0028)
class UClueFactory : public UObject
{
public:
	class UClueFactoryConfig*                          Config;                                                   // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.ClueFactory"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestGenerateClueSiteOnIslandStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	class UClueFactoryConfig*                          ClueConfig;                                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestGenerateClueSiteOnIslandStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                               // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0040(0x0010) (Edit)
	class UClueFactoryConfig*                          ClueGenerationConfiguration;                              // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep
// 0x0028 (0x0090 - 0x0068)
class UTaleQuestIsClueOfTypeStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0068(0x0020) MISSED OFFSET
	class UClass*                                      ClueSiteTypeToMatchAgainst;                               // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep"));
		return ptr;
	}

};


// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc
// 0x0028 (0x0058 - 0x0030)
class UTaleQuestIsClueOfTypeStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      ClueSiteTypeToMatch;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuestVariableClueSite                      ClueSite;                                                 // 0x0038(0x0010) (Edit)
	struct FQuestVariableBool                          IsMatchingType;                                           // 0x0048(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
