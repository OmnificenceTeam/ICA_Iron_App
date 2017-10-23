#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP1165493787.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingComponent
struct  ColorGradingComponent_t1809510370  : public PostProcessingComponentRenderTexture_1_t1165493787
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ColorGradingComponent::m_GradingCurves
	Texture2D_t3542995729 * ___m_GradingCurves_5;
	// UnityEngine.Color[] UnityEngine.PostProcessing.ColorGradingComponent::m_pixels
	ColorU5BU5D_t672350442* ___m_pixels_6;

public:
	inline static int32_t get_offset_of_m_GradingCurves_5() { return static_cast<int32_t>(offsetof(ColorGradingComponent_t1809510370, ___m_GradingCurves_5)); }
	inline Texture2D_t3542995729 * get_m_GradingCurves_5() const { return ___m_GradingCurves_5; }
	inline Texture2D_t3542995729 ** get_address_of_m_GradingCurves_5() { return &___m_GradingCurves_5; }
	inline void set_m_GradingCurves_5(Texture2D_t3542995729 * value)
	{
		___m_GradingCurves_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_GradingCurves_5, value);
	}

	inline static int32_t get_offset_of_m_pixels_6() { return static_cast<int32_t>(offsetof(ColorGradingComponent_t1809510370, ___m_pixels_6)); }
	inline ColorU5BU5D_t672350442* get_m_pixels_6() const { return ___m_pixels_6; }
	inline ColorU5BU5D_t672350442** get_address_of_m_pixels_6() { return &___m_pixels_6; }
	inline void set_m_pixels_6(ColorU5BU5D_t672350442* value)
	{
		___m_pixels_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_pixels_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
