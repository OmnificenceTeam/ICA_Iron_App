#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// RogoDigital.Lipsync.PhonemeSet
struct PhonemeSet_t3880718580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.LipSyncProject
struct  LipSyncProject_t3207837683  : public ScriptableObject_t1975622470
{
public:
	// System.String[] RogoDigital.Lipsync.LipSyncProject::emotions
	StringU5BU5D_t1642385972* ___emotions_2;
	// UnityEngine.Color[] RogoDigital.Lipsync.LipSyncProject::emotionColors
	ColorU5BU5D_t672350442* ___emotionColors_3;
	// System.Collections.Generic.List`1<System.String> RogoDigital.Lipsync.LipSyncProject::gestures
	List_1_t1398341365 * ___gestures_4;
	// RogoDigital.Lipsync.PhonemeSet RogoDigital.Lipsync.LipSyncProject::phonemeSet
	PhonemeSet_t3880718580 * ___phonemeSet_5;

public:
	inline static int32_t get_offset_of_emotions_2() { return static_cast<int32_t>(offsetof(LipSyncProject_t3207837683, ___emotions_2)); }
	inline StringU5BU5D_t1642385972* get_emotions_2() const { return ___emotions_2; }
	inline StringU5BU5D_t1642385972** get_address_of_emotions_2() { return &___emotions_2; }
	inline void set_emotions_2(StringU5BU5D_t1642385972* value)
	{
		___emotions_2 = value;
		Il2CppCodeGenWriteBarrier(&___emotions_2, value);
	}

	inline static int32_t get_offset_of_emotionColors_3() { return static_cast<int32_t>(offsetof(LipSyncProject_t3207837683, ___emotionColors_3)); }
	inline ColorU5BU5D_t672350442* get_emotionColors_3() const { return ___emotionColors_3; }
	inline ColorU5BU5D_t672350442** get_address_of_emotionColors_3() { return &___emotionColors_3; }
	inline void set_emotionColors_3(ColorU5BU5D_t672350442* value)
	{
		___emotionColors_3 = value;
		Il2CppCodeGenWriteBarrier(&___emotionColors_3, value);
	}

	inline static int32_t get_offset_of_gestures_4() { return static_cast<int32_t>(offsetof(LipSyncProject_t3207837683, ___gestures_4)); }
	inline List_1_t1398341365 * get_gestures_4() const { return ___gestures_4; }
	inline List_1_t1398341365 ** get_address_of_gestures_4() { return &___gestures_4; }
	inline void set_gestures_4(List_1_t1398341365 * value)
	{
		___gestures_4 = value;
		Il2CppCodeGenWriteBarrier(&___gestures_4, value);
	}

	inline static int32_t get_offset_of_phonemeSet_5() { return static_cast<int32_t>(offsetof(LipSyncProject_t3207837683, ___phonemeSet_5)); }
	inline PhonemeSet_t3880718580 * get_phonemeSet_5() const { return ___phonemeSet_5; }
	inline PhonemeSet_t3880718580 ** get_address_of_phonemeSet_5() { return &___phonemeSet_5; }
	inline void set_phonemeSet_5(PhonemeSet_t3880718580 * value)
	{
		___phonemeSet_5 = value;
		Il2CppCodeGenWriteBarrier(&___phonemeSet_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
