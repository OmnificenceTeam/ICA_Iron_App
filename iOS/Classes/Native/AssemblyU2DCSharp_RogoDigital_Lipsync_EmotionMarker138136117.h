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
// RogoDigital.Lipsync.EmotionMixer
struct EmotionMixer_t1172998178;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.EmotionMarker
struct  EmotionMarker_t138136117  : public Il2CppObject
{
public:
	// System.String RogoDigital.Lipsync.EmotionMarker::emotion
	String_t* ___emotion_0;
	// System.Boolean RogoDigital.Lipsync.EmotionMarker::isMixer
	bool ___isMixer_1;
	// RogoDigital.Lipsync.EmotionMixer RogoDigital.Lipsync.EmotionMarker::mixer
	EmotionMixer_t1172998178 * ___mixer_2;
	// System.Single RogoDigital.Lipsync.EmotionMarker::startTime
	float ___startTime_3;
	// System.Single RogoDigital.Lipsync.EmotionMarker::endTime
	float ___endTime_4;
	// System.Single RogoDigital.Lipsync.EmotionMarker::blendInTime
	float ___blendInTime_5;
	// System.Single RogoDigital.Lipsync.EmotionMarker::blendOutTime
	float ___blendOutTime_6;
	// System.Boolean RogoDigital.Lipsync.EmotionMarker::blendToMarker
	bool ___blendToMarker_7;
	// System.Boolean RogoDigital.Lipsync.EmotionMarker::blendFromMarker
	bool ___blendFromMarker_8;
	// System.Boolean RogoDigital.Lipsync.EmotionMarker::customBlendIn
	bool ___customBlendIn_9;
	// System.Boolean RogoDigital.Lipsync.EmotionMarker::customBlendOut
	bool ___customBlendOut_10;
	// System.Single RogoDigital.Lipsync.EmotionMarker::intensity
	float ___intensity_11;
	// System.Boolean RogoDigital.Lipsync.EmotionMarker::continuousVariation
	bool ___continuousVariation_12;
	// System.Single RogoDigital.Lipsync.EmotionMarker::variationFrequency
	float ___variationFrequency_13;
	// System.Single RogoDigital.Lipsync.EmotionMarker::intensityVariation
	float ___intensityVariation_14;
	// System.Single RogoDigital.Lipsync.EmotionMarker::blendableVariation
	float ___blendableVariation_15;
	// System.Single RogoDigital.Lipsync.EmotionMarker::bonePositionVariation
	float ___bonePositionVariation_16;
	// System.Single RogoDigital.Lipsync.EmotionMarker::boneRotationVariation
	float ___boneRotationVariation_17;
	// System.Boolean RogoDigital.Lipsync.EmotionMarker::invalid
	bool ___invalid_18;

public:
	inline static int32_t get_offset_of_emotion_0() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___emotion_0)); }
	inline String_t* get_emotion_0() const { return ___emotion_0; }
	inline String_t** get_address_of_emotion_0() { return &___emotion_0; }
	inline void set_emotion_0(String_t* value)
	{
		___emotion_0 = value;
		Il2CppCodeGenWriteBarrier(&___emotion_0, value);
	}

	inline static int32_t get_offset_of_isMixer_1() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___isMixer_1)); }
	inline bool get_isMixer_1() const { return ___isMixer_1; }
	inline bool* get_address_of_isMixer_1() { return &___isMixer_1; }
	inline void set_isMixer_1(bool value)
	{
		___isMixer_1 = value;
	}

	inline static int32_t get_offset_of_mixer_2() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___mixer_2)); }
	inline EmotionMixer_t1172998178 * get_mixer_2() const { return ___mixer_2; }
	inline EmotionMixer_t1172998178 ** get_address_of_mixer_2() { return &___mixer_2; }
	inline void set_mixer_2(EmotionMixer_t1172998178 * value)
	{
		___mixer_2 = value;
		Il2CppCodeGenWriteBarrier(&___mixer_2, value);
	}

	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___startTime_3)); }
	inline float get_startTime_3() const { return ___startTime_3; }
	inline float* get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(float value)
	{
		___startTime_3 = value;
	}

	inline static int32_t get_offset_of_endTime_4() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___endTime_4)); }
	inline float get_endTime_4() const { return ___endTime_4; }
	inline float* get_address_of_endTime_4() { return &___endTime_4; }
	inline void set_endTime_4(float value)
	{
		___endTime_4 = value;
	}

	inline static int32_t get_offset_of_blendInTime_5() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___blendInTime_5)); }
	inline float get_blendInTime_5() const { return ___blendInTime_5; }
	inline float* get_address_of_blendInTime_5() { return &___blendInTime_5; }
	inline void set_blendInTime_5(float value)
	{
		___blendInTime_5 = value;
	}

	inline static int32_t get_offset_of_blendOutTime_6() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___blendOutTime_6)); }
	inline float get_blendOutTime_6() const { return ___blendOutTime_6; }
	inline float* get_address_of_blendOutTime_6() { return &___blendOutTime_6; }
	inline void set_blendOutTime_6(float value)
	{
		___blendOutTime_6 = value;
	}

	inline static int32_t get_offset_of_blendToMarker_7() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___blendToMarker_7)); }
	inline bool get_blendToMarker_7() const { return ___blendToMarker_7; }
	inline bool* get_address_of_blendToMarker_7() { return &___blendToMarker_7; }
	inline void set_blendToMarker_7(bool value)
	{
		___blendToMarker_7 = value;
	}

	inline static int32_t get_offset_of_blendFromMarker_8() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___blendFromMarker_8)); }
	inline bool get_blendFromMarker_8() const { return ___blendFromMarker_8; }
	inline bool* get_address_of_blendFromMarker_8() { return &___blendFromMarker_8; }
	inline void set_blendFromMarker_8(bool value)
	{
		___blendFromMarker_8 = value;
	}

	inline static int32_t get_offset_of_customBlendIn_9() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___customBlendIn_9)); }
	inline bool get_customBlendIn_9() const { return ___customBlendIn_9; }
	inline bool* get_address_of_customBlendIn_9() { return &___customBlendIn_9; }
	inline void set_customBlendIn_9(bool value)
	{
		___customBlendIn_9 = value;
	}

	inline static int32_t get_offset_of_customBlendOut_10() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___customBlendOut_10)); }
	inline bool get_customBlendOut_10() const { return ___customBlendOut_10; }
	inline bool* get_address_of_customBlendOut_10() { return &___customBlendOut_10; }
	inline void set_customBlendOut_10(bool value)
	{
		___customBlendOut_10 = value;
	}

	inline static int32_t get_offset_of_intensity_11() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___intensity_11)); }
	inline float get_intensity_11() const { return ___intensity_11; }
	inline float* get_address_of_intensity_11() { return &___intensity_11; }
	inline void set_intensity_11(float value)
	{
		___intensity_11 = value;
	}

	inline static int32_t get_offset_of_continuousVariation_12() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___continuousVariation_12)); }
	inline bool get_continuousVariation_12() const { return ___continuousVariation_12; }
	inline bool* get_address_of_continuousVariation_12() { return &___continuousVariation_12; }
	inline void set_continuousVariation_12(bool value)
	{
		___continuousVariation_12 = value;
	}

	inline static int32_t get_offset_of_variationFrequency_13() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___variationFrequency_13)); }
	inline float get_variationFrequency_13() const { return ___variationFrequency_13; }
	inline float* get_address_of_variationFrequency_13() { return &___variationFrequency_13; }
	inline void set_variationFrequency_13(float value)
	{
		___variationFrequency_13 = value;
	}

	inline static int32_t get_offset_of_intensityVariation_14() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___intensityVariation_14)); }
	inline float get_intensityVariation_14() const { return ___intensityVariation_14; }
	inline float* get_address_of_intensityVariation_14() { return &___intensityVariation_14; }
	inline void set_intensityVariation_14(float value)
	{
		___intensityVariation_14 = value;
	}

	inline static int32_t get_offset_of_blendableVariation_15() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___blendableVariation_15)); }
	inline float get_blendableVariation_15() const { return ___blendableVariation_15; }
	inline float* get_address_of_blendableVariation_15() { return &___blendableVariation_15; }
	inline void set_blendableVariation_15(float value)
	{
		___blendableVariation_15 = value;
	}

	inline static int32_t get_offset_of_bonePositionVariation_16() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___bonePositionVariation_16)); }
	inline float get_bonePositionVariation_16() const { return ___bonePositionVariation_16; }
	inline float* get_address_of_bonePositionVariation_16() { return &___bonePositionVariation_16; }
	inline void set_bonePositionVariation_16(float value)
	{
		___bonePositionVariation_16 = value;
	}

	inline static int32_t get_offset_of_boneRotationVariation_17() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___boneRotationVariation_17)); }
	inline float get_boneRotationVariation_17() const { return ___boneRotationVariation_17; }
	inline float* get_address_of_boneRotationVariation_17() { return &___boneRotationVariation_17; }
	inline void set_boneRotationVariation_17(float value)
	{
		___boneRotationVariation_17 = value;
	}

	inline static int32_t get_offset_of_invalid_18() { return static_cast<int32_t>(offsetof(EmotionMarker_t138136117, ___invalid_18)); }
	inline bool get_invalid_18() const { return ___invalid_18; }
	inline bool* get_address_of_invalid_18() { return &___invalid_18; }
	inline void set_invalid_18(bool value)
	{
		___invalid_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
