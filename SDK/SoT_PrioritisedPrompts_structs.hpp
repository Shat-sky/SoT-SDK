#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_PrioritisedPrompts_enums.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_PrioritisedPromptsFramework_classes.hpp"
#include "SoT_ObjectMessaging_classes.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrioritisedPrompts.PrioritisedPromptHandle
// 0x0010
struct FPrioritisedPromptHandle
{
	struct FGuid                                       Id;                                                       // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PrioritisedPrompts.PrioritisedPrompt
// 0x0060
struct FPrioritisedPrompt
{
	bool                                               UsePopupMessageDescForText;                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Message;                                                  // 0x0008(0x0038) (Edit, BlueprintVisible)
	class FString                                      Key;                                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UPopUpMessageDesc*                           PopUpMessageDesc;                                         // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPromptPriority>                       BasePriority;                                             // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMenuNavigationAction>                 MenuNavigation;                                           // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct PrioritisedPrompts.PrioritisedPromptWithHandle
// 0x0070
struct FPrioritisedPromptWithHandle
{
	struct FPrioritisedPromptHandle                    PromptHandle;                                             // 0x0000(0x0010)
	struct FPrioritisedPrompt                          Prompt;                                                   // 0x0010(0x0060) (Edit, BlueprintVisible)
};

// ScriptStruct PrioritisedPrompts.PromptEvaluation
// 0x0078
struct FPromptEvaluation
{
	TEnumAsByte<EPromptEvaluatedType>                  PromptType;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0008(0x0070) (BlueprintVisible)
};

// ScriptStruct PrioritisedPrompts.PermanentPromptNetworkEvent
// 0x0078 (0x0088 - 0x0010)
struct FPermanentPromptNetworkEvent : public FNetworkEventStruct
{
	struct FPrioritisedPromptWithHandle                Prompt;                                                   // 0x0010(0x0070)
	TEnumAsByte<EPromptStartStop>                      StartOrStop;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct PrioritisedPrompts.PromptsCounterIncrementEvent
// 0x0008
struct FPromptsCounterIncrementEvent
{
	class UClass*                                      AccessKey;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PrioritisedPrompts.PromptsServiceSetupEvent
// 0x0001
struct FPromptsServiceSetupEvent
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct PrioritisedPrompts.PlayerPromptTelemetryEvent
// 0x0020
struct FPlayerPromptTelemetryEvent
{
	class FString                                      Message;                                                  // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Key;                                                      // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
