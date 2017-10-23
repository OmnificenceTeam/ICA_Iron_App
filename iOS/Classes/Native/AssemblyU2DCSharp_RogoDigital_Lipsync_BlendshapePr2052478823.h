#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.Collections.Generic.List`1<RogoDigital.Lipsync.PhonemeShape>
struct List_1_t2417838819;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.EmotionShape>
struct List_1_t1183258026;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.BlendshapePreset
struct  BlendshapePreset_t2052478823  : public ScriptableObject_t1975622470
{
public:
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.PhonemeShape> RogoDigital.Lipsync.BlendshapePreset::phonemeShapes
	List_1_t2417838819 * ___phonemeShapes_2;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.EmotionShape> RogoDigital.Lipsync.BlendshapePreset::emotionShapes
	List_1_t1183258026 * ___emotionShapes_3;

public:
	inline static int32_t get_offset_of_phonemeShapes_2() { return static_cast<int32_t>(offsetof(BlendshapePreset_t2052478823, ___phonemeShapes_2)); }
	inline List_1_t2417838819 * get_phonemeShapes_2() const { return ___phonemeShapes_2; }
	inline List_1_t2417838819 ** get_address_of_phonemeShapes_2() { return &___phonemeShapes_2; }
	inline void set_phonemeShapes_2(List_1_t2417838819 * value)
	{
		___phonemeShapes_2 = value;
		Il2CppCodeGenWriteBarrier(&___phonemeShapes_2, value);
	}

	inline static int32_t get_offset_of_emotionShapes_3() { return static_cast<int32_t>(offsetof(BlendshapePreset_t2052478823, ___emotionShapes_3)); }
	inline List_1_t1183258026 * get_emotionShapes_3() const { return ___emotionShapes_3; }
	inline List_1_t1183258026 ** get_address_of_emotionShapes_3() { return &___emotionShapes_3; }
	inline void set_emotionShapes_3(List_1_t1183258026 * value)
	{
		___emotionShapes_3 = value;
		Il2CppCodeGenWriteBarrier(&___emotionShapes_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
