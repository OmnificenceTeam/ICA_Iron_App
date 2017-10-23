#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostPr395798762.h"

// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldComponent
struct  DepthOfFieldComponent_t2490301935  : public PostProcessingComponentRenderTexture_1_t395798762
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.DepthOfFieldComponent::m_CoCHistory
	RenderTexture_t2666733923 * ___m_CoCHistory_3;

public:
	inline static int32_t get_offset_of_m_CoCHistory_3() { return static_cast<int32_t>(offsetof(DepthOfFieldComponent_t2490301935, ___m_CoCHistory_3)); }
	inline RenderTexture_t2666733923 * get_m_CoCHistory_3() const { return ___m_CoCHistory_3; }
	inline RenderTexture_t2666733923 ** get_address_of_m_CoCHistory_3() { return &___m_CoCHistory_3; }
	inline void set_m_CoCHistory_3(RenderTexture_t2666733923 * value)
	{
		___m_CoCHistory_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_CoCHistory_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
