#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.EmotionMixer/EmotionComponent
struct  EmotionComponent_t315892782 
{
public:
	// System.String RogoDigital.Lipsync.EmotionMixer/EmotionComponent::emotion
	String_t* ___emotion_0;
	// System.Single RogoDigital.Lipsync.EmotionMixer/EmotionComponent::weight
	float ___weight_1;

public:
	inline static int32_t get_offset_of_emotion_0() { return static_cast<int32_t>(offsetof(EmotionComponent_t315892782, ___emotion_0)); }
	inline String_t* get_emotion_0() const { return ___emotion_0; }
	inline String_t** get_address_of_emotion_0() { return &___emotion_0; }
	inline void set_emotion_0(String_t* value)
	{
		___emotion_0 = value;
		Il2CppCodeGenWriteBarrier(&___emotion_0, value);
	}

	inline static int32_t get_offset_of_weight_1() { return static_cast<int32_t>(offsetof(EmotionComponent_t315892782, ___weight_1)); }
	inline float get_weight_1() const { return ___weight_1; }
	inline float* get_address_of_weight_1() { return &___weight_1; }
	inline void set_weight_1(float value)
	{
		___weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of RogoDigital.Lipsync.EmotionMixer/EmotionComponent
struct EmotionComponent_t315892782_marshaled_pinvoke
{
	char* ___emotion_0;
	float ___weight_1;
};
// Native definition for COM marshalling of RogoDigital.Lipsync.EmotionMixer/EmotionComponent
struct EmotionComponent_t315892782_marshaled_com
{
	Il2CppChar* ___emotion_0;
	float ___weight_1;
};
