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
// SpeechToText/TranscriptSuccess
struct TranscriptSuccess_t1405080574;
// SpeechToText/Error
struct Error_t2244217907;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2756269959;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpeechToText
struct  SpeechToText_t596354928  : public Il2CppObject
{
public:
	// SpeechToText/TranscriptSuccess SpeechToText::OnTranscriptComplete
	TranscriptSuccess_t1405080574 * ___OnTranscriptComplete_2;
	// SpeechToText/Error SpeechToText::OnTranscriptFailed
	Error_t2244217907 * ___OnTranscriptFailed_3;

public:
	inline static int32_t get_offset_of_OnTranscriptComplete_2() { return static_cast<int32_t>(offsetof(SpeechToText_t596354928, ___OnTranscriptComplete_2)); }
	inline TranscriptSuccess_t1405080574 * get_OnTranscriptComplete_2() const { return ___OnTranscriptComplete_2; }
	inline TranscriptSuccess_t1405080574 ** get_address_of_OnTranscriptComplete_2() { return &___OnTranscriptComplete_2; }
	inline void set_OnTranscriptComplete_2(TranscriptSuccess_t1405080574 * value)
	{
		___OnTranscriptComplete_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnTranscriptComplete_2, value);
	}

	inline static int32_t get_offset_of_OnTranscriptFailed_3() { return static_cast<int32_t>(offsetof(SpeechToText_t596354928, ___OnTranscriptFailed_3)); }
	inline Error_t2244217907 * get_OnTranscriptFailed_3() const { return ___OnTranscriptFailed_3; }
	inline Error_t2244217907 ** get_address_of_OnTranscriptFailed_3() { return &___OnTranscriptFailed_3; }
	inline void set_OnTranscriptFailed_3(Error_t2244217907 * value)
	{
		___OnTranscriptFailed_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnTranscriptFailed_3, value);
	}
};

struct SpeechToText_t596354928_StaticFields
{
public:
	// System.Int32 SpeechToText::TRANSLATION_PERIOD
	int32_t ___TRANSLATION_PERIOD_0;
	// System.String SpeechToText::ACCESS_GOOGLE_SPEECH_KEY
	String_t* ___ACCESS_GOOGLE_SPEECH_KEY_1;
	// System.Net.Security.RemoteCertificateValidationCallback SpeechToText::<>f__am$cache0
	RemoteCertificateValidationCallback_t2756269959 * ___U3CU3Ef__amU24cache0_4;

public:
	inline static int32_t get_offset_of_TRANSLATION_PERIOD_0() { return static_cast<int32_t>(offsetof(SpeechToText_t596354928_StaticFields, ___TRANSLATION_PERIOD_0)); }
	inline int32_t get_TRANSLATION_PERIOD_0() const { return ___TRANSLATION_PERIOD_0; }
	inline int32_t* get_address_of_TRANSLATION_PERIOD_0() { return &___TRANSLATION_PERIOD_0; }
	inline void set_TRANSLATION_PERIOD_0(int32_t value)
	{
		___TRANSLATION_PERIOD_0 = value;
	}

	inline static int32_t get_offset_of_ACCESS_GOOGLE_SPEECH_KEY_1() { return static_cast<int32_t>(offsetof(SpeechToText_t596354928_StaticFields, ___ACCESS_GOOGLE_SPEECH_KEY_1)); }
	inline String_t* get_ACCESS_GOOGLE_SPEECH_KEY_1() const { return ___ACCESS_GOOGLE_SPEECH_KEY_1; }
	inline String_t** get_address_of_ACCESS_GOOGLE_SPEECH_KEY_1() { return &___ACCESS_GOOGLE_SPEECH_KEY_1; }
	inline void set_ACCESS_GOOGLE_SPEECH_KEY_1(String_t* value)
	{
		___ACCESS_GOOGLE_SPEECH_KEY_1 = value;
		Il2CppCodeGenWriteBarrier(&___ACCESS_GOOGLE_SPEECH_KEY_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(SpeechToText_t596354928_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline RemoteCertificateValidationCallback_t2756269959 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline RemoteCertificateValidationCallback_t2756269959 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(RemoteCertificateValidationCallback_t2756269959 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
