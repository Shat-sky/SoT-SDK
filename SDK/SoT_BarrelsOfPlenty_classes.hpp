#pragma once

// Sea of Thieves (2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BarrelsOfPlenty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation
// 0x0020 (0x03E8 - 0x03C8)
class ABarrelsOfPlentyDebugSpawnLocation : public AActor
{
public:
	TArray<struct FBarrelsOfPlentyDebugLocationEntry>  Objects;                                                  // 0x03C8(0x0010) (Net, ZeroConstructor)
	struct FVector                                     SpawnCentre;                                              // 0x03D8(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x03E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BarrelsOfPlenty.BarrelsOfPlentyDebugSpawnLocation"));
		return ptr;
	}

};


// Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy
// 0x0028 (0x03F0 - 0x03C8)
class ABarrelsOfPlentySpawnProxy : public AActor
{
public:
	class AShip*                                       Ship;                                                     // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x03E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BarrelsOfPlenty.BarrelsOfPlentySpawnProxy"));
		return ptr;
	}

};


// Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStep
// 0x0000 (0x0098 - 0x0098)
class USpawnBarrelsOfPlentyStep : public UTaleQuestStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStep"));
		return ptr;
	}

};


// Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStepDesc
// 0x0030 (0x00B0 - 0x0080)
class USpawnBarrelsOfPlentyStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        LocatorVar;                                               // 0x0080(0x0030) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class BarrelsOfPlenty.SpawnBarrelsOfPlentyStepDesc"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
