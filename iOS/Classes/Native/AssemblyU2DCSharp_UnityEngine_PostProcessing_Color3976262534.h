#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings
struct  LogWheelsSettings_t3976262534 
{
public:
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::slope
	Color_t2020392075  ___slope_0;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::power
	Color_t2020392075  ___power_1;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LogWheelsSettings::offset
	Color_t2020392075  ___offset_2;

public:
	inline static int32_t get_offset_of_slope_0() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t3976262534, ___slope_0)); }
	inline Color_t2020392075  get_slope_0() const { return ___slope_0; }
	inline Color_t2020392075 * get_address_of_slope_0() { return &___slope_0; }
	inline void set_slope_0(Color_t2020392075  value)
	{
		___slope_0 = value;
	}

	inline static int32_t get_offset_of_power_1() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t3976262534, ___power_1)); }
	inline Color_t2020392075  get_power_1() const { return ___power_1; }
	inline Color_t2020392075 * get_address_of_power_1() { return &___power_1; }
	inline void set_power_1(Color_t2020392075  value)
	{
		___power_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(LogWheelsSettings_t3976262534, ___offset_2)); }
	inline Color_t2020392075  get_offset_2() const { return ___offset_2; }
	inline Color_t2020392075 * get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(Color_t2020392075  value)
	{
		___offset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
