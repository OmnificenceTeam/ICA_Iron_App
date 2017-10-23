#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings[]
struct FxaaQualitySettingsU5BU5D_t3374738791;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings
struct  FxaaQualitySettings_t2290945554 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::subpixelAliasingRemovalAmount
	float ___subpixelAliasingRemovalAmount_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::edgeDetectionThreshold
	float ___edgeDetectionThreshold_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::minimumRequiredLuminance
	float ___minimumRequiredLuminance_2;

public:
	inline static int32_t get_offset_of_subpixelAliasingRemovalAmount_0() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2290945554, ___subpixelAliasingRemovalAmount_0)); }
	inline float get_subpixelAliasingRemovalAmount_0() const { return ___subpixelAliasingRemovalAmount_0; }
	inline float* get_address_of_subpixelAliasingRemovalAmount_0() { return &___subpixelAliasingRemovalAmount_0; }
	inline void set_subpixelAliasingRemovalAmount_0(float value)
	{
		___subpixelAliasingRemovalAmount_0 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionThreshold_1() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2290945554, ___edgeDetectionThreshold_1)); }
	inline float get_edgeDetectionThreshold_1() const { return ___edgeDetectionThreshold_1; }
	inline float* get_address_of_edgeDetectionThreshold_1() { return &___edgeDetectionThreshold_1; }
	inline void set_edgeDetectionThreshold_1(float value)
	{
		___edgeDetectionThreshold_1 = value;
	}

	inline static int32_t get_offset_of_minimumRequiredLuminance_2() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2290945554, ___minimumRequiredLuminance_2)); }
	inline float get_minimumRequiredLuminance_2() const { return ___minimumRequiredLuminance_2; }
	inline float* get_address_of_minimumRequiredLuminance_2() { return &___minimumRequiredLuminance_2; }
	inline void set_minimumRequiredLuminance_2(float value)
	{
		___minimumRequiredLuminance_2 = value;
	}
};

struct FxaaQualitySettings_t2290945554_StaticFields
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings[] UnityEngine.PostProcessing.AntialiasingModel/FxaaQualitySettings::presets
	FxaaQualitySettingsU5BU5D_t3374738791* ___presets_3;

public:
	inline static int32_t get_offset_of_presets_3() { return static_cast<int32_t>(offsetof(FxaaQualitySettings_t2290945554_StaticFields, ___presets_3)); }
	inline FxaaQualitySettingsU5BU5D_t3374738791* get_presets_3() const { return ___presets_3; }
	inline FxaaQualitySettingsU5BU5D_t3374738791** get_address_of_presets_3() { return &___presets_3; }
	inline void set_presets_3(FxaaQualitySettingsU5BU5D_t3374738791* value)
	{
		___presets_3 = value;
		Il2CppCodeGenWriteBarrier(&___presets_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
