#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.Texture
struct Texture_t2243626319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct  LensDirtSettings_t3667174501 
{
public:
	// UnityEngine.Texture UnityEngine.PostProcessing.BloomModel/LensDirtSettings::texture
	Texture_t2243626319 * ___texture_0;
	// System.Single UnityEngine.PostProcessing.BloomModel/LensDirtSettings::intensity
	float ___intensity_1;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(LensDirtSettings_t3667174501, ___texture_0)); }
	inline Texture_t2243626319 * get_texture_0() const { return ___texture_0; }
	inline Texture_t2243626319 ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture_t2243626319 * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier(&___texture_0, value);
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(LensDirtSettings_t3667174501, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t3667174501_marshaled_pinvoke
{
	Texture_t2243626319 * ___texture_0;
	float ___intensity_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/LensDirtSettings
struct LensDirtSettings_t3667174501_marshaled_com
{
	Texture_t2243626319 * ___texture_0;
	float ___intensity_1;
};
