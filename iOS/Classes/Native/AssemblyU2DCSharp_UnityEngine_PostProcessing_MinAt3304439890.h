#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_PropertyAttribute2606999759.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MinAttribute
struct  MinAttribute_t3304439890  : public PropertyAttribute_t2606999759
{
public:
	// System.Single UnityEngine.PostProcessing.MinAttribute::min
	float ___min_0;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(MinAttribute_t3304439890, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
