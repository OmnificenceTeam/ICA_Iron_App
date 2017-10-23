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

// Views.HomeView
struct  HomeView_t3328271132  : public Il2CppObject
{
public:
	// UnityEngine.UI.Button Views.HomeView::btnKeyboard
	Button_t2872111280 * ___btnKeyboard_0;
	// UnityEngine.UI.Button Views.HomeView::btnMic
	Button_t2872111280 * ___btnMic_1;
	// UnityEngine.GameObject Views.HomeView::jade
	GameObject_t1756533147 * ___jade_2;
	// UnityEngine.Events.UnityAction Views.HomeView::OnKeyboard
	UnityAction_t4025899511 * ___OnKeyboard_3;
	// UnityEngine.Events.UnityAction Views.HomeView::OnMicrophone
	UnityAction_t4025899511 * ___OnMicrophone_4;

public:
	inline static int32_t get_offset_of_btnKeyboard_0() { return static_cast<int32_t>(offsetof(HomeView_t3328271132, ___btnKeyboard_0)); }
	inline Button_t2872111280 * get_btnKeyboard_0() const { return ___btnKeyboard_0; }
	inline Button_t2872111280 ** get_address_of_btnKeyboard_0() { return &___btnKeyboard_0; }
	inline void set_btnKeyboard_0(Button_t2872111280 * value)
	{
		___btnKeyboard_0 = value;
		Il2CppCodeGenWriteBarrier(&___btnKeyboard_0, value);
	}

	inline static int32_t get_offset_of_btnMic_1() { return static_cast<int32_t>(offsetof(HomeView_t3328271132, ___btnMic_1)); }
	inline Button_t2872111280 * get_btnMic_1() const { return ___btnMic_1; }
	inline Button_t2872111280 ** get_address_of_btnMic_1() { return &___btnMic_1; }
	inline void set_btnMic_1(Button_t2872111280 * value)
	{
		___btnMic_1 = value;
		Il2CppCodeGenWriteBarrier(&___btnMic_1, value);
	}

	inline static int32_t get_offset_of_jade_2() { return static_cast<int32_t>(offsetof(HomeView_t3328271132, ___jade_2)); }
	inline GameObject_t1756533147 * get_jade_2() const { return ___jade_2; }
	inline GameObject_t1756533147 ** get_address_of_jade_2() { return &___jade_2; }
	inline void set_jade_2(GameObject_t1756533147 * value)
	{
		___jade_2 = value;
		Il2CppCodeGenWriteBarrier(&___jade_2, value);
	}

	inline static int32_t get_offset_of_OnKeyboard_3() { return static_cast<int32_t>(offsetof(HomeView_t3328271132, ___OnKeyboard_3)); }
	inline UnityAction_t4025899511 * get_OnKeyboard_3() const { return ___OnKeyboard_3; }
	inline UnityAction_t4025899511 ** get_address_of_OnKeyboard_3() { return &___OnKeyboard_3; }
	inline void set_OnKeyboard_3(UnityAction_t4025899511 * value)
	{
		___OnKeyboard_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnKeyboard_3, value);
	}

	inline static int32_t get_offset_of_OnMicrophone_4() { return static_cast<int32_t>(offsetof(HomeView_t3328271132, ___OnMicrophone_4)); }
	inline UnityAction_t4025899511 * get_OnMicrophone_4() const { return ___OnMicrophone_4; }
	inline UnityAction_t4025899511 ** get_address_of_OnMicrophone_4() { return &___OnMicrophone_4; }
	inline void set_OnMicrophone_4(UnityAction_t4025899511 * value)
	{
		___OnMicrophone_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnMicrophone_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
