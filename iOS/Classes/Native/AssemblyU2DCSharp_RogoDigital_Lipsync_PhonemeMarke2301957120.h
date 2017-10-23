#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_RogoDigital_Lipsync_Phoneme2901485674.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.PhonemeMarker
struct  PhonemeMarker_t2301957120  : public Il2CppObject
{
public:
	// RogoDigital.Lipsync.Phoneme RogoDigital.Lipsync.PhonemeMarker::phoneme
	int32_t ___phoneme_0;
	// System.Int32 RogoDigital.Lipsync.PhonemeMarker::phonemeNumber
	int32_t ___phonemeNumber_1;
	// System.Single RogoDigital.Lipsync.PhonemeMarker::time
	float ___time_2;
	// System.Single RogoDigital.Lipsync.PhonemeMarker::intensity
	float ___intensity_3;
	// System.Boolean RogoDigital.Lipsync.PhonemeMarker::sustain
	bool ___sustain_4;
	// System.Boolean RogoDigital.Lipsync.PhonemeMarker::useRandomness
	bool ___useRandomness_5;
	// System.Single RogoDigital.Lipsync.PhonemeMarker::intensityRandomness
	float ___intensityRandomness_6;
	// System.Single RogoDigital.Lipsync.PhonemeMarker::blendableRandomness
	float ___blendableRandomness_7;
	// System.Single RogoDigital.Lipsync.PhonemeMarker::bonePositionRandomness
	float ___bonePositionRandomness_8;
	// System.Single RogoDigital.Lipsync.PhonemeMarker::boneRotationRandomness
	float ___boneRotationRandomness_9;

public:
	inline static int32_t get_offset_of_phoneme_0() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___phoneme_0)); }
	inline int32_t get_phoneme_0() const { return ___phoneme_0; }
	inline int32_t* get_address_of_phoneme_0() { return &___phoneme_0; }
	inline void set_phoneme_0(int32_t value)
	{
		___phoneme_0 = value;
	}

	inline static int32_t get_offset_of_phonemeNumber_1() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___phonemeNumber_1)); }
	inline int32_t get_phonemeNumber_1() const { return ___phonemeNumber_1; }
	inline int32_t* get_address_of_phonemeNumber_1() { return &___phonemeNumber_1; }
	inline void set_phonemeNumber_1(int32_t value)
	{
		___phonemeNumber_1 = value;
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_intensity_3() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___intensity_3)); }
	inline float get_intensity_3() const { return ___intensity_3; }
	inline float* get_address_of_intensity_3() { return &___intensity_3; }
	inline void set_intensity_3(float value)
	{
		___intensity_3 = value;
	}

	inline static int32_t get_offset_of_sustain_4() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___sustain_4)); }
	inline bool get_sustain_4() const { return ___sustain_4; }
	inline bool* get_address_of_sustain_4() { return &___sustain_4; }
	inline void set_sustain_4(bool value)
	{
		___sustain_4 = value;
	}

	inline static int32_t get_offset_of_useRandomness_5() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___useRandomness_5)); }
	inline bool get_useRandomness_5() const { return ___useRandomness_5; }
	inline bool* get_address_of_useRandomness_5() { return &___useRandomness_5; }
	inline void set_useRandomness_5(bool value)
	{
		___useRandomness_5 = value;
	}

	inline static int32_t get_offset_of_intensityRandomness_6() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___intensityRandomness_6)); }
	inline float get_intensityRandomness_6() const { return ___intensityRandomness_6; }
	inline float* get_address_of_intensityRandomness_6() { return &___intensityRandomness_6; }
	inline void set_intensityRandomness_6(float value)
	{
		___intensityRandomness_6 = value;
	}

	inline static int32_t get_offset_of_blendableRandomness_7() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___blendableRandomness_7)); }
	inline float get_blendableRandomness_7() const { return ___blendableRandomness_7; }
	inline float* get_address_of_blendableRandomness_7() { return &___blendableRandomness_7; }
	inline void set_blendableRandomness_7(float value)
	{
		___blendableRandomness_7 = value;
	}

	inline static int32_t get_offset_of_bonePositionRandomness_8() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___bonePositionRandomness_8)); }
	inline float get_bonePositionRandomness_8() const { return ___bonePositionRandomness_8; }
	inline float* get_address_of_bonePositionRandomness_8() { return &___bonePositionRandomness_8; }
	inline void set_bonePositionRandomness_8(float value)
	{
		___bonePositionRandomness_8 = value;
	}

	inline static int32_t get_offset_of_boneRotationRandomness_9() { return static_cast<int32_t>(offsetof(PhonemeMarker_t2301957120, ___boneRotationRandomness_9)); }
	inline float get_boneRotationRandomness_9() const { return ___boneRotationRandomness_9; }
	inline float* get_address_of_boneRotationRandomness_9() { return &___boneRotationRandomness_9; }
	inline void set_boneRotationRandomness_9(float value)
	{
		___boneRotationRandomness_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
