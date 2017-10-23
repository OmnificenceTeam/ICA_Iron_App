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

// UnityEngine.PostProcessing.AntialiasingModel/TaaSettings
struct  TaaSettings_t101510809 
{
public:
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::jitterSpread
	float ___jitterSpread_0;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::sharpen
	float ___sharpen_1;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::stationaryBlending
	float ___stationaryBlending_2;
	// System.Single UnityEngine.PostProcessing.AntialiasingModel/TaaSettings::motionBlending
	float ___motionBlending_3;

public:
	inline static int32_t get_offset_of_jitterSpread_0() { return static_cast<int32_t>(offsetof(TaaSettings_t101510809, ___jitterSpread_0)); }
	inline float get_jitterSpread_0() const { return ___jitterSpread_0; }
	inline float* get_address_of_jitterSpread_0() { return &___jitterSpread_0; }
	inline void set_jitterSpread_0(float value)
	{
		___jitterSpread_0 = value;
	}

	inline static int32_t get_offset_of_sharpen_1() { return static_cast<int32_t>(offsetof(TaaSettings_t101510809, ___sharpen_1)); }
	inline float get_sharpen_1() const { return ___sharpen_1; }
	inline float* get_address_of_sharpen_1() { return &___sharpen_1; }
	inline void set_sharpen_1(float value)
	{
		___sharpen_1 = value;
	}

	inline static int32_t get_offset_of_stationaryBlending_2() { return static_cast<int32_t>(offsetof(TaaSettings_t101510809, ___stationaryBlending_2)); }
	inline float get_stationaryBlending_2() const { return ___stationaryBlending_2; }
	inline float* get_address_of_stationaryBlending_2() { return &___stationaryBlending_2; }
	inline void set_stationaryBlending_2(float value)
	{
		___stationaryBlending_2 = value;
	}

	inline static int32_t get_offset_of_motionBlending_3() { return static_cast<int32_t>(offsetof(TaaSettings_t101510809, ___motionBlending_3)); }
	inline float get_motionBlending_3() const { return ___motionBlending_3; }
	inline float* get_address_of_motionBlending_3() { return &___motionBlending_3; }
	inline void set_motionBlending_3(float value)
	{
		___motionBlending_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
