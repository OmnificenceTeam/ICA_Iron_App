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
// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GestureInstance
struct  GestureInstance_t4281055664  : public Il2CppObject
{
public:
	// System.String GestureInstance::gesture
	String_t* ___gesture_0;
	// UnityEngine.AnimationClip GestureInstance::clip
	AnimationClip_t3510324950 * ___clip_1;
	// System.String GestureInstance::triggerName
	String_t* ___triggerName_2;

public:
	inline static int32_t get_offset_of_gesture_0() { return static_cast<int32_t>(offsetof(GestureInstance_t4281055664, ___gesture_0)); }
	inline String_t* get_gesture_0() const { return ___gesture_0; }
	inline String_t** get_address_of_gesture_0() { return &___gesture_0; }
	inline void set_gesture_0(String_t* value)
	{
		___gesture_0 = value;
		Il2CppCodeGenWriteBarrier(&___gesture_0, value);
	}

	inline static int32_t get_offset_of_clip_1() { return static_cast<int32_t>(offsetof(GestureInstance_t4281055664, ___clip_1)); }
	inline AnimationClip_t3510324950 * get_clip_1() const { return ___clip_1; }
	inline AnimationClip_t3510324950 ** get_address_of_clip_1() { return &___clip_1; }
	inline void set_clip_1(AnimationClip_t3510324950 * value)
	{
		___clip_1 = value;
		Il2CppCodeGenWriteBarrier(&___clip_1, value);
	}

	inline static int32_t get_offset_of_triggerName_2() { return static_cast<int32_t>(offsetof(GestureInstance_t4281055664, ___triggerName_2)); }
	inline String_t* get_triggerName_2() const { return ___triggerName_2; }
	inline String_t** get_address_of_triggerName_2() { return &___triggerName_2; }
	inline void set_triggerName_2(String_t* value)
	{
		___triggerName_2 = value;
		Il2CppCodeGenWriteBarrier(&___triggerName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
