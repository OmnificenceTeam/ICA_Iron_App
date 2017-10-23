#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RogoDigital_Lipsync_Shape126115539.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.EmotionShape
struct  EmotionShape_t1814136894  : public Shape_t126115539
{
public:
	// System.String RogoDigital.Lipsync.EmotionShape::emotion
	String_t* ___emotion_5;

public:
	inline static int32_t get_offset_of_emotion_5() { return static_cast<int32_t>(offsetof(EmotionShape_t1814136894, ___emotion_5)); }
	inline String_t* get_emotion_5() const { return ___emotion_5; }
	inline String_t** get_address_of_emotion_5() { return &___emotion_5; }
	inline void set_emotion_5(String_t* value)
	{
		___emotion_5 = value;
		Il2CppCodeGenWriteBarrier(&___emotion_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
