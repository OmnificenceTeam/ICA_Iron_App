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
// UniWebView
struct UniWebView_t3614141785;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Views.PrivacyView
struct  PrivacyView_t2736946595  : public Il2CppObject
{
public:
	// UnityEngine.UI.Button Views.PrivacyView::backButton
	Button_t2872111280 * ___backButton_0;
	// UnityEngine.GameObject Views.PrivacyView::reminderView
	GameObject_t1756533147 * ___reminderView_1;
	// UnityEngine.GameObject Views.PrivacyView::jade
	GameObject_t1756533147 * ___jade_2;
	// UniWebView Views.PrivacyView::webView
	UniWebView_t3614141785 * ___webView_3;
	// UnityEngine.Events.UnityAction Views.PrivacyView::OnClose
	UnityAction_t4025899511 * ___OnClose_4;

public:
	inline static int32_t get_offset_of_backButton_0() { return static_cast<int32_t>(offsetof(PrivacyView_t2736946595, ___backButton_0)); }
	inline Button_t2872111280 * get_backButton_0() const { return ___backButton_0; }
	inline Button_t2872111280 ** get_address_of_backButton_0() { return &___backButton_0; }
	inline void set_backButton_0(Button_t2872111280 * value)
	{
		___backButton_0 = value;
		Il2CppCodeGenWriteBarrier(&___backButton_0, value);
	}

	inline static int32_t get_offset_of_reminderView_1() { return static_cast<int32_t>(offsetof(PrivacyView_t2736946595, ___reminderView_1)); }
	inline GameObject_t1756533147 * get_reminderView_1() const { return ___reminderView_1; }
	inline GameObject_t1756533147 ** get_address_of_reminderView_1() { return &___reminderView_1; }
	inline void set_reminderView_1(GameObject_t1756533147 * value)
	{
		___reminderView_1 = value;
		Il2CppCodeGenWriteBarrier(&___reminderView_1, value);
	}

	inline static int32_t get_offset_of_jade_2() { return static_cast<int32_t>(offsetof(PrivacyView_t2736946595, ___jade_2)); }
	inline GameObject_t1756533147 * get_jade_2() const { return ___jade_2; }
	inline GameObject_t1756533147 ** get_address_of_jade_2() { return &___jade_2; }
	inline void set_jade_2(GameObject_t1756533147 * value)
	{
		___jade_2 = value;
		Il2CppCodeGenWriteBarrier(&___jade_2, value);
	}

	inline static int32_t get_offset_of_webView_3() { return static_cast<int32_t>(offsetof(PrivacyView_t2736946595, ___webView_3)); }
	inline UniWebView_t3614141785 * get_webView_3() const { return ___webView_3; }
	inline UniWebView_t3614141785 ** get_address_of_webView_3() { return &___webView_3; }
	inline void set_webView_3(UniWebView_t3614141785 * value)
	{
		___webView_3 = value;
		Il2CppCodeGenWriteBarrier(&___webView_3, value);
	}

	inline static int32_t get_offset_of_OnClose_4() { return static_cast<int32_t>(offsetof(PrivacyView_t2736946595, ___OnClose_4)); }
	inline UnityAction_t4025899511 * get_OnClose_4() const { return ___OnClose_4; }
	inline UnityAction_t4025899511 ** get_address_of_OnClose_4() { return &___OnClose_4; }
	inline void set_OnClose_4(UnityAction_t4025899511 * value)
	{
		___OnClose_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnClose_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
