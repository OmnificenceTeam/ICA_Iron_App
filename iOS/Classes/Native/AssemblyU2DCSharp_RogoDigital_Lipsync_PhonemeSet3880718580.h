#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String
struct String_t;
// RogoDigital.Lipsync.PhonemeSet/PhonemeCollection
struct PhonemeCollection_t2555052160;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.PhonemeSet
struct  PhonemeSet_t3880718580  : public ScriptableObject_t1975622470
{
public:
	// System.String RogoDigital.Lipsync.PhonemeSet::scriptingName
	String_t* ___scriptingName_2;
	// RogoDigital.Lipsync.PhonemeSet/PhonemeCollection RogoDigital.Lipsync.PhonemeSet::phonemes
	PhonemeCollection_t2555052160 * ___phonemes_3;
	// UnityEngine.Texture2D[] RogoDigital.Lipsync.PhonemeSet::guideImages
	Texture2DU5BU5D_t2724090252* ___guideImages_4;

public:
	inline static int32_t get_offset_of_scriptingName_2() { return static_cast<int32_t>(offsetof(PhonemeSet_t3880718580, ___scriptingName_2)); }
	inline String_t* get_scriptingName_2() const { return ___scriptingName_2; }
	inline String_t** get_address_of_scriptingName_2() { return &___scriptingName_2; }
	inline void set_scriptingName_2(String_t* value)
	{
		___scriptingName_2 = value;
		Il2CppCodeGenWriteBarrier(&___scriptingName_2, value);
	}

	inline static int32_t get_offset_of_phonemes_3() { return static_cast<int32_t>(offsetof(PhonemeSet_t3880718580, ___phonemes_3)); }
	inline PhonemeCollection_t2555052160 * get_phonemes_3() const { return ___phonemes_3; }
	inline PhonemeCollection_t2555052160 ** get_address_of_phonemes_3() { return &___phonemes_3; }
	inline void set_phonemes_3(PhonemeCollection_t2555052160 * value)
	{
		___phonemes_3 = value;
		Il2CppCodeGenWriteBarrier(&___phonemes_3, value);
	}

	inline static int32_t get_offset_of_guideImages_4() { return static_cast<int32_t>(offsetof(PhonemeSet_t3880718580, ___guideImages_4)); }
	inline Texture2DU5BU5D_t2724090252* get_guideImages_4() const { return ___guideImages_4; }
	inline Texture2DU5BU5D_t2724090252** get_address_of_guideImages_4() { return &___guideImages_4; }
	inline void set_guideImages_4(Texture2DU5BU5D_t2724090252* value)
	{
		___guideImages_4 = value;
		Il2CppCodeGenWriteBarrier(&___guideImages_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
