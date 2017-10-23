#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Scree1773490745.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Scree3320342945.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Scree2869591496.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct  Settings_t2290238256 
{
public:
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ReflectionSettings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::reflection
	ReflectionSettings_t1773490745  ___reflection_0;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/IntensitySettings UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::intensity
	IntensitySettings_t3320342945  ___intensity_1;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionModel/ScreenEdgeMask UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings::screenEdgeMask
	ScreenEdgeMask_t2869591496  ___screenEdgeMask_2;

public:
	inline static int32_t get_offset_of_reflection_0() { return static_cast<int32_t>(offsetof(Settings_t2290238256, ___reflection_0)); }
	inline ReflectionSettings_t1773490745  get_reflection_0() const { return ___reflection_0; }
	inline ReflectionSettings_t1773490745 * get_address_of_reflection_0() { return &___reflection_0; }
	inline void set_reflection_0(ReflectionSettings_t1773490745  value)
	{
		___reflection_0 = value;
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_t2290238256, ___intensity_1)); }
	inline IntensitySettings_t3320342945  get_intensity_1() const { return ___intensity_1; }
	inline IntensitySettings_t3320342945 * get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(IntensitySettings_t3320342945  value)
	{
		___intensity_1 = value;
	}

	inline static int32_t get_offset_of_screenEdgeMask_2() { return static_cast<int32_t>(offsetof(Settings_t2290238256, ___screenEdgeMask_2)); }
	inline ScreenEdgeMask_t2869591496  get_screenEdgeMask_2() const { return ___screenEdgeMask_2; }
	inline ScreenEdgeMask_t2869591496 * get_address_of_screenEdgeMask_2() { return &___screenEdgeMask_2; }
	inline void set_screenEdgeMask_2(ScreenEdgeMask_t2869591496  value)
	{
		___screenEdgeMask_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct Settings_t2290238256_marshaled_pinvoke
{
	ReflectionSettings_t1773490745_marshaled_pinvoke ___reflection_0;
	IntensitySettings_t3320342945  ___intensity_1;
	ScreenEdgeMask_t2869591496  ___screenEdgeMask_2;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ScreenSpaceReflectionModel/Settings
struct Settings_t2290238256_marshaled_com
{
	ReflectionSettings_t1773490745_marshaled_com ___reflection_0;
	IntensitySettings_t3320342945  ___intensity_1;
	ScreenEdgeMask_t2869591496  ___screenEdgeMask_2;
};
