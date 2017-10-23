#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.Blendable
struct  Blendable_t3326051765  : public Il2CppObject
{
public:
	// System.Int32 RogoDigital.Lipsync.Blendable::number
	int32_t ___number_0;
	// System.Single RogoDigital.Lipsync.Blendable::currentWeight
	float ___currentWeight_1;

public:
	inline static int32_t get_offset_of_number_0() { return static_cast<int32_t>(offsetof(Blendable_t3326051765, ___number_0)); }
	inline int32_t get_number_0() const { return ___number_0; }
	inline int32_t* get_address_of_number_0() { return &___number_0; }
	inline void set_number_0(int32_t value)
	{
		___number_0 = value;
	}

	inline static int32_t get_offset_of_currentWeight_1() { return static_cast<int32_t>(offsetof(Blendable_t3326051765, ___currentWeight_1)); }
	inline float get_currentWeight_1() const { return ___currentWeight_1; }
	inline float* get_address_of_currentWeight_1() { return &___currentWeight_1; }
	inline void set_currentWeight_1(float value)
	{
		___currentWeight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
