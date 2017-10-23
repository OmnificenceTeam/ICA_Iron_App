#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatController
struct  ChatController_t2669781690  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button ChatController::querySubmit
	Button_t2872111280 * ___querySubmit_2;
	// UnityEngine.GameObject ChatController::botMessage
	GameObject_t1756533147 * ___botMessage_3;
	// UnityEngine.GameObject ChatController::userMessage
	GameObject_t1756533147 * ___userMessage_4;
	// UnityEngine.UI.InputField ChatController::userInput
	InputField_t1631627530 * ___userInput_5;
	// UnityEngine.GameObject ChatController::chatPanel
	GameObject_t1756533147 * ___chatPanel_6;
	// UnityEngine.UI.ScrollRect ChatController::chatScroll
	ScrollRect_t1199013257 * ___chatScroll_7;
	// System.Single ChatController::speed
	float ___speed_8;
	// System.Boolean ChatController::bScroll
	bool ___bScroll_9;
	// UnityEngine.GameObject ChatController::botmsg
	GameObject_t1756533147 * ___botmsg_10;
	// UnityEngine.GameObject ChatController::usermsg
	GameObject_t1756533147 * ___usermsg_11;
	// UnityEngine.RectTransform ChatController::panelRect
	RectTransform_t3349966182 * ___panelRect_12;
	// System.Single ChatController::panelHeight
	float ___panelHeight_13;

public:
	inline static int32_t get_offset_of_querySubmit_2() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___querySubmit_2)); }
	inline Button_t2872111280 * get_querySubmit_2() const { return ___querySubmit_2; }
	inline Button_t2872111280 ** get_address_of_querySubmit_2() { return &___querySubmit_2; }
	inline void set_querySubmit_2(Button_t2872111280 * value)
	{
		___querySubmit_2 = value;
		Il2CppCodeGenWriteBarrier(&___querySubmit_2, value);
	}

	inline static int32_t get_offset_of_botMessage_3() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___botMessage_3)); }
	inline GameObject_t1756533147 * get_botMessage_3() const { return ___botMessage_3; }
	inline GameObject_t1756533147 ** get_address_of_botMessage_3() { return &___botMessage_3; }
	inline void set_botMessage_3(GameObject_t1756533147 * value)
	{
		___botMessage_3 = value;
		Il2CppCodeGenWriteBarrier(&___botMessage_3, value);
	}

	inline static int32_t get_offset_of_userMessage_4() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___userMessage_4)); }
	inline GameObject_t1756533147 * get_userMessage_4() const { return ___userMessage_4; }
	inline GameObject_t1756533147 ** get_address_of_userMessage_4() { return &___userMessage_4; }
	inline void set_userMessage_4(GameObject_t1756533147 * value)
	{
		___userMessage_4 = value;
		Il2CppCodeGenWriteBarrier(&___userMessage_4, value);
	}

	inline static int32_t get_offset_of_userInput_5() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___userInput_5)); }
	inline InputField_t1631627530 * get_userInput_5() const { return ___userInput_5; }
	inline InputField_t1631627530 ** get_address_of_userInput_5() { return &___userInput_5; }
	inline void set_userInput_5(InputField_t1631627530 * value)
	{
		___userInput_5 = value;
		Il2CppCodeGenWriteBarrier(&___userInput_5, value);
	}

	inline static int32_t get_offset_of_chatPanel_6() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___chatPanel_6)); }
	inline GameObject_t1756533147 * get_chatPanel_6() const { return ___chatPanel_6; }
	inline GameObject_t1756533147 ** get_address_of_chatPanel_6() { return &___chatPanel_6; }
	inline void set_chatPanel_6(GameObject_t1756533147 * value)
	{
		___chatPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___chatPanel_6, value);
	}

	inline static int32_t get_offset_of_chatScroll_7() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___chatScroll_7)); }
	inline ScrollRect_t1199013257 * get_chatScroll_7() const { return ___chatScroll_7; }
	inline ScrollRect_t1199013257 ** get_address_of_chatScroll_7() { return &___chatScroll_7; }
	inline void set_chatScroll_7(ScrollRect_t1199013257 * value)
	{
		___chatScroll_7 = value;
		Il2CppCodeGenWriteBarrier(&___chatScroll_7, value);
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_bScroll_9() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___bScroll_9)); }
	inline bool get_bScroll_9() const { return ___bScroll_9; }
	inline bool* get_address_of_bScroll_9() { return &___bScroll_9; }
	inline void set_bScroll_9(bool value)
	{
		___bScroll_9 = value;
	}

	inline static int32_t get_offset_of_botmsg_10() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___botmsg_10)); }
	inline GameObject_t1756533147 * get_botmsg_10() const { return ___botmsg_10; }
	inline GameObject_t1756533147 ** get_address_of_botmsg_10() { return &___botmsg_10; }
	inline void set_botmsg_10(GameObject_t1756533147 * value)
	{
		___botmsg_10 = value;
		Il2CppCodeGenWriteBarrier(&___botmsg_10, value);
	}

	inline static int32_t get_offset_of_usermsg_11() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___usermsg_11)); }
	inline GameObject_t1756533147 * get_usermsg_11() const { return ___usermsg_11; }
	inline GameObject_t1756533147 ** get_address_of_usermsg_11() { return &___usermsg_11; }
	inline void set_usermsg_11(GameObject_t1756533147 * value)
	{
		___usermsg_11 = value;
		Il2CppCodeGenWriteBarrier(&___usermsg_11, value);
	}

	inline static int32_t get_offset_of_panelRect_12() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___panelRect_12)); }
	inline RectTransform_t3349966182 * get_panelRect_12() const { return ___panelRect_12; }
	inline RectTransform_t3349966182 ** get_address_of_panelRect_12() { return &___panelRect_12; }
	inline void set_panelRect_12(RectTransform_t3349966182 * value)
	{
		___panelRect_12 = value;
		Il2CppCodeGenWriteBarrier(&___panelRect_12, value);
	}

	inline static int32_t get_offset_of_panelHeight_13() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___panelHeight_13)); }
	inline float get_panelHeight_13() const { return ___panelHeight_13; }
	inline float* get_address_of_panelHeight_13() { return &___panelHeight_13; }
	inline void set_panelHeight_13(float value)
	{
		___panelHeight_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
