#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP3035526909.h"

// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GrainComponent
struct  GrainComponent_t448736540  : public PostProcessingComponentRenderTexture_1_t3035526909
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.GrainComponent::m_GrainLookupRT
	RenderTexture_t2666733923 * ___m_GrainLookupRT_2;

public:
	inline static int32_t get_offset_of_m_GrainLookupRT_2() { return static_cast<int32_t>(offsetof(GrainComponent_t448736540, ___m_GrainLookupRT_2)); }
	inline RenderTexture_t2666733923 * get_m_GrainLookupRT_2() const { return ___m_GrainLookupRT_2; }
	inline RenderTexture_t2666733923 ** get_address_of_m_GrainLookupRT_2() { return &___m_GrainLookupRT_2; }
	inline void set_m_GrainLookupRT_2(RenderTexture_t2666733923 * value)
	{
		___m_GrainLookupRT_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_GrainLookupRT_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
