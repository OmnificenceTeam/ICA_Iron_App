#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.UserLutModel/Settings
struct  Settings_t4208629457 
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.UserLutModel/Settings::lut
	Texture2D_t3542995729 * ___lut_0;
	// System.Single UnityEngine.PostProcessing.UserLutModel/Settings::contribution
	float ___contribution_1;

public:
	inline static int32_t get_offset_of_lut_0() { return static_cast<int32_t>(offsetof(Settings_t4208629457, ___lut_0)); }
	inline Texture2D_t3542995729 * get_lut_0() const { return ___lut_0; }
	inline Texture2D_t3542995729 ** get_address_of_lut_0() { return &___lut_0; }
	inline void set_lut_0(Texture2D_t3542995729 * value)
	{
		___lut_0 = value;
		Il2CppCodeGenWriteBarrier(&___lut_0, value);
	}

	inline static int32_t get_offset_of_contribution_1() { return static_cast<int32_t>(offsetof(Settings_t4208629457, ___contribution_1)); }
	inline float get_contribution_1() const { return ___contribution_1; }
	inline float* get_address_of_contribution_1() { return &___contribution_1; }
	inline void set_contribution_1(float value)
	{
		___contribution_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.UserLutModel/Settings
struct Settings_t4208629457_marshaled_pinvoke
{
	Texture2D_t3542995729 * ___lut_0;
	float ___contribution_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.UserLutModel/Settings
struct Settings_t4208629457_marshaled_com
{
	Texture2D_t3542995729 * ___lut_0;
	float ___contribution_1;
};
