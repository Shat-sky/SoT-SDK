#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NPCInteractResponse_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NPCInteractResponse.InteractResponseType
// 0x0000 (0x0028 - 0x0028)
class UInteractResponseType : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NPCInteractResponse.InteractResponseType"));
		return ptr;
	}

};


// Class NPCInteractResponse.DefaultInteractResponseType
// 0x0000 (0x0028 - 0x0028)
class UDefaultInteractResponseType : public UInteractResponseType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NPCInteractResponse.DefaultInteractResponseType"));
		return ptr;
	}

};


// Class NPCInteractResponse.PositiveInteractResponseType
// 0x0000 (0x0028 - 0x0028)
class UPositiveInteractResponseType : public UInteractResponseType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NPCInteractResponse.PositiveInteractResponseType"));
		return ptr;
	}

};


// Class NPCInteractResponse.NegativeInteractResponseType
// 0x0000 (0x0028 - 0x0028)
class UNegativeInteractResponseType : public UInteractResponseType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NPCInteractResponse.NegativeInteractResponseType"));
		return ptr;
	}

};


// Class NPCInteractResponse.NPCInteractAnimResponseDataAsset
// 0x0010 (0x0038 - 0x0028)
class UNPCInteractAnimResponseDataAsset : public UDataAsset
{
public:
	TArray<struct FNPCInteractResponseStruct>          NPCInteractResponseAnimData;                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NPCInteractResponse.NPCInteractAnimResponseDataAsset"));
		return ptr;
	}

};


// Class NPCInteractResponse.NPCInteractResponseAnimationInstanceInterface
// 0x0000 (0x0028 - 0x0028)
class UNPCInteractResponseAnimationInstanceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NPCInteractResponse.NPCInteractResponseAnimationInstanceInterface"));
		return ptr;
	}

};


// Class NPCInteractResponse.NPCInteractResponseInterface
// 0x0000 (0x0028 - 0x0028)
class UNPCInteractResponseInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NPCInteractResponse.NPCInteractResponseInterface"));
		return ptr;
	}

};


// Class NPCInteractResponse.NPCInteractResponseComponent
// 0x0008 (0x00D0 - 0x00C8)
class UNPCInteractResponseComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NPCInteractResponse.NPCInteractResponseComponent"));
		return ptr;
	}

};


// Class NPCInteractResponse.NPCInteractResponseDialogInterface
// 0x0000 (0x0028 - 0x0028)
class UNPCInteractResponseDialogInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class NPCInteractResponse.NPCInteractResponseDialogInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
