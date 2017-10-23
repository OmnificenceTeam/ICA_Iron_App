#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP1160489485.h"

// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t1137456562;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomComponent
struct  BloomComponent_t1622424908  : public PostProcessingComponentRenderTexture_1_t1160489485
{
public:
	// UnityEngine.RenderTexture[] UnityEngine.PostProcessing.BloomComponent::m_BlurBuffer1
	RenderTextureU5BU5D_t1137456562* ___m_BlurBuffer1_3;
	// UnityEngine.RenderTexture[] UnityEngine.PostProcessing.BloomComponent::m_BlurBuffer2
	RenderTextureU5BU5D_t1137456562* ___m_BlurBuffer2_4;

public:
	inline static int32_t get_offset_of_m_BlurBuffer1_3() { return static_cast<int32_t>(offsetof(BloomComponent_t1622424908, ___m_BlurBuffer1_3)); }
	inline RenderTextureU5BU5D_t1137456562* get_m_BlurBuffer1_3() const { return ___m_BlurBuffer1_3; }
	inline RenderTextureU5BU5D_t1137456562** get_address_of_m_BlurBuffer1_3() { return &___m_BlurBuffer1_3; }
	inline void set_m_BlurBuffer1_3(RenderTextureU5BU5D_t1137456562* value)
	{
		___m_BlurBuffer1_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlurBuffer1_3, value);
	}

	inline static int32_t get_offset_of_m_BlurBuffer2_4() { return static_cast<int32_t>(offsetof(BloomComponent_t1622424908, ___m_BlurBuffer2_4)); }
	inline RenderTextureU5BU5D_t1137456562* get_m_BlurBuffer2_4() const { return ___m_BlurBuffer2_4; }
	inline RenderTextureU5BU5D_t1137456562** get_address_of_m_BlurBuffer2_4() { return &___m_BlurBuffer2_4; }
	inline void set_m_BlurBuffer2_4(RenderTextureU5BU5D_t1137456562* value)
	{
		___m_BlurBuffer2_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlurBuffer2_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
