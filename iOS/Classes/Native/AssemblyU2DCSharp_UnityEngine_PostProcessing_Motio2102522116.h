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

// UnityEngine.PostProcessing.MotionBlurModel/Settings
struct  Settings_t2102522116 
{
public:
	// System.Single UnityEngine.PostProcessing.MotionBlurModel/Settings::shutterAngle
	float ___shutterAngle_0;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurModel/Settings::sampleCount
	int32_t ___sampleCount_1;
	// System.Single UnityEngine.PostProcessing.MotionBlurModel/Settings::frameBlending
	float ___frameBlending_2;

public:
	inline static int32_t get_offset_of_shutterAngle_0() { return static_cast<int32_t>(offsetof(Settings_t2102522116, ___shutterAngle_0)); }
	inline float get_shutterAngle_0() const { return ___shutterAngle_0; }
	inline float* get_address_of_shutterAngle_0() { return &___shutterAngle_0; }
	inline void set_shutterAngle_0(float value)
	{
		___shutterAngle_0 = value;
	}

	inline static int32_t get_offset_of_sampleCount_1() { return static_cast<int32_t>(offsetof(Settings_t2102522116, ___sampleCount_1)); }
	inline int32_t get_sampleCount_1() const { return ___sampleCount_1; }
	inline int32_t* get_address_of_sampleCount_1() { return &___sampleCount_1; }
	inline void set_sampleCount_1(int32_t value)
	{
		___sampleCount_1 = value;
	}

	inline static int32_t get_offset_of_frameBlending_2() { return static_cast<int32_t>(offsetof(Settings_t2102522116, ___frameBlending_2)); }
	inline float get_frameBlending_2() const { return ___frameBlending_2; }
	inline float* get_address_of_frameBlending_2() { return &___frameBlending_2; }
	inline void set_frameBlending_2(float value)
	{
		___frameBlending_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
