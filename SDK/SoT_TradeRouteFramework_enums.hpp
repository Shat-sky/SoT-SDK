#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TradeRouteFramework.ETradeRouteMapOrientation
enum class ETradeRouteMapOrientation : uint8_t
{
	ETradeRouteMapOrientation__Landscape = 0,
	ETradeRouteMapOrientation__Portrait = 1,
	ETradeRouteMapOrientation__ETradeRouteMapOrientation_MAX = 2
};


// Enum TradeRouteFramework.ETradeRouteMappingFilter
enum class ETradeRouteMappingFilter : uint8_t
{
	ETradeRouteMappingFilter__MainSeas = 0,
	ETradeRouteMappingFilter__DVR  = 1,
	ETradeRouteMappingFilter__ETradeRouteMappingFilter_MAX = 2
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
