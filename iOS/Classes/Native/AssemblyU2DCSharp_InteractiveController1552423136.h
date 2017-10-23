#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SentenceSelector.Selector
struct Selector_t1245753893;
// InteractiveController/name
struct name_t851340774;
// Assets.Transcript.MicrophoneController
struct MicrophoneController_t3872428820;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InteractiveController
struct  InteractiveController_t1552423136  : public Il2CppObject
{
public:
	// SentenceSelector.Selector InteractiveController::selector
	Selector_t1245753893 * ___selector_0;
	// InteractiveController/name InteractiveController::OnSpeechRecognized
	name_t851340774 * ___OnSpeechRecognized_1;
	// Assets.Transcript.MicrophoneController InteractiveController::microphoneController
	MicrophoneController_t3872428820 * ___microphoneController_2;

public:
	inline static int32_t get_offset_of_selector_0() { return static_cast<int32_t>(offsetof(InteractiveController_t1552423136, ___selector_0)); }
	inline Selector_t1245753893 * get_selector_0() const { return ___selector_0; }
	inline Selector_t1245753893 ** get_address_of_selector_0() { return &___selector_0; }
	inline void set_selector_0(Selector_t1245753893 * value)
	{
		___selector_0 = value;
		Il2CppCodeGenWriteBarrier(&___selector_0, value);
	}

	inline static int32_t get_offset_of_OnSpeechRecognized_1() { return static_cast<int32_t>(offsetof(InteractiveController_t1552423136, ___OnSpeechRecognized_1)); }
	inline name_t851340774 * get_OnSpeechRecognized_1() const { return ___OnSpeechRecognized_1; }
	inline name_t851340774 ** get_address_of_OnSpeechRecognized_1() { return &___OnSpeechRecognized_1; }
	inline void set_OnSpeechRecognized_1(name_t851340774 * value)
	{
		___OnSpeechRecognized_1 = value;
		Il2CppCodeGenWriteBarrier(&___OnSpeechRecognized_1, value);
	}

	inline static int32_t get_offset_of_microphoneController_2() { return static_cast<int32_t>(offsetof(InteractiveController_t1552423136, ___microphoneController_2)); }
	inline MicrophoneController_t3872428820 * get_microphoneController_2() const { return ___microphoneController_2; }
	inline MicrophoneController_t3872428820 ** get_address_of_microphoneController_2() { return &___microphoneController_2; }
	inline void set_microphoneController_2(MicrophoneController_t3872428820 * value)
	{
		___microphoneController_2 = value;
		Il2CppCodeGenWriteBarrier(&___microphoneController_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
