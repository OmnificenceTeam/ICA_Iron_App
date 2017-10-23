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

// UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings
struct  LinearWheelsSettings_t1271932265 
{
public:
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::lift
	Color_t2020392075  ___lift_0;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::gamma
	Color_t2020392075  ___gamma_1;
	// UnityEngine.Color UnityEngine.PostProcessing.ColorGradingModel/LinearWheelsSettings::gain
	Color_t2020392075  ___gain_2;

public:
	inline static int32_t get_offset_of_lift_0() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_t1271932265, ___lift_0)); }
	inline Color_t2020392075  get_lift_0() const { return ___lift_0; }
	inline Color_t2020392075 * get_address_of_lift_0() { return &___lift_0; }
	inline void set_lift_0(Color_t2020392075  value)
	{
		___lift_0 = value;
	}

	inline static int32_t get_offset_of_gamma_1() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_t1271932265, ___gamma_1)); }
	inline Color_t2020392075  get_gamma_1() const { return ___gamma_1; }
	inline Color_t2020392075 * get_address_of_gamma_1() { return &___gamma_1; }
	inline void set_gamma_1(Color_t2020392075  value)
	{
		___gamma_1 = value;
	}

	inline static int32_t get_offset_of_gain_2() { return static_cast<int32_t>(offsetof(LinearWheelsSettings_t1271932265, ___gain_2)); }
	inline Color_t2020392075  get_gain_2() const { return ___gain_2; }
	inline Color_t2020392075 * get_address_of_gain_2() { return &___gain_2; }
	inline void set_gain_2(Color_t2020392075  value)
	{
		___gain_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
