#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP2911350591.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationComponent
struct  ChromaticAberrationComponent_t1705178474  : public PostProcessingComponentRenderTexture_1_t2911350591
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ChromaticAberrationComponent::m_SpectrumLut
	Texture2D_t3542995729 * ___m_SpectrumLut_2;

public:
	inline static int32_t get_offset_of_m_SpectrumLut_2() { return static_cast<int32_t>(offsetof(ChromaticAberrationComponent_t1705178474, ___m_SpectrumLut_2)); }
	inline Texture2D_t3542995729 * get_m_SpectrumLut_2() const { return ___m_SpectrumLut_2; }
	inline Texture2D_t3542995729 ** get_address_of_m_SpectrumLut_2() { return &___m_SpectrumLut_2; }
	inline void set_m_SpectrumLut_2(Texture2D_t3542995729 * value)
	{
		___m_SpectrumLut_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_SpectrumLut_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
