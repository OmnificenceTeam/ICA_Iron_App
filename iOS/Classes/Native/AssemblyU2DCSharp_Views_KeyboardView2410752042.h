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
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t3395805984;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Views.KeyboardView
struct  KeyboardView_t2410752042  : public Il2CppObject
{
public:
	// UnityEngine.UI.Button Views.KeyboardView::btnClose
	Button_t2872111280 * ___btnClose_0;
	// UnityEngine.UI.Image Views.KeyboardView::imgKeyboardView
	Image_t2042527209 * ___imgKeyboardView_1;
	// UnityEngine.UI.InputField Views.KeyboardView::inputText
	InputField_t1631627530 * ___inputText_2;
	// UnityEngine.GameObject Views.KeyboardView::jade
	GameObject_t1756533147 * ___jade_3;
	// UnityEngine.UI.Button Views.KeyboardView::backButton
	Button_t2872111280 * ___backButton_4;
	// UnityEngine.Events.UnityAction`1<System.String> Views.KeyboardView::OnKeyboardQuery
	UnityAction_1_t3395805984 * ___OnKeyboardQuery_5;
	// UnityEngine.Events.UnityAction Views.KeyboardView::OnClose
	UnityAction_t4025899511 * ___OnClose_6;

public:
	inline static int32_t get_offset_of_btnClose_0() { return static_cast<int32_t>(offsetof(KeyboardView_t2410752042, ___btnClose_0)); }
	inline Button_t2872111280 * get_btnClose_0() const { return ___btnClose_0; }
	inline Button_t2872111280 ** get_address_of_btnClose_0() { return &___btnClose_0; }
	inline void set_btnClose_0(Button_t2872111280 * value)
	{
		___btnClose_0 = value;
		Il2CppCodeGenWriteBarrier(&___btnClose_0, value);
	}

	inline static int32_t get_offset_of_imgKeyboardView_1() { return static_cast<int32_t>(offsetof(KeyboardView_t2410752042, ___imgKeyboardView_1)); }
	inline Image_t2042527209 * get_imgKeyboardView_1() const { return ___imgKeyboardView_1; }
	inline Image_t2042527209 ** get_address_of_imgKeyboardView_1() { return &___imgKeyboardView_1; }
	inline void set_imgKeyboardView_1(Image_t2042527209 * value)
	{
		___imgKeyboardView_1 = value;
		Il2CppCodeGenWriteBarrier(&___imgKeyboardView_1, value);
	}

	inline static int32_t get_offset_of_inputText_2() { return static_cast<int32_t>(offsetof(KeyboardView_t2410752042, ___inputText_2)); }
	inline InputField_t1631627530 * get_inputText_2() const { return ___inputText_2; }
	inline InputField_t1631627530 ** get_address_of_inputText_2() { return &___inputText_2; }
	inline void set_inputText_2(InputField_t1631627530 * value)
	{
		___inputText_2 = value;
		Il2CppCodeGenWriteBarrier(&___inputText_2, value);
	}

	inline static int32_t get_offset_of_jade_3() { return static_cast<int32_t>(offsetof(KeyboardView_t2410752042, ___jade_3)); }
	inline GameObject_t1756533147 * get_jade_3() const { return ___jade_3; }
	inline GameObject_t1756533147 ** get_address_of_jade_3() { return &___jade_3; }
	inline void set_jade_3(GameObject_t1756533147 * value)
	{
		___jade_3 = value;
		Il2CppCodeGenWriteBarrier(&___jade_3, value);
	}

	inline static int32_t get_offset_of_backButton_4() { return static_cast<int32_t>(offsetof(KeyboardView_t2410752042, ___backButton_4)); }
	inline Button_t2872111280 * get_backButton_4() const { return ___backButton_4; }
	inline Button_t2872111280 ** get_address_of_backButton_4() { return &___backButton_4; }
	inline void set_backButton_4(Button_t2872111280 * value)
	{
		___backButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___backButton_4, value);
	}

	inline static int32_t get_offset_of_OnKeyboardQuery_5() { return static_cast<int32_t>(offsetof(KeyboardView_t2410752042, ___OnKeyboardQuery_5)); }
	inline UnityAction_1_t3395805984 * get_OnKeyboardQuery_5() const { return ___OnKeyboardQuery_5; }
	inline UnityAction_1_t3395805984 ** get_address_of_OnKeyboardQuery_5() { return &___OnKeyboardQuery_5; }
	inline void set_OnKeyboardQuery_5(UnityAction_1_t3395805984 * value)
	{
		___OnKeyboardQuery_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnKeyboardQuery_5, value);
	}

	inline static int32_t get_offset_of_OnClose_6() { return static_cast<int32_t>(offsetof(KeyboardView_t2410752042, ___OnClose_6)); }
	inline UnityAction_t4025899511 * get_OnClose_6() const { return ___OnClose_6; }
	inline UnityAction_t4025899511 ** get_address_of_OnClose_6() { return &___OnClose_6; }
	inline void set_OnClose_6(UnityAction_t4025899511 * value)
	{
		___OnClose_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnClose_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
