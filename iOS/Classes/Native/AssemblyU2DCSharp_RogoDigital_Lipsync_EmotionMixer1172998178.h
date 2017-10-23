#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Collections.Generic.List`1<RogoDigital.Lipsync.EmotionMixer/EmotionComponent>
struct List_1_t3979981210;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.EmotionMixer
struct  EmotionMixer_t1172998178  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.EmotionMixer/EmotionComponent> RogoDigital.Lipsync.EmotionMixer::emotions
	List_1_t3979981210 * ___emotions_0;
	// UnityEngine.Color RogoDigital.Lipsync.EmotionMixer::displayColor
	Color_t2020392075  ___displayColor_1;

public:
	inline static int32_t get_offset_of_emotions_0() { return static_cast<int32_t>(offsetof(EmotionMixer_t1172998178, ___emotions_0)); }
	inline List_1_t3979981210 * get_emotions_0() const { return ___emotions_0; }
	inline List_1_t3979981210 ** get_address_of_emotions_0() { return &___emotions_0; }
	inline void set_emotions_0(List_1_t3979981210 * value)
	{
		___emotions_0 = value;
		Il2CppCodeGenWriteBarrier(&___emotions_0, value);
	}

	inline static int32_t get_offset_of_displayColor_1() { return static_cast<int32_t>(offsetof(EmotionMixer_t1172998178, ___displayColor_1)); }
	inline Color_t2020392075  get_displayColor_1() const { return ___displayColor_1; }
	inline Color_t2020392075 * get_address_of_displayColor_1() { return &___displayColor_1; }
	inline void set_displayColor_1(Color_t2020392075  value)
	{
		___displayColor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
