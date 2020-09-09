#pragma once

// Sea of Thieves (2.0.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessagingTests_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.TestFunctionWithEventData
struct UObjectMessagingListenerTestObject_TestFunctionWithEventData_Params
{
	struct FObjectMessagingEventTestData               InEventData;                                              // (Parm, OutParm)
};

// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.TestFunction
struct UObjectMessagingListenerTestObject_TestFunction_Params
{
	int                                                Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.InvalidEventFunctionWithReturn
struct UObjectMessagingListenerTestObject_InvalidEventFunctionWithReturn_Params
{
	struct FObjectMessagingEventTestData               InEventData;                                              // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.InvalidEventFunctionWithNoArguments
struct UObjectMessagingListenerTestObject_InvalidEventFunctionWithNoArguments_Params
{
};

// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.InvalidEventFunctionWithIncorrectArgument
struct UObjectMessagingListenerTestObject_InvalidEventFunctionWithIncorrectArgument_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
