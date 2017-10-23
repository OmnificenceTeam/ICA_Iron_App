#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Color1793246490.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Color3976262534.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Color1271932265.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings
struct  ColorWheelsSettings_t2818463061 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelMode UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::mode
	int32_t ___mode_0;
	// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::log
	LogWheelsSettings_t3976262534  ___log_1;
	// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings::linear
	LinearWheelsSettings_t1271932265  ___linear_2;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_t2818463061, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_log_1() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_t2818463061, ___log_1)); }
	inline LogWheelsSettings_t3976262534  get_log_1() const { return ___log_1; }
	inline LogWheelsSettings_t3976262534 * get_address_of_log_1() { return &___log_1; }
	inline void set_log_1(LogWheelsSettings_t3976262534  value)
	{
		___log_1 = value;
	}

	inline static int32_t get_offset_of_linear_2() { return static_cast<int32_t>(offsetof(ColorWheelsSettings_t2818463061, ___linear_2)); }
	inline LinearWheelsSettings_t1271932265  get_linear_2() const { return ___linear_2; }
	inline LinearWheelsSettings_t1271932265 * get_address_of_linear_2() { return &___linear_2; }
	inline void set_linear_2(LinearWheelsSettings_t1271932265  value)
	{
		___linear_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
