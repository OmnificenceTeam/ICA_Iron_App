#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// SpeechToText
struct SpeechToText_t596354928;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Transcript.MicrophoneController
struct  MicrophoneController_t3872428820  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource Assets.Transcript.MicrophoneController::audioSource
	AudioSource_t1135106623 * ___audioSource_0;
	// SpeechToText Assets.Transcript.MicrophoneController::speechToText
	SpeechToText_t596354928 * ___speechToText_1;
	// System.Boolean Assets.Transcript.MicrophoneController::isMicrophoneAvailable
	bool ___isMicrophoneAvailable_2;
	// System.Int32 Assets.Transcript.MicrophoneController::minFreq
	int32_t ___minFreq_3;
	// System.Int32 Assets.Transcript.MicrophoneController::maxFreq
	int32_t ___maxFreq_4;

public:
	inline static int32_t get_offset_of_audioSource_0() { return static_cast<int32_t>(offsetof(MicrophoneController_t3872428820, ___audioSource_0)); }
	inline AudioSource_t1135106623 * get_audioSource_0() const { return ___audioSource_0; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_0() { return &___audioSource_0; }
	inline void set_audioSource_0(AudioSource_t1135106623 * value)
	{
		___audioSource_0 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_0, value);
	}

	inline static int32_t get_offset_of_speechToText_1() { return static_cast<int32_t>(offsetof(MicrophoneController_t3872428820, ___speechToText_1)); }
	inline SpeechToText_t596354928 * get_speechToText_1() const { return ___speechToText_1; }
	inline SpeechToText_t596354928 ** get_address_of_speechToText_1() { return &___speechToText_1; }
	inline void set_speechToText_1(SpeechToText_t596354928 * value)
	{
		___speechToText_1 = value;
		Il2CppCodeGenWriteBarrier(&___speechToText_1, value);
	}

	inline static int32_t get_offset_of_isMicrophoneAvailable_2() { return static_cast<int32_t>(offsetof(MicrophoneController_t3872428820, ___isMicrophoneAvailable_2)); }
	inline bool get_isMicrophoneAvailable_2() const { return ___isMicrophoneAvailable_2; }
	inline bool* get_address_of_isMicrophoneAvailable_2() { return &___isMicrophoneAvailable_2; }
	inline void set_isMicrophoneAvailable_2(bool value)
	{
		___isMicrophoneAvailable_2 = value;
	}

	inline static int32_t get_offset_of_minFreq_3() { return static_cast<int32_t>(offsetof(MicrophoneController_t3872428820, ___minFreq_3)); }
	inline int32_t get_minFreq_3() const { return ___minFreq_3; }
	inline int32_t* get_address_of_minFreq_3() { return &___minFreq_3; }
	inline void set_minFreq_3(int32_t value)
	{
		___minFreq_3 = value;
	}

	inline static int32_t get_offset_of_maxFreq_4() { return static_cast<int32_t>(offsetof(MicrophoneController_t3872428820, ___maxFreq_4)); }
	inline int32_t get_maxFreq_4() const { return ___maxFreq_4; }
	inline int32_t* get_address_of_maxFreq_4() { return &___maxFreq_4; }
	inline void set_maxFreq_4(int32_t value)
	{
		___maxFreq_4 = value;
	}
};

struct MicrophoneController_t3872428820_StaticFields
{
public:
	// System.Int32 Assets.Transcript.MicrophoneController::LISTEN_PERIOD
	int32_t ___LISTEN_PERIOD_5;

public:
	inline static int32_t get_offset_of_LISTEN_PERIOD_5() { return static_cast<int32_t>(offsetof(MicrophoneController_t3872428820_StaticFields, ___LISTEN_PERIOD_5)); }
	inline int32_t get_LISTEN_PERIOD_5() const { return ___LISTEN_PERIOD_5; }
	inline int32_t* get_address_of_LISTEN_PERIOD_5() { return &___LISTEN_PERIOD_5; }
	inline void set_LISTEN_PERIOD_5(int32_t value)
	{
		___LISTEN_PERIOD_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
