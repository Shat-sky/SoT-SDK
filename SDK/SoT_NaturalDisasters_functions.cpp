// Sea of Thieves (1.4.16) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_NaturalDisasters_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAshenLordAshCloud::UpdatePostSettingsBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.UpdatePostSettingsBP");

	AAshenLordAshCloud_UpdatePostSettingsBP_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CloudDensity                   (Parm, ZeroConstructor, IsPlainOldData)

void AAshenLordAshCloud::SetDissipationDensityBP(float CloudDensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.SetDissipationDensityBP");

	AAshenLordAshCloud_SetDissipationDensityBP_Params params;
	params.CloudDensity = CloudDensity;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged
// (Final, Native, Private)

void AAshenLordAshCloud::OnRep_StateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordAshCloud.OnRep_StateChanged");

	AAshenLordAshCloud_OnRep_StateChanged_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// int                            WeightedVolcanoProjectileIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RotationRate                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AAshenLordVolcano::Multicast_FireProjectile(int WeightedVolcanoProjectileIndex, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.AshenLordVolcano.Multicast_FireProjectile");

	AAshenLordVolcano_Multicast_FireProjectile_Params params;
	params.WeightedVolcanoProjectileIndex = WeightedVolcanoProjectileIndex;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.LaunchVelocity = LaunchVelocity;
	params.RotationRate = RotationRate;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Earthquake.OnRep_EarthquakeState
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EEarthquakeState>  OldEarthquakeState             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEarthquake::OnRep_EarthquakeState(TEnumAsByte<EEarthquakeState> OldEarthquakeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Earthquake.OnRep_EarthquakeState");

	AEarthquake_OnRep_EarthquakeState_Params params;
	params.OldEarthquakeState = OldEarthquakeState;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Geyser.OnRep_GeyserState
// (Final, Native, Private)

void AGeyser::OnRep_GeyserState()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.OnRep_GeyserState");

	AGeyser_OnRep_GeyserState_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Geyser.Multicast_TriggerExplosion
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)

void AGeyser::Multicast_TriggerExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Geyser.Multicast_TriggerExplosion");

	AGeyser_Multicast_TriggerExplosion_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned
// (Final, Native, Private, HasOutParms, HasDefaults)
// Parameters:
// struct FVector                 GeyserSpawnLocation            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGeyserItemSpawnComponent::OnGeyserSpawned(const struct FVector& GeyserSpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.GeyserItemSpawnComponent.OnGeyserSpawned");

	UGeyserItemSpawnComponent_OnGeyserSpawned_Params params;
	params.GeyserSpawnLocation = GeyserSpawnLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.LavaZone.OnRep_ActorsInZone
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<class AActor*>          PreviousActors                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ALavaZone::OnRep_ActorsInZone(TArray<class AActor*> PreviousActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_ActorsInZone");

	ALavaZone_OnRep_ActorsInZone_Params params;
	params.PreviousActors = PreviousActors;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.LavaZone.OnRep_Active
// (Final, Native, Private)

void ALavaZone::OnRep_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.LavaZone.OnRep_Active");

	ALavaZone_OnRep_Active_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone
// (Final, Native, Private)

void ASuperheatedWater::OnRep_PlayersInZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.SuperheatedWater.OnRep_PlayersInZone");

	ASuperheatedWater_OnRep_PlayersInZone_Params params;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Volcano.OnRep_VolcanoState
// (Final, Native, Private)
// Parameters:
// struct FVolcanoStateData       OldVolcanoState                (ConstParm, Parm)

void AVolcano::OnRep_VolcanoState(const struct FVolcanoStateData& OldVolcanoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.OnRep_VolcanoState");

	AVolcano_OnRep_VolcanoState_Params params;
	params.OldVolcanoState = OldVolcanoState;

	UObject::ProcessEvent(fn, &params);
}


// Function NaturalDisasters.Volcano.Multicast_FireProjectile
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
// Parameters:
// int                            WeightedVolcanoProjectileIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AuthoritySpawnLocation         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 LaunchVelocity                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 RotationRate                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AVolcano::Multicast_FireProjectile(int WeightedVolcanoProjectileIndex, const struct FVector& AuthoritySpawnLocation, const struct FVector& LaunchVelocity, const struct FVector& RotationRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function NaturalDisasters.Volcano.Multicast_FireProjectile");

	AVolcano_Multicast_FireProjectile_Params params;
	params.WeightedVolcanoProjectileIndex = WeightedVolcanoProjectileIndex;
	params.AuthoritySpawnLocation = AuthoritySpawnLocation;
	params.LaunchVelocity = LaunchVelocity;
	params.RotationRate = RotationRate;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
