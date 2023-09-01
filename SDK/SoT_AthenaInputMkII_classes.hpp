#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaInputMkII_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaInputMkII.AutoMoveInputComponent
// 0x0020 (0x0170 - 0x0150)
class UAutoMoveInputComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0150(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.AutoMoveInputComponent"));
		return ptr;
	}

};


// Class AthenaInputMkII.AthenaCharacterBaseInputComponent
// 0x0128 (0x0298 - 0x0170)
class UAthenaCharacterBaseInputComponent : public UAutoMoveInputComponent
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0170(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.AthenaCharacterBaseInputComponent"));
		return ptr;
	}

};


// Class AthenaInputMkII.AthenaCharacterBaseInputComponentWithInterference
// 0x0008 (0x02A0 - 0x0298)
class UAthenaCharacterBaseInputComponentWithInterference : public UAthenaCharacterBaseInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.AthenaCharacterBaseInputComponentWithInterference"));
		return ptr;
	}

};


// Class AthenaInputMkII.LookingAtWieldableInputComponent
// 0x0008 (0x02A0 - 0x0298)
class ULookingAtWieldableInputComponent : public UAthenaCharacterBaseInputComponent
{
public:
	class AActor*                                      TargetWieldable;                                          // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.LookingAtWieldableInputComponent"));
		return ptr;
	}

};


// Class AthenaInputMkII.MovementInterferenceComponent
// 0x0070 (0x01E0 - 0x0170)
class UMovementInterferenceComponent : public UAutoMoveInputComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0170(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.MovementInterferenceComponent"));
		return ptr;
	}

};


// Class AthenaInputMkII.ClampedFreelookXAnalogInputId
// 0x0000 (0x0038 - 0x0038)
class UClampedFreelookXAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.ClampedFreelookXAnalogInputId"));
		return ptr;
	}

};


// Class AthenaInputMkII.ClampedFreelookYAnalogInputId
// 0x0000 (0x0038 - 0x0038)
class UClampedFreelookYAnalogInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.ClampedFreelookYAnalogInputId"));
		return ptr;
	}

};


// Class AthenaInputMkII.ClampedFreelookMouseXInputId
// 0x0000 (0x0038 - 0x0038)
class UClampedFreelookMouseXInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.ClampedFreelookMouseXInputId"));
		return ptr;
	}

};


// Class AthenaInputMkII.ClampedFreelookMouseYInputId
// 0x0000 (0x0038 - 0x0038)
class UClampedFreelookMouseYInputId : public UAnalogInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInputMkII.ClampedFreelookMouseYInputId"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
