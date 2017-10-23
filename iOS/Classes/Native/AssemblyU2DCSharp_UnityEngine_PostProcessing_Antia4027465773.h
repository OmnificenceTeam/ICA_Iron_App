#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Antia3468018951.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Antia2562831787.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Antial101510809.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/Settings
struct  Settings_t4027465773 
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/Method UnityEngine.PostProcessing.AntialiasingModel/Settings::method
	int32_t ___method_0;
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::fxaaSettings
	FxaaSettings_t2562831787  ___fxaaSettings_1;
	// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings UnityEngine.PostProcessing.AntialiasingModel/Settings::taaSettings
	TaaSettings_t101510809  ___taaSettings_2;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(Settings_t4027465773, ___method_0)); }
	inline int32_t get_method_0() const { return ___method_0; }
	inline int32_t* get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(int32_t value)
	{
		___method_0 = value;
	}

	inline static int32_t get_offset_of_fxaaSettings_1() { return static_cast<int32_t>(offsetof(Settings_t4027465773, ___fxaaSettings_1)); }
	inline FxaaSettings_t2562831787  get_fxaaSettings_1() const { return ___fxaaSettings_1; }
	inline FxaaSettings_t2562831787 * get_address_of_fxaaSettings_1() { return &___fxaaSettings_1; }
	inline void set_fxaaSettings_1(FxaaSettings_t2562831787  value)
	{
		___fxaaSettings_1 = value;
	}

	inline static int32_t get_offset_of_taaSettings_2() { return static_cast<int32_t>(offsetof(Settings_t4027465773, ___taaSettings_2)); }
	inline TaaSettings_t101510809  get_taaSettings_2() const { return ___taaSettings_2; }
	inline TaaSettings_t101510809 * get_address_of_taaSettings_2() { return &___taaSettings_2; }
	inline void set_taaSettings_2(TaaSettings_t101510809  value)
	{
		___taaSettings_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
