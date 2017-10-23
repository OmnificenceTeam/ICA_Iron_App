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

// UnityEngine.PostProcessing.GrainModel/Settings
struct  Settings_t184448608 
{
public:
	// System.Boolean UnityEngine.PostProcessing.GrainModel/Settings::colored
	bool ___colored_0;
	// System.Single UnityEngine.PostProcessing.GrainModel/Settings::intensity
	float ___intensity_1;
	// System.Single UnityEngine.PostProcessing.GrainModel/Settings::size
	float ___size_2;
	// System.Single UnityEngine.PostProcessing.GrainModel/Settings::luminanceContribution
	float ___luminanceContribution_3;

public:
	inline static int32_t get_offset_of_colored_0() { return static_cast<int32_t>(offsetof(Settings_t184448608, ___colored_0)); }
	inline bool get_colored_0() const { return ___colored_0; }
	inline bool* get_address_of_colored_0() { return &___colored_0; }
	inline void set_colored_0(bool value)
	{
		___colored_0 = value;
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_t184448608, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(Settings_t184448608, ___size_2)); }
	inline float get_size_2() const { return ___size_2; }
	inline float* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(float value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_luminanceContribution_3() { return static_cast<int32_t>(offsetof(Settings_t184448608, ___luminanceContribution_3)); }
	inline float get_luminanceContribution_3() const { return ___luminanceContribution_3; }
	inline float* get_address_of_luminanceContribution_3() { return &___luminanceContribution_3; }
	inline void set_luminanceContribution_3(float value)
	{
		___luminanceContribution_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.GrainModel/Settings
struct Settings_t184448608_marshaled_pinvoke
{
	int32_t ___colored_0;
	float ___intensity_1;
	float ___size_2;
	float ___luminanceContribution_3;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.GrainModel/Settings
struct Settings_t184448608_marshaled_com
{
	int32_t ___colored_0;
	float ___intensity_1;
	float ___size_2;
	float ___luminanceContribution_3;
};
