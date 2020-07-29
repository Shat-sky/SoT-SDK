#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_SlateCore_classes.hpp"
#include "SoT_MovieScene_classes.hpp"
#include "SoT_MovieSceneTracks_classes.hpp"
#include "SoT_Slate_classes.hpp"
#include "SoT_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	None                           = 1,
	IntProperty                    = 2,
	ESlateVisibility__SelfHitTestInvisible = 3,
	None01                         = 4
};


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown          = 0,
	None                           = 1,
	EDragPivot__CenterLeft         = 2,
	None01                         = 3,
	EDragPivot__BottomCenter       = 4,
	None02                         = 5,
	EIPGBlendType__NIX             = 6
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	None                           = 1
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	None                           = 1,
	EUMGSequencePlayMode__Forward  = 2
};


// Enum UMG.EDesignPreviewSizeMode
enum class EDesignPreviewSizeMode : uint8_t
{
	EDesignPreviewSizeMode__FillScreen = 0,
	None                           = 1,
	EDesignPreviewSizeMode__DesiredOnScreen = 2,
	None01                         = 3,
	EGameplayTaskState__Uninitialized = 4
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	None                           = 1,
	EBindingKind__Function         = 2
};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	None                           = 1
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	None                           = 1,
	EWidgetSpace__World            = 2
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.PropertyPathSegment
// 0x0020
struct FPropertyPathSegment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStruct*                                     Struct;                                                   // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UField*                                      Field;                                                    // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct UMG.DynamicPropertyPath
// 0x0010
struct FDynamicPropertyPath
{
	TArray<struct FPropertyPathSegment>                Segments;                                                 // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct UMG.WidgetTransform
// 0x001C
struct FWidgetTransform
{
	struct FVector2D                                   Translation;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Shear;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.EventReply
// 0x00E8
struct FEventReply
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

// ScriptStruct UMG.NamedSlotBinding
// 0x0010
struct FNamedSlotBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.PaintContext
// 0x0030
struct FPaintContext
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct UMG.AnchorData
// 0x0028
struct FAnchorData
{
	struct FMargin                                     Offsets;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FAnchors                                    Anchors;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FVector2D                                   Alignment;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UMG.SlateChildSize
// 0x0008
struct FSlateChildSize
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateSizeRule>                        SizeRule;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x0024
struct FWidgetAnimationBinding
{
	struct FName                                       WidgetName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotWidgetName;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       AnimationGuid;                                            // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsRootWidget;                                            // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x0038
struct FDelegateRuntimeBinding
{
	class FString                                      ObjectName;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       PropertyName;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0020(0x0010)
	TEnumAsByte<EBindingKind>                          Kind;                                                     // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct UMG.WidgetNavigationData
// 0x0014
struct FWidgetNavigationData
{
	TEnumAsByte<EUINavigationRule>                     Rule;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       WidgetToFocus;                                            // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x0368 (0x0380 - 0x0018)
struct FMovieScene2DTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FRichCurve                                  Translation[0x2];                                         // 0x0038(0x0078)
	struct FRichCurve                                  Rotation;                                                 // 0x0128(0x0078)
	struct FRichCurve                                  Scale[0x2];                                               // 0x01A0(0x0078)
	struct FRichCurve                                  Shear[0x2];                                               // 0x0290(0x0078)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x0200 (0x0218 - 0x0018)
struct FMovieSceneMarginSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                             // 0x0018(0x0020)
	struct FRichCurve                                  TopCurve;                                                 // 0x0038(0x0078)
	struct FRichCurve                                  LeftCurve;                                                // 0x00B0(0x0078)
	struct FRichCurve                                  RightCurve;                                               // 0x0128(0x0078)
	struct FRichCurve                                  BottomCurve;                                              // 0x01A0(0x0078)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0x0010 (0x0058 - 0x0048)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0048(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
