// Sea of Thieves (2.6.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_PhantomTornado_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PhantomTornado.BP_PhantomTornado_C.ActivateCloud
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::ActivateCloud()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.ActivateCloud"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.Initialise Emplacement Lightning
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::Initialise_Emplacement_Lightning()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.Initialise Emplacement Lightning"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.OnRep_TornadoPhase
// (BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::OnRep_TornadoPhase()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.OnRep_TornadoPhase"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.OnRep_Emplacement3Index
// (BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::OnRep_Emplacement3Index()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.OnRep_Emplacement3Index"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.OnRep_Emplacement2Index
// (BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::OnRep_Emplacement2Index()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.OnRep_Emplacement2Index"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.OnRep_Emplacement1Index
// (BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::OnRep_Emplacement1Index()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.OnRep_Emplacement1Index"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.GetEmitter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEvent*             EventToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsPlayEvent                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhantomTornado_C::GetEmitter(class UWwiseEvent* EventToPlay, bool IsPlayEvent)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.GetEmitter"));

	struct
	{
		class UWwiseEvent*             EventToPlay;
		bool                           IsPlayEvent;
	} params;

	params.EventToPlay = EventToPlay;
	params.IsPlayEvent = IsPlayEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.ForceGetEmplacementLocations
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::ForceGetEmplacementLocations()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.ForceGetEmplacementLocations"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.ActivateEmplacementVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::ActivateEmplacementVFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.ActivateEmplacementVFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.FadeOutLiveWires
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhantomTornado_C::FadeOutLiveWires(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.FadeOutLiveWires"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.PassInEmplacementReferences
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Emplacements                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_PhantomTornado_C::PassInEmplacementReferences(TArray<class AActor*>* Emplacements)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.PassInEmplacementReferences"));

	struct
	{
		TArray<class AActor*>          Emplacements;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Emplacements != nullptr)
		*Emplacements = params.Emplacements;
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.SetAlphaOnAllTornadoParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewAlpha                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhantomTornado_C::SetAlphaOnAllTornadoParts(float NewAlpha)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.SetAlphaOnAllTornadoParts"));

	struct
	{
		float                          NewAlpha;
	} params;

	params.NewAlpha = NewAlpha;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.PlaceGlowingPointsOnTornadoMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhantomTornado_C::PlaceGlowingPointsOnTornadoMaterial(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.PlaceGlowingPointsOnTornadoMaterial"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.PlaceLiveWiresInLineWithEmplacements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhantomTornado_C::PlaceLiveWiresInLineWithEmplacements(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.PlaceLiveWiresInLineWithEmplacements"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.FadeInLiveWires
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhantomTornado_C::FadeInLiveWires(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.FadeInLiveWires"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.IntializeLiveWires
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::IntializeLiveWires()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.IntializeLiveWires"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.ForceHideTornado
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::ForceHideTornado()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.ForceHideTornado"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.UpdateLiveWires
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhantomTornado_C::UpdateLiveWires(int Index)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.UpdateLiveWires"));

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.IntializeTornadoMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::IntializeTornadoMaterials()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.IntializeTornadoMaterials"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.UserConstructionScript"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.TornadoAlpha__FinishedFunc
// (BlueprintEvent)

void ABP_PhantomTornado_C::TornadoAlpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.TornadoAlpha__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.TornadoAlpha__UpdateFunc
// (BlueprintEvent)

void ABP_PhantomTornado_C::TornadoAlpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.TornadoAlpha__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.TornadoAlpha__SpawnParticles__EventFunc
// (BlueprintEvent)

void ABP_PhantomTornado_C::TornadoAlpha__SpawnParticles__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.TornadoAlpha__SpawnParticles__EventFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.BlowUpTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PhantomTornado_C::BlowUpTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.BlowUpTimeline__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.BlowUpTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PhantomTornado_C::BlowUpTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.BlowUpTimeline__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.FadeCloudTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_PhantomTornado_C::FadeCloudTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.FadeCloudTimeline__FinishedFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.FadeCloudTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_PhantomTornado_C::FadeCloudTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.FadeCloudTimeline__UpdateFunc"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_PhantomTornado_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.ReceiveBeginPlay"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.FadeInTornado
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::FadeInTornado()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.FadeInTornado"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.BlowUpTornado
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::BlowUpTornado()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.BlowUpTornado"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.EmplacementReady
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::EmplacementReady()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.EmplacementReady"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.EmplacementVFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::EmplacementVFX()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.EmplacementVFX"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.FadeInCloud
// (BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::FadeInCloud()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.FadeInCloud"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.FadeOutCloud
// (BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::FadeOutCloud()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.FadeOutCloud"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.BeginPlayFade
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::BeginPlayFade()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.BeginPlayFade"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.ExecuteUbergraph_BP_PhantomTornado
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhantomTornado_C::ExecuteUbergraph_BP_PhantomTornado(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.ExecuteUbergraph_BP_PhantomTornado"));

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.EmplacementVFXFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::EmplacementVFXFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.EmplacementVFXFinished__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PhantomTornado.BP_PhantomTornado_C.TornadoVFXFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_PhantomTornado_C::TornadoVFXFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function BP_PhantomTornado.BP_PhantomTornado_C.TornadoVFXFinished__DelegateSignature"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
