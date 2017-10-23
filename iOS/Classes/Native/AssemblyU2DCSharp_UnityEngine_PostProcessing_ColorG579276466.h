#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t3306541151;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingCurve
struct  ColorGradingCurve_t579276466  : public Il2CppObject
{
public:
	// UnityEngine.AnimationCurve UnityEngine.PostProcessing.ColorGradingCurve::curve
	AnimationCurve_t3306541151 * ___curve_0;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingCurve::m_Loop
	bool ___m_Loop_1;
	// System.Single UnityEngine.PostProcessing.ColorGradingCurve::m_ZeroValue
	float ___m_ZeroValue_2;
	// System.Single UnityEngine.PostProcessing.ColorGradingCurve::m_Range
	float ___m_Range_3;
	// UnityEngine.AnimationCurve UnityEngine.PostProcessing.ColorGradingCurve::m_InternalLoopingCurve
	AnimationCurve_t3306541151 * ___m_InternalLoopingCurve_4;

public:
	inline static int32_t get_offset_of_curve_0() { return static_cast<int32_t>(offsetof(ColorGradingCurve_t579276466, ___curve_0)); }
	inline AnimationCurve_t3306541151 * get_curve_0() const { return ___curve_0; }
	inline AnimationCurve_t3306541151 ** get_address_of_curve_0() { return &___curve_0; }
	inline void set_curve_0(AnimationCurve_t3306541151 * value)
	{
		___curve_0 = value;
		Il2CppCodeGenWriteBarrier(&___curve_0, value);
	}

	inline static int32_t get_offset_of_m_Loop_1() { return static_cast<int32_t>(offsetof(ColorGradingCurve_t579276466, ___m_Loop_1)); }
	inline bool get_m_Loop_1() const { return ___m_Loop_1; }
	inline bool* get_address_of_m_Loop_1() { return &___m_Loop_1; }
	inline void set_m_Loop_1(bool value)
	{
		___m_Loop_1 = value;
	}

	inline static int32_t get_offset_of_m_ZeroValue_2() { return static_cast<int32_t>(offsetof(ColorGradingCurve_t579276466, ___m_ZeroValue_2)); }
	inline float get_m_ZeroValue_2() const { return ___m_ZeroValue_2; }
	inline float* get_address_of_m_ZeroValue_2() { return &___m_ZeroValue_2; }
	inline void set_m_ZeroValue_2(float value)
	{
		___m_ZeroValue_2 = value;
	}

	inline static int32_t get_offset_of_m_Range_3() { return static_cast<int32_t>(offsetof(ColorGradingCurve_t579276466, ___m_Range_3)); }
	inline float get_m_Range_3() const { return ___m_Range_3; }
	inline float* get_address_of_m_Range_3() { return &___m_Range_3; }
	inline void set_m_Range_3(float value)
	{
		___m_Range_3 = value;
	}

	inline static int32_t get_offset_of_m_InternalLoopingCurve_4() { return static_cast<int32_t>(offsetof(ColorGradingCurve_t579276466, ___m_InternalLoopingCurve_4)); }
	inline AnimationCurve_t3306541151 * get_m_InternalLoopingCurve_4() const { return ___m_InternalLoopingCurve_4; }
	inline AnimationCurve_t3306541151 ** get_address_of_m_InternalLoopingCurve_4() { return &___m_InternalLoopingCurve_4; }
	inline void set_m_InternalLoopingCurve_4(AnimationCurve_t3306541151 * value)
	{
		___m_InternalLoopingCurve_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_InternalLoopingCurve_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
