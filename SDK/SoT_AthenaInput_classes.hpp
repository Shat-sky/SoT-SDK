#pragma once

// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_AthenaInput_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AthenaInput.NotificationInputId
// 0x0010 (0x0038 - 0x0028)
class UNotificationInputId : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.NotificationInputId"));
		return ptr;
	}

};


// Class AthenaInput.AnalogInputId
// 0x0010 (0x0038 - 0x0028)
class UAnalogInputId : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.AnalogInputId"));
		return ptr;
	}

};


// Class AthenaInput.OpenEscapeMenuNotificationInputId
// 0x0000 (0x0038 - 0x0038)
class UOpenEscapeMenuNotificationInputId : public UNotificationInputId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.OpenEscapeMenuNotificationInputId"));
		return ptr;
	}

};


// Class AthenaInput.ReceivesInputInterface
// 0x0000 (0x0028 - 0x0028)
class UReceivesInputInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class AthenaInput.ReceivesInputInterface"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
