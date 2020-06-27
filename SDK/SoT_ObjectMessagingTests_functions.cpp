// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ObjectMessagingTests_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.TestFunctionWithEventData
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FObjectMessagingEventTestData InEventData                    (Parm, OutParm)

void UObjectMessagingListenerTestObject::TestFunctionWithEventData(struct FObjectMessagingEventTestData* InEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessagingTests.ObjectMessagingListenerTestObject.TestFunctionWithEventData");

	UObjectMessagingListenerTestObject_TestFunctionWithEventData_Params params;

	UObject::ProcessEvent(fn, &params);

	if (InEventData != nullptr)
		*InEventData = params.InEventData;
}


// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.TestFunction
// (Final, Native, Public)
// Parameters:
// int                            Data                           (Parm, ZeroConstructor, IsPlainOldData)

void UObjectMessagingListenerTestObject::TestFunction(int Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessagingTests.ObjectMessagingListenerTestObject.TestFunction");

	UObjectMessagingListenerTestObject_TestFunction_Params params;
	params.Data = Data;

	UObject::ProcessEvent(fn, &params);
}


// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.InvalidEventFunctionWithReturn
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FObjectMessagingEventTestData InEventData                    (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UObjectMessagingListenerTestObject::InvalidEventFunctionWithReturn(struct FObjectMessagingEventTestData* InEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessagingTests.ObjectMessagingListenerTestObject.InvalidEventFunctionWithReturn");

	UObjectMessagingListenerTestObject_InvalidEventFunctionWithReturn_Params params;

	UObject::ProcessEvent(fn, &params);

	if (InEventData != nullptr)
		*InEventData = params.InEventData;

	return params.ReturnValue;
}


// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.InvalidEventFunctionWithNoArguments
// (Final, Native, Public)

void UObjectMessagingListenerTestObject::InvalidEventFunctionWithNoArguments()
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessagingTests.ObjectMessagingListenerTestObject.InvalidEventFunctionWithNoArguments");

	UObjectMessagingListenerTestObject_InvalidEventFunctionWithNoArguments_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function ObjectMessagingTests.ObjectMessagingListenerTestObject.InvalidEventFunctionWithIncorrectArgument
// (Final, Native, Public)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UObjectMessagingListenerTestObject::InvalidEventFunctionWithIncorrectArgument(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObjectMessagingTests.ObjectMessagingListenerTestObject.InvalidEventFunctionWithIncorrectArgument");

	UObjectMessagingListenerTestObject_InvalidEventFunctionWithIncorrectArgument_Params params;
	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
