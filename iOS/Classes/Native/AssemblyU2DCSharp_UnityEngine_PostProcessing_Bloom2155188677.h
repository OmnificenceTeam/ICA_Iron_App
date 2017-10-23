#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel/BloomSettings
struct  BloomSettings_t2155188677 
{
public:
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::intensity
	float ___intensity_0;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::threshold
	float ___threshold_1;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::softKnee
	float ___softKnee_2;
	// System.Single UnityEngine.PostProcessing.BloomModel/BloomSettings::radius
	float ___radius_3;
	// System.Boolean UnityEngine.PostProcessing.BloomModel/BloomSettings::antiFlicker
	bool ___antiFlicker_4;

public:
	inline static int32_t get_offset_of_intensity_0() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___intensity_0)); }
	inline float get_intensity_0() const { return ___intensity_0; }
	inline float* get_address_of_intensity_0() { return &___intensity_0; }
	inline void set_intensity_0(float value)
	{
		___intensity_0 = value;
	}

	inline static int32_t get_offset_of_threshold_1() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___threshold_1)); }
	inline float get_threshold_1() const { return ___threshold_1; }
	inline float* get_address_of_threshold_1() { return &___threshold_1; }
	inline void set_threshold_1(float value)
	{
		___threshold_1 = value;
	}

	inline static int32_t get_offset_of_softKnee_2() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___softKnee_2)); }
	inline float get_softKnee_2() const { return ___softKnee_2; }
	inline float* get_address_of_softKnee_2() { return &___softKnee_2; }
	inline void set_softKnee_2(float value)
	{
		___softKnee_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_antiFlicker_4() { return static_cast<int32_t>(offsetof(BloomSettings_t2155188677, ___antiFlicker_4)); }
	inline bool get_antiFlicker_4() const { return ___antiFlicker_4; }
	inline bool* get_address_of_antiFlicker_4() { return &___antiFlicker_4; }
	inline void set_antiFlicker_4(bool value)
	{
		___antiFlicker_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_t2155188677_marshaled_pinvoke
{
	float ___intensity_0;
	float ___threshold_1;
	float ___softKnee_2;
	float ___radius_3;
	int32_t ___antiFlicker_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/BloomSettings
struct BloomSettings_t2155188677_marshaled_com
{
	float ___intensity_0;
	float ___threshold_1;
	float ___softKnee_2;
	float ___radius_3;
	int32_t ___antiFlicker_4;
};
