#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Bloom2155188677.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Bloom3667174501.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BloomModel/Settings
struct  Settings_t3570510944 
{
public:
	// UnityEngine.PostProcessing.BloomModel/BloomSettings UnityEngine.PostProcessing.BloomModel/Settings::bloom
	BloomSettings_t2155188677  ___bloom_0;
	// UnityEngine.PostProcessing.BloomModel/LensDirtSettings UnityEngine.PostProcessing.BloomModel/Settings::lensDirt
	LensDirtSettings_t3667174501  ___lensDirt_1;

public:
	inline static int32_t get_offset_of_bloom_0() { return static_cast<int32_t>(offsetof(Settings_t3570510944, ___bloom_0)); }
	inline BloomSettings_t2155188677  get_bloom_0() const { return ___bloom_0; }
	inline BloomSettings_t2155188677 * get_address_of_bloom_0() { return &___bloom_0; }
	inline void set_bloom_0(BloomSettings_t2155188677  value)
	{
		___bloom_0 = value;
	}

	inline static int32_t get_offset_of_lensDirt_1() { return static_cast<int32_t>(offsetof(Settings_t3570510944, ___lensDirt_1)); }
	inline LensDirtSettings_t3667174501  get_lensDirt_1() const { return ___lensDirt_1; }
	inline LensDirtSettings_t3667174501 * get_address_of_lensDirt_1() { return &___lensDirt_1; }
	inline void set_lensDirt_1(LensDirtSettings_t3667174501  value)
	{
		___lensDirt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.BloomModel/Settings
struct Settings_t3570510944_marshaled_pinvoke
{
	BloomSettings_t2155188677_marshaled_pinvoke ___bloom_0;
	LensDirtSettings_t3667174501_marshaled_pinvoke ___lensDirt_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.BloomModel/Settings
struct Settings_t3570510944_marshaled_com
{
	BloomSettings_t2155188677_marshaled_com ___bloom_0;
	LensDirtSettings_t3667174501_marshaled_com ___lensDirt_1;
};
