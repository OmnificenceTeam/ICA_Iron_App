#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// RogoDigital.Lipsync.LipSyncPreset/PhonemeShapeInfo[]
struct PhonemeShapeInfoU5BU5D_t39039339;
// RogoDigital.Lipsync.LipSyncPreset/EmotionShapeInfo[]
struct EmotionShapeInfoU5BU5D_t2751095672;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.LipSyncPreset
struct  LipSyncPreset_t3568832307  : public ScriptableObject_t1975622470
{
public:
	// RogoDigital.Lipsync.LipSyncPreset/PhonemeShapeInfo[] RogoDigital.Lipsync.LipSyncPreset::phonemeShapes
	PhonemeShapeInfoU5BU5D_t39039339* ___phonemeShapes_2;
	// RogoDigital.Lipsync.LipSyncPreset/EmotionShapeInfo[] RogoDigital.Lipsync.LipSyncPreset::emotionShapes
	EmotionShapeInfoU5BU5D_t2751095672* ___emotionShapes_3;

public:
	inline static int32_t get_offset_of_phonemeShapes_2() { return static_cast<int32_t>(offsetof(LipSyncPreset_t3568832307, ___phonemeShapes_2)); }
	inline PhonemeShapeInfoU5BU5D_t39039339* get_phonemeShapes_2() const { return ___phonemeShapes_2; }
	inline PhonemeShapeInfoU5BU5D_t39039339** get_address_of_phonemeShapes_2() { return &___phonemeShapes_2; }
	inline void set_phonemeShapes_2(PhonemeShapeInfoU5BU5D_t39039339* value)
	{
		___phonemeShapes_2 = value;
		Il2CppCodeGenWriteBarrier(&___phonemeShapes_2, value);
	}

	inline static int32_t get_offset_of_emotionShapes_3() { return static_cast<int32_t>(offsetof(LipSyncPreset_t3568832307, ___emotionShapes_3)); }
	inline EmotionShapeInfoU5BU5D_t2751095672* get_emotionShapes_3() const { return ___emotionShapes_3; }
	inline EmotionShapeInfoU5BU5D_t2751095672** get_address_of_emotionShapes_3() { return &___emotionShapes_3; }
	inline void set_emotionShapes_3(EmotionShapeInfoU5BU5D_t2751095672* value)
	{
		___emotionShapes_3 = value;
		Il2CppCodeGenWriteBarrier(&___emotionShapes_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
