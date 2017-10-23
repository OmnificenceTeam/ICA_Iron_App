#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// RogoDigital.Lipsync.PhonemeMarker[]
struct PhonemeMarkerU5BU5D_t2131762177;
// RogoDigital.Lipsync.EmotionMarker[]
struct EmotionMarkerU5BU5D_t618497368;
// RogoDigital.Lipsync.GestureMarker[]
struct GestureMarkerU5BU5D_t3658850742;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.LipSyncData
struct  LipSyncData_t4127593376  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.AudioClip RogoDigital.Lipsync.LipSyncData::clip
	AudioClip_t1932558630 * ___clip_2;
	// RogoDigital.Lipsync.PhonemeMarker[] RogoDigital.Lipsync.LipSyncData::phonemeData
	PhonemeMarkerU5BU5D_t2131762177* ___phonemeData_3;
	// RogoDigital.Lipsync.EmotionMarker[] RogoDigital.Lipsync.LipSyncData::emotionData
	EmotionMarkerU5BU5D_t618497368* ___emotionData_4;
	// RogoDigital.Lipsync.GestureMarker[] RogoDigital.Lipsync.LipSyncData::gestureData
	GestureMarkerU5BU5D_t3658850742* ___gestureData_5;
	// System.Single RogoDigital.Lipsync.LipSyncData::version
	float ___version_6;
	// System.Single RogoDigital.Lipsync.LipSyncData::length
	float ___length_7;
	// System.String RogoDigital.Lipsync.LipSyncData::transcript
	String_t* ___transcript_8;

public:
	inline static int32_t get_offset_of_clip_2() { return static_cast<int32_t>(offsetof(LipSyncData_t4127593376, ___clip_2)); }
	inline AudioClip_t1932558630 * get_clip_2() const { return ___clip_2; }
	inline AudioClip_t1932558630 ** get_address_of_clip_2() { return &___clip_2; }
	inline void set_clip_2(AudioClip_t1932558630 * value)
	{
		___clip_2 = value;
		Il2CppCodeGenWriteBarrier(&___clip_2, value);
	}

	inline static int32_t get_offset_of_phonemeData_3() { return static_cast<int32_t>(offsetof(LipSyncData_t4127593376, ___phonemeData_3)); }
	inline PhonemeMarkerU5BU5D_t2131762177* get_phonemeData_3() const { return ___phonemeData_3; }
	inline PhonemeMarkerU5BU5D_t2131762177** get_address_of_phonemeData_3() { return &___phonemeData_3; }
	inline void set_phonemeData_3(PhonemeMarkerU5BU5D_t2131762177* value)
	{
		___phonemeData_3 = value;
		Il2CppCodeGenWriteBarrier(&___phonemeData_3, value);
	}

	inline static int32_t get_offset_of_emotionData_4() { return static_cast<int32_t>(offsetof(LipSyncData_t4127593376, ___emotionData_4)); }
	inline EmotionMarkerU5BU5D_t618497368* get_emotionData_4() const { return ___emotionData_4; }
	inline EmotionMarkerU5BU5D_t618497368** get_address_of_emotionData_4() { return &___emotionData_4; }
	inline void set_emotionData_4(EmotionMarkerU5BU5D_t618497368* value)
	{
		___emotionData_4 = value;
		Il2CppCodeGenWriteBarrier(&___emotionData_4, value);
	}

	inline static int32_t get_offset_of_gestureData_5() { return static_cast<int32_t>(offsetof(LipSyncData_t4127593376, ___gestureData_5)); }
	inline GestureMarkerU5BU5D_t3658850742* get_gestureData_5() const { return ___gestureData_5; }
	inline GestureMarkerU5BU5D_t3658850742** get_address_of_gestureData_5() { return &___gestureData_5; }
	inline void set_gestureData_5(GestureMarkerU5BU5D_t3658850742* value)
	{
		___gestureData_5 = value;
		Il2CppCodeGenWriteBarrier(&___gestureData_5, value);
	}

	inline static int32_t get_offset_of_version_6() { return static_cast<int32_t>(offsetof(LipSyncData_t4127593376, ___version_6)); }
	inline float get_version_6() const { return ___version_6; }
	inline float* get_address_of_version_6() { return &___version_6; }
	inline void set_version_6(float value)
	{
		___version_6 = value;
	}

	inline static int32_t get_offset_of_length_7() { return static_cast<int32_t>(offsetof(LipSyncData_t4127593376, ___length_7)); }
	inline float get_length_7() const { return ___length_7; }
	inline float* get_address_of_length_7() { return &___length_7; }
	inline void set_length_7(float value)
	{
		___length_7 = value;
	}

	inline static int32_t get_offset_of_transcript_8() { return static_cast<int32_t>(offsetof(LipSyncData_t4127593376, ___transcript_8)); }
	inline String_t* get_transcript_8() const { return ___transcript_8; }
	inline String_t** get_address_of_transcript_8() { return &___transcript_8; }
	inline void set_transcript_8(String_t* value)
	{
		___transcript_8 = value;
		Il2CppCodeGenWriteBarrier(&___transcript_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
