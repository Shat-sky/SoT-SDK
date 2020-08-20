#pragma once

// Sea of Thieves (2.0.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_Constant                   = 1,
	CIM_CurveUser                  = 2,
	CIM_CurveBreak                 = 3,
	CIM_MAX                        = 4
};


// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive    = 0,
	ERangeBoundTypes__Open         = 1,
	ERangeBoundTypes__ERangeBoundTypes_MAX = 2
};


// Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	EUnit__Micrometers             = 0,
	EUnit__Centimeters             = 1,
	EUnit__Meters                  = 2,
	EUnit__Kilometers              = 3,
	EUnit__Feet                    = 4,
	EUnit__Yards                   = 5,
	EUnit__Miles                   = 6,
	EUnit__Degrees                 = 7,
	EUnit__Radians                 = 8,
	EUnit__MetersPerSecond         = 9,
	EUnit__MilesPerHour            = 10,
	EUnit__Celsius                 = 11,
	EUnit__Farenheit               = 12,
	EUnit__Micrograms              = 13,
	EUnit__Milligrams              = 14,
	EUnit__Grams                   = 15,
	EUnit__MetricTons              = 16,
	EUnit__Ounces                  = 17,
	EUnit__Pounds                  = 18,
	EUnit__Newtons                 = 19,
	EUnit__PoundsForce             = 20,
	EUnit__KilogramsForce          = 21,
	EUnit__Kilohertz               = 22,
	EUnit__Megahertz               = 23,
	EUnit__Gigahertz               = 24,
	EUnit__Bytes                   = 25,
	EUnit__Kilobytes               = 26,
	EUnit__Megabytes               = 27,
	EUnit__Terabytes               = 28,
	EUnit__Lumens                  = 29,
	EUnit__Milliseconds            = 30,
	EUnit__Minutes                 = 31,
	EUnit__Hours                   = 32,
	EUnit__Days                    = 33,
	EUnit__Years                   = 34,
	EUnit__Unspecified             = 35,
	EUnit__EUnit_MAX               = 36
};


// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	EMouseCursor__None             = 0,
	EMouseCursor__TextEditBeam     = 1,
	EMouseCursor__ResizeLeftRight  = 2,
	EMouseCursor__ResizeUpDown     = 3,
	EMouseCursor__ResizeSouthWest  = 4,
	EMouseCursor__CardinalCross    = 5,
	EMouseCursor__Crosshairs       = 6,
	EMouseCursor__GrabHand         = 7,
	EMouseCursor__GrabHandClosed   = 8,
	EMouseCursor__SlashedCircle    = 9,
	EMouseCursor__EMouseCursor_MAX = 10
};


// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_B8G8R8A8                    = 1,
	PF_G8                          = 2,
	PF_G16                         = 3,
	PF_DXT3                        = 4,
	PF_DXT5                        = 5,
	PF_UYVY                        = 6,
	PF_FloatRGBA                   = 7,
	PF_DepthStencil                = 8,
	PF_ShadowDepth                 = 9,
	PF_G16R16                      = 10,
	PF_G16R16F                     = 11,
	PF_G16R16F_FILTER              = 12,
	PF_A2B10G10R10                 = 13,
	PF_A16B16G16R16                = 14,
	PF_D24                         = 15,
	PF_R16F_FILTER                 = 16,
	PF_BC5                         = 17,
	PF_V8U8                        = 18,
	PF_FloatR11G11B10              = 19,
	PF_A8                          = 20,
	PF_R32_UINT                    = 21,
	PF_PVRTC2                      = 22,
	PF_PVRTC4                      = 23,
	PF_R16_UINT                    = 24,
	PF_R16G16B16A16_UINT           = 25,
	PF_R16G16B16A16_SINT           = 26,
	PF_R5G6B5_UNORM                = 27,
	PF_A8R8G8B8                    = 28,
	PF_BC4                         = 29,
	PF_R8G8                        = 30,
	PF_ATC_RGBA_E                  = 31,
	PF_ATC_RGBA_I                  = 32,
	PF_X24_G8                      = 33,
	PF_ETC2_RGB                    = 34,
	PF_ETC2_RGBA                   = 35,
	PF_R32G32B32A32_UINT           = 36,
	PF_ASTC_4x4                    = 37,
	PF_ASTC_6x6                    = 38,
	PF_ASTC_8x8                    = 39,
	PF_ASTC_12x12                  = 40,
	PF_BC6H                        = 41,
	PF_BC7                         = 42,
	PF_BC6H_SF16                   = 43,
	PF_BC6H_UF16                   = 44,
	PF_R32G32_SINT                 = 45,
	PF_Depth                       = 46,
	PF_MAX                         = 47
};


// Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	EAxis__None                    = 0,
	EAxis__Y                       = 1,
	EAxis__Z                       = 2,
	EAxis__EAxis_MAX               = 3
};


// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	ELogTimes__None                = 0,
	ELogTimes__SinceGStartTime     = 1,
	ELogTimes__ELogTimes_MAX       = 2
};


// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	ESearchDir__FromStart          = 0,
	ESearchDir__ESearchDir_MAX     = 1
};


// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive     = 0,
	ESearchCase__ESearchCase_MAX   = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.Guid
// 0x0010
struct FGuid
{
	int                                                A;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                B;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                C;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                D;                                                        // 0x000C(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)

	FGuid() : A(0), B(0), C(0), D(0) { }

	FGuid(int a, int b, int c, int d) : A(a), B(b), C(c), D(d) { }

	std::size_t operator()(const FGuid& guid) const
	{
		return std::hash<int>()(guid.A) ^ std::hash<int>()(guid.B) ^ std::hash<int>()(guid.C) ^ std::hash<int>()(guid.D);
	}

	friend bool operator==( const FGuid& X, const FGuid& Y )
	{
		return ((X.A ^ Y.A) | (X.B ^ Y.B) | (X.C ^ Y.C) | (X.D ^ Y.D)) == 0;
	}

	friend bool operator!=( const FGuid& X, const FGuid& Y )
	{
		return ((X.A ^ Y.A) | (X.B ^ Y.B) | (X.C ^ Y.C) | (X.D ^ Y.D)) != 0;
	}

	friend bool operator<( const FGuid& X, const FGuid& Y )
	{
		return	((X.A < Y.A) ? true : ((X.A > Y.A) ? false :
				((X.B < Y.B) ? true : ((X.B > Y.B) ? false :
				((X.C < Y.C) ? true : ((X.C > Y.C) ? false :
				((X.D < Y.D) ? true : ((X.D > Y.D) ? false : false )))))))); //-V583
	}

	int& operator[](int Index)
	{
		switch(Index)
		{
		case 0: return A;
		case 1: return B;
		case 2: return C;
		case 3: return D;
		}

		return A;
	}

	const int& operator[](int Index) const
	{
		switch(Index)
		{
		case 0: return A;
		case 1: return B;
		case 2: return C;
		case 3: return D;
		}

		return A;
	}

};

// ScriptStruct CoreUObject.Vector
// 0x000C
struct FVector
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

    inline FVector() : X(0.f), Y(0.f), Z(0.f) {}

    inline FVector(float x, float y, float z) : X(x), Y(y), Z(z) {}

    inline FVector operator + (const FVector& other) const { return FVector(X + other.X, Y + other.Y, Z + other.Z); }

    inline FVector operator - (const FVector& other) const { return FVector(X - other.X, Y - other.Y, Z - other.Z); }

    inline FVector operator * (float scalar) const { return FVector(X * scalar, Y * scalar, Z * scalar); }

    inline FVector& operator=  (const FVector& other) { X  = other.X; Y  = other.Y; Z  = other.Z; return *this; }

    inline FVector& operator+= (const FVector& other) { X += other.X; Y += other.Y; Z += other.Z; return *this; }

    inline FVector& operator-= (const FVector& other) { X -= other.X; Y -= other.Y; Z -= other.Z; return *this; }

    inline FVector& operator*= (const float other)    { X *= other;   Y *= other;   Z *= other;   return *this; }

	friend bool operator==(const FVector& first, const FVector& second)
	{
		return first.X == second.X && first.Y == second.Y && first.Z == second.Z;
	}

	friend bool operator!=(const FVector& first, const FVector& second)
	{
		return !(first == second);
	}

};

// ScriptStruct CoreUObject.Vector4
// 0x0010
struct alignas(16) FVector4
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Vector2D
// 0x0008
struct FVector2D
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	inline FVector2D()
		: X(0), Y(0)
	{ }

	inline FVector2D(float x, float y)
		: X(x),
		  Y(y)
	{ }

	inline FVector2D operator + (const FVector2D& other) const
	{
		return FVector2D(X + other.X, Y + other.Y);
	}

	inline FVector2D operator - (const FVector2D& other) const
	{
		return FVector2D(X - other.X, Y - other.Y);
	}

	inline FVector2D operator * (float scalar) const
	{
		return FVector2D(X * scalar, Y * scalar);
	}

	inline FVector2D& operator=  (const FVector2D& other)
	{
		X  = other.X;
		Y  = other.Y;
		return *this;
	}

	inline FVector2D& operator+= (const FVector2D& other)
	{
		X += other.X;
		Y += other.Y;
		return *this;
	}

	inline FVector2D& operator-= (const FVector2D& other)
	{
		X -= other.X;
		Y -= other.Y;
		return *this;
	}

	inline FVector2D& operator*= (const float other)
	{
		X *= other;
		Y *= other;
		return *this;
	}

	friend bool operator==(const FVector2D& one, const FVector2D& two)
	{
		return one.X == two.X && one.Y == two.Y;
	}

	friend bool operator!=(const FVector2D& one, const FVector2D& two)
	{
		return !(one == two);
	}

	friend bool operator>(const FVector2D& one, const FVector2D& two)
	{
		return one.X > two.X && one.Y > two.Y;
	}

	friend bool operator<(const FVector2D& one, const FVector2D& two)
	{
		return one.X < two.X && one.Y < two.Y;
	}

};

// ScriptStruct CoreUObject.TwoVectors
// 0x0018
struct FTwoVectors
{
	struct FVector                                     v1;                                                       // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     v2;                                                       // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Plane
// 0x0004 (0x0010 - 0x000C)
struct alignas(16) FPlane : public FVector
{
	float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Rotator
// 0x000C
struct FRotator
{
	float                                              Pitch;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Roll;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	inline FRotator() {}

	inline FRotator(float pitch, float yaw, float roll) : Pitch(pitch), Yaw(yaw), Roll(roll) {}

	inline FRotator operator + (const FRotator& other) const { return FRotator(Pitch + other.Pitch, Yaw + other.Yaw, Roll + other.Roll); }

	inline FRotator operator - (const FRotator& other) const { return FRotator(Pitch - other.Pitch,Yaw - other.Yaw, Roll - other.Roll); }

	inline FRotator operator * (float scalar) const { return FRotator(Pitch * scalar,Yaw * scalar, Roll * scalar); }

	inline FRotator& operator=  (const FRotator& other) { Pitch = other.Pitch; Yaw = other.Yaw; Roll = other.Roll; return *this; }

	inline FRotator& operator+= (const FRotator& other) { Pitch += other.Pitch; Yaw += other.Yaw; Roll += other.Roll; return *this; }

	inline FRotator& operator-= (const FRotator& other) { Pitch -= other.Pitch; Yaw -= other.Yaw; Roll -= other.Roll; return *this; }

	inline FRotator& operator*= (const float other) { Yaw *= other; Pitch *= other; Roll *= other; return *this; }

	friend bool operator==(const FRotator& first, const FRotator& second)
	{ 
		return first.Pitch == second.Pitch && first.Yaw == second.Yaw && first.Roll == second.Roll;
	}

	friend bool operator!=(const FRotator& first, const FRotator& second)
	{
		return !(first == second);
	}

};

// ScriptStruct CoreUObject.Quat
// 0x0010
struct alignas(16) FQuat
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	inline FQuat() {}

	inline FQuat( float InX, float InY, float InZ, float InW ) : X(InX) , Y(InY) , Z(InZ) , W(InW) {}

	inline FQuat( const FQuat& Q ) : X(Q.X), Y(Q.Y), Z(Q.Z), W(Q.W) {}

};

// ScriptStruct CoreUObject.PackedNormal
// 0x0004
struct FPackedNormal
{
	unsigned char                                      X;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      Y;                                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      Z;                                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      W;                                                        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.IntPoint
// 0x0008
struct FIntPoint
{
	int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.IntVector
// 0x000C
struct FIntVector
{
	int                                                X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Color
// 0x0004
struct FColor
{
	unsigned char                                      B;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      G;                                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      R;                                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      A;                                                        // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.LinearColor
// 0x0010
struct FLinearColor
{
	float                                              R;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              G;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              B;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              A;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	inline FLinearColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FLinearColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

	inline FLinearColor(float r, float g, float b)
		: R(r),
		  G(g),
		  B(b),
		  A(1.f)
	{ }

	bool operator!=(const FLinearColor& other)
	{ 
		return R != other.R || G != other.G || B != other.B || A != other.A;
	}

	bool operator==(const FLinearColor& other)
	{
		return R == other.R && G == other.G && B == other.B && A == other.A;
	}

};

// ScriptStruct CoreUObject.Box
// 0x001C
struct FBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      IsValid;                                                  // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.Box2D
// 0x0014
struct FBox2D
{
	struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      IsValid;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET

	FBox2D() : Min(FVector2D(0,0)), Max(FVector2D(0,0)), IsValid(1), UnknownData00{} {}

	FBox2D(FVector2D min, FVector2D max) : Min(min), Max(max), IsValid(1), UnknownData00{} {}

};

// ScriptStruct CoreUObject.BoxSphereBounds
// 0x001C
struct FBoxSphereBounds
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.OrientedBox
// 0x003C
struct FOrientedBox
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     AxisX;                                                    // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     AxisY;                                                    // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     AxisZ;                                                    // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExtentX;                                                  // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExtentY;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ExtentZ;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.Matrix
// 0x0040
struct FMatrix
{
	struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// 0x0014
struct FInterpCurvePointFloat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutVal;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArriveTangent;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTangent;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveFloat
// 0x0018
struct FInterpCurveFloat
{
	TArray<struct FInterpCurvePointFloat>              Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// 0x0020
struct FInterpCurvePointVector2D
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutVal;                                                   // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ArriveTangent;                                            // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LeaveTangent;                                             // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// 0x0018
struct FInterpCurveVector2D
{
	TArray<struct FInterpCurvePointVector2D>           Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// 0x002C
struct FInterpCurvePointVector
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutVal;                                                   // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ArriveTangent;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LeaveTangent;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector
// 0x0018
struct FInterpCurveVector
{
	TArray<struct FInterpCurvePointVector>             Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// 0x0050
struct FInterpCurvePointQuat
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FQuat                                       OutVal;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FQuat                                       ArriveTangent;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FQuat                                       LeaveTangent;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveQuat
// 0x0018
struct FInterpCurveQuat
{
	TArray<struct FInterpCurvePointQuat>               Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// 0x0050
struct FInterpCurvePointTwoVectors
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTwoVectors                                 OutVal;                                                   // 0x0004(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTwoVectors                                 ArriveTangent;                                            // 0x001C(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTwoVectors                                 LeaveTangent;                                             // 0x0034(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// 0x0018
struct FInterpCurveTwoVectors
{
	TArray<struct FInterpCurvePointTwoVectors>         Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// 0x0038
struct FInterpCurvePointLinearColor
{
	float                                              InVal;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                OutVal;                                                   // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ArriveTangent;                                            // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LeaveTangent;                                             // 0x0024(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                               // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// 0x0018
struct FInterpCurveLinearColor
{
	TArray<struct FInterpCurvePointLinearColor>        Points;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsLooped;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              LoopKeyOffset;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Transform
// 0x0030
struct alignas(16) FTransform
{
	struct FQuat                                       Rotation;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FVector                                     Scale3D;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct CoreUObject.RandomStream
// 0x0008
struct FRandomStream
{
	int                                                InitialSeed;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Seed;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.DateTime
// 0x0008
struct FDateTime
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CoreUObject.Timespan
// 0x0008
struct FTimespan
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CoreUObject.StringAssetReference
// 0x0010
struct FStringAssetReference
{
	class FString                                      AssetLongPathname;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct CoreUObject.StringClassReference
// 0x0000 (0x0010 - 0x0010)
struct FStringClassReference : public FStringAssetReference
{

};

// ScriptStruct CoreUObject.FallbackStruct
// 0x0001
struct FFallbackStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CoreUObject.FloatRangeBound
// 0x0008
struct FFloatRangeBound
{
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.FloatRange
// 0x0010
struct FFloatRange
{
	struct FFloatRangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32RangeBound
// 0x0008
struct FInt32RangeBound
{
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Value;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32Range
// 0x0010
struct FInt32Range
{
	struct FInt32RangeBound                            LowerBound;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FInt32RangeBound                            UpperBound;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.FloatInterval
// 0x0008
struct FFloatInterval
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CoreUObject.Int32Interval
// 0x0008
struct FInt32Interval
{
	int                                                Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
