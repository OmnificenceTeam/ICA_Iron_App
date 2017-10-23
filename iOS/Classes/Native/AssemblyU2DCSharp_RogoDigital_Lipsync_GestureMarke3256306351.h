#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.GestureMarker
struct  GestureMarker_t3256306351  : public Il2CppObject
{
public:
	// System.String RogoDigital.Lipsync.GestureMarker::gesture
	String_t* ___gesture_0;
	// System.Single RogoDigital.Lipsync.GestureMarker::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_gesture_0() { return static_cast<int32_t>(offsetof(GestureMarker_t3256306351, ___gesture_0)); }
	inline String_t* get_gesture_0() const { return ___gesture_0; }
	inline String_t** get_address_of_gesture_0() { return &___gesture_0; }
	inline void set_gesture_0(String_t* value)
	{
		___gesture_0 = value;
		Il2CppCodeGenWriteBarrier(&___gesture_0, value);
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(GestureMarker_t3256306351, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
