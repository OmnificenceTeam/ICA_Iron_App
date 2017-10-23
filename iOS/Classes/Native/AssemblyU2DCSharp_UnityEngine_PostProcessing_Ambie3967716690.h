#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP2024801243.h"

// System.String
struct String_t;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t32810763;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AmbientOcclusionComponent
struct  AmbientOcclusionComponent_t3967716690  : public PostProcessingComponentCommandBuffer_1_t2024801243
{
public:
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.PostProcessing.AmbientOcclusionComponent::m_MRT
	RenderTargetIdentifierU5BU5D_t32810763* ___m_MRT_4;

public:
	inline static int32_t get_offset_of_m_MRT_4() { return static_cast<int32_t>(offsetof(AmbientOcclusionComponent_t3967716690, ___m_MRT_4)); }
	inline RenderTargetIdentifierU5BU5D_t32810763* get_m_MRT_4() const { return ___m_MRT_4; }
	inline RenderTargetIdentifierU5BU5D_t32810763** get_address_of_m_MRT_4() { return &___m_MRT_4; }
	inline void set_m_MRT_4(RenderTargetIdentifierU5BU5D_t32810763* value)
	{
		___m_MRT_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_MRT_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
