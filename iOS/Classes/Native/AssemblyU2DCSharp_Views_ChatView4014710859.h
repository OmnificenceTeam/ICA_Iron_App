#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Views.ChatView
struct  ChatView_t4014710859  : public Il2CppObject
{
public:
	// UnityEngine.UI.Button Views.ChatView::backButton
	Button_t2872111280 * ___backButton_0;
	// UnityEngine.GameObject Views.ChatView::chatView
	GameObject_t1756533147 * ___chatView_1;
	// UnityEngine.Events.UnityAction Views.ChatView::OnChatClose
	UnityAction_t4025899511 * ___OnChatClose_2;

public:
	inline static int32_t get_offset_of_backButton_0() { return static_cast<int32_t>(offsetof(ChatView_t4014710859, ___backButton_0)); }
	inline Button_t2872111280 * get_backButton_0() const { return ___backButton_0; }
	inline Button_t2872111280 ** get_address_of_backButton_0() { return &___backButton_0; }
	inline void set_backButton_0(Button_t2872111280 * value)
	{
		___backButton_0 = value;
		Il2CppCodeGenWriteBarrier(&___backButton_0, value);
	}

	inline static int32_t get_offset_of_chatView_1() { return static_cast<int32_t>(offsetof(ChatView_t4014710859, ___chatView_1)); }
	inline GameObject_t1756533147 * get_chatView_1() const { return ___chatView_1; }
	inline GameObject_t1756533147 ** get_address_of_chatView_1() { return &___chatView_1; }
	inline void set_chatView_1(GameObject_t1756533147 * value)
	{
		___chatView_1 = value;
		Il2CppCodeGenWriteBarrier(&___chatView_1, value);
	}

	inline static int32_t get_offset_of_OnChatClose_2() { return static_cast<int32_t>(offsetof(ChatView_t4014710859, ___OnChatClose_2)); }
	inline UnityAction_t4025899511 * get_OnChatClose_2() const { return ___OnChatClose_2; }
	inline UnityAction_t4025899511 ** get_address_of_OnChatClose_2() { return &___OnChatClose_2; }
	inline void set_OnChatClose_2(UnityAction_t4025899511 * value)
	{
		___OnChatClose_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnChatClose_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
