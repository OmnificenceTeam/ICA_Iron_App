#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings[]
struct FxaaConsoleSettingsU5BU5D_t3543327799;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings
struct  FxaaConsoleSettings_t1976361858 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::subpixelSpreadAmount
	float ___subpixelSpreadAmount_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::edgeSharpnessAmount
	float ___edgeSharpnessAmount_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::edgeDetectionThreshold
	float ___edgeDetectionThreshold_2;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::minimumRequiredLuminance
	float ___minimumRequiredLuminance_3;

public:
	inline static int32_t get_offset_of_subpixelSpreadAmount_0() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858, ___subpixelSpreadAmount_0)); }
	inline float get_subpixelSpreadAmount_0() const { return ___subpixelSpreadAmount_0; }
	inline float* get_address_of_subpixelSpreadAmount_0() { return &___subpixelSpreadAmount_0; }
	inline void set_subpixelSpreadAmount_0(float value)
	{
		___subpixelSpreadAmount_0 = value;
	}

	inline static int32_t get_offset_of_edgeSharpnessAmount_1() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858, ___edgeSharpnessAmount_1)); }
	inline float get_edgeSharpnessAmount_1() const { return ___edgeSharpnessAmount_1; }
	inline float* get_address_of_edgeSharpnessAmount_1() { return &___edgeSharpnessAmount_1; }
	inline void set_edgeSharpnessAmount_1(float value)
	{
		___edgeSharpnessAmount_1 = value;
	}

	inline static int32_t get_offset_of_edgeDetectionThreshold_2() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858, ___edgeDetectionThreshold_2)); }
	inline float get_edgeDetectionThreshold_2() const { return ___edgeDetectionThreshold_2; }
	inline float* get_address_of_edgeDetectionThreshold_2() { return &___edgeDetectionThreshold_2; }
	inline void set_edgeDetectionThreshold_2(float value)
	{
		___edgeDetectionThreshold_2 = value;
	}

	inline static int32_t get_offset_of_minimumRequiredLuminance_3() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858, ___minimumRequiredLuminance_3)); }
	inline float get_minimumRequiredLuminance_3() const { return ___minimumRequiredLuminance_3; }
	inline float* get_address_of_minimumRequiredLuminance_3() { return &___minimumRequiredLuminance_3; }
	inline void set_minimumRequiredLuminance_3(float value)
	{
		___minimumRequiredLuminance_3 = value;
	}
};

struct FxaaConsoleSettings_t1976361858_StaticFields
{
public:
	// UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings[] UnityEngine.PostProcessing.AntialiasingModel/FxaaConsoleSettings::presets
	FxaaConsoleSettingsU5BU5D_t3543327799* ___presets_4;

public:
	inline static int32_t get_offset_of_presets_4() { return static_cast<int32_t>(offsetof(FxaaConsoleSettings_t1976361858_StaticFields, ___presets_4)); }
	inline FxaaConsoleSettingsU5BU5D_t3543327799* get_presets_4() const { return ___presets_4; }
	inline FxaaConsoleSettingsU5BU5D_t3543327799** get_address_of_presets_4() { return &___presets_4; }
	inline void set_presets_4(FxaaConsoleSettingsU5BU5D_t3543327799* value)
	{
		___presets_4 = value;
		Il2CppCodeGenWriteBarrier(&___presets_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
