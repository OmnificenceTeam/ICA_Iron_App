#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;
// MenuController
struct MenuController_t848154101;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// InteractiveController
struct InteractiveController_t1552423136;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.Collections.Generic.List`1<SentenceSelector.MatchReport>
struct List_1_t1331967033;
// Views.ViewManager
struct ViewManager_t3955390442;
// Views.TranscriptView
struct TranscriptView_t2141872483;
// Views.HomeView
struct HomeView_t3328271132;
// Views.KeyboardView
struct KeyboardView_t2410752042;
// Views.ErrorView
struct ErrorView_t2098714569;
// Views.RecordView
struct RecordView_t370637074;
// Views.ChatView
struct ChatView_t4014710859;
// Views.ReminderView
struct ReminderView_t683333339;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ApplicationController
struct  ApplicationController_t2870996238  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator ApplicationController::menuAnimator
	Animator_t69676727 * ___menuAnimator_2;
	// MenuController ApplicationController::menu
	MenuController_t848154101 * ___menu_3;
	// UnityEngine.UI.Button ApplicationController::btnMenu
	Button_t2872111280 * ___btnMenu_4;
	// UnityEngine.UI.Button ApplicationController::btnHelp
	Button_t2872111280 * ___btnHelp_5;
	// UnityEngine.GameObject ApplicationController::HomeObject
	GameObject_t1756533147 * ___HomeObject_6;
	// InteractiveController ApplicationController::interactiveController
	InteractiveController_t1552423136 * ___interactiveController_7;
	// UnityEngine.AudioSource ApplicationController::audioSource
	AudioSource_t1135106623 * ___audioSource_8;
	// System.Threading.ManualResetEvent ApplicationController::waitEvent
	ManualResetEvent_t926074657 * ___waitEvent_9;
	// System.Collections.Generic.List`1<SentenceSelector.MatchReport> ApplicationController::matchedQueries
	List_1_t1331967033 * ___matchedQueries_10;
	// Views.ViewManager ApplicationController::_viewManager
	ViewManager_t3955390442 * ____viewManager_11;
	// Views.TranscriptView ApplicationController::transView
	TranscriptView_t2141872483 * ___transView_12;
	// Views.HomeView ApplicationController::homeView
	HomeView_t3328271132 * ___homeView_13;
	// Views.KeyboardView ApplicationController::keyView
	KeyboardView_t2410752042 * ___keyView_14;
	// Views.ErrorView ApplicationController::errorView
	ErrorView_t2098714569 * ___errorView_15;
	// Views.RecordView ApplicationController::recordView
	RecordView_t370637074 * ___recordView_16;
	// Views.ChatView ApplicationController::chatView
	ChatView_t4014710859 * ___chatView_17;
	// Views.ReminderView ApplicationController::reminderView
	ReminderView_t683333339 * ___reminderView_18;
	// System.String ApplicationController::spokenText
	String_t* ___spokenText_19;
	// UnityEngine.GameObject ApplicationController::RegistrationView
	GameObject_t1756533147 * ___RegistrationView_20;

public:
	inline static int32_t get_offset_of_menuAnimator_2() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___menuAnimator_2)); }
	inline Animator_t69676727 * get_menuAnimator_2() const { return ___menuAnimator_2; }
	inline Animator_t69676727 ** get_address_of_menuAnimator_2() { return &___menuAnimator_2; }
	inline void set_menuAnimator_2(Animator_t69676727 * value)
	{
		___menuAnimator_2 = value;
		Il2CppCodeGenWriteBarrier(&___menuAnimator_2, value);
	}

	inline static int32_t get_offset_of_menu_3() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___menu_3)); }
	inline MenuController_t848154101 * get_menu_3() const { return ___menu_3; }
	inline MenuController_t848154101 ** get_address_of_menu_3() { return &___menu_3; }
	inline void set_menu_3(MenuController_t848154101 * value)
	{
		___menu_3 = value;
		Il2CppCodeGenWriteBarrier(&___menu_3, value);
	}

	inline static int32_t get_offset_of_btnMenu_4() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___btnMenu_4)); }
	inline Button_t2872111280 * get_btnMenu_4() const { return ___btnMenu_4; }
	inline Button_t2872111280 ** get_address_of_btnMenu_4() { return &___btnMenu_4; }
	inline void set_btnMenu_4(Button_t2872111280 * value)
	{
		___btnMenu_4 = value;
		Il2CppCodeGenWriteBarrier(&___btnMenu_4, value);
	}

	inline static int32_t get_offset_of_btnHelp_5() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___btnHelp_5)); }
	inline Button_t2872111280 * get_btnHelp_5() const { return ___btnHelp_5; }
	inline Button_t2872111280 ** get_address_of_btnHelp_5() { return &___btnHelp_5; }
	inline void set_btnHelp_5(Button_t2872111280 * value)
	{
		___btnHelp_5 = value;
		Il2CppCodeGenWriteBarrier(&___btnHelp_5, value);
	}

	inline static int32_t get_offset_of_HomeObject_6() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___HomeObject_6)); }
	inline GameObject_t1756533147 * get_HomeObject_6() const { return ___HomeObject_6; }
	inline GameObject_t1756533147 ** get_address_of_HomeObject_6() { return &___HomeObject_6; }
	inline void set_HomeObject_6(GameObject_t1756533147 * value)
	{
		___HomeObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___HomeObject_6, value);
	}

	inline static int32_t get_offset_of_interactiveController_7() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___interactiveController_7)); }
	inline InteractiveController_t1552423136 * get_interactiveController_7() const { return ___interactiveController_7; }
	inline InteractiveController_t1552423136 ** get_address_of_interactiveController_7() { return &___interactiveController_7; }
	inline void set_interactiveController_7(InteractiveController_t1552423136 * value)
	{
		___interactiveController_7 = value;
		Il2CppCodeGenWriteBarrier(&___interactiveController_7, value);
	}

	inline static int32_t get_offset_of_audioSource_8() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___audioSource_8)); }
	inline AudioSource_t1135106623 * get_audioSource_8() const { return ___audioSource_8; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_8() { return &___audioSource_8; }
	inline void set_audioSource_8(AudioSource_t1135106623 * value)
	{
		___audioSource_8 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_8, value);
	}

	inline static int32_t get_offset_of_waitEvent_9() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___waitEvent_9)); }
	inline ManualResetEvent_t926074657 * get_waitEvent_9() const { return ___waitEvent_9; }
	inline ManualResetEvent_t926074657 ** get_address_of_waitEvent_9() { return &___waitEvent_9; }
	inline void set_waitEvent_9(ManualResetEvent_t926074657 * value)
	{
		___waitEvent_9 = value;
		Il2CppCodeGenWriteBarrier(&___waitEvent_9, value);
	}

	inline static int32_t get_offset_of_matchedQueries_10() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___matchedQueries_10)); }
	inline List_1_t1331967033 * get_matchedQueries_10() const { return ___matchedQueries_10; }
	inline List_1_t1331967033 ** get_address_of_matchedQueries_10() { return &___matchedQueries_10; }
	inline void set_matchedQueries_10(List_1_t1331967033 * value)
	{
		___matchedQueries_10 = value;
		Il2CppCodeGenWriteBarrier(&___matchedQueries_10, value);
	}

	inline static int32_t get_offset_of__viewManager_11() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ____viewManager_11)); }
	inline ViewManager_t3955390442 * get__viewManager_11() const { return ____viewManager_11; }
	inline ViewManager_t3955390442 ** get_address_of__viewManager_11() { return &____viewManager_11; }
	inline void set__viewManager_11(ViewManager_t3955390442 * value)
	{
		____viewManager_11 = value;
		Il2CppCodeGenWriteBarrier(&____viewManager_11, value);
	}

	inline static int32_t get_offset_of_transView_12() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___transView_12)); }
	inline TranscriptView_t2141872483 * get_transView_12() const { return ___transView_12; }
	inline TranscriptView_t2141872483 ** get_address_of_transView_12() { return &___transView_12; }
	inline void set_transView_12(TranscriptView_t2141872483 * value)
	{
		___transView_12 = value;
		Il2CppCodeGenWriteBarrier(&___transView_12, value);
	}

	inline static int32_t get_offset_of_homeView_13() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___homeView_13)); }
	inline HomeView_t3328271132 * get_homeView_13() const { return ___homeView_13; }
	inline HomeView_t3328271132 ** get_address_of_homeView_13() { return &___homeView_13; }
	inline void set_homeView_13(HomeView_t3328271132 * value)
	{
		___homeView_13 = value;
		Il2CppCodeGenWriteBarrier(&___homeView_13, value);
	}

	inline static int32_t get_offset_of_keyView_14() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___keyView_14)); }
	inline KeyboardView_t2410752042 * get_keyView_14() const { return ___keyView_14; }
	inline KeyboardView_t2410752042 ** get_address_of_keyView_14() { return &___keyView_14; }
	inline void set_keyView_14(KeyboardView_t2410752042 * value)
	{
		___keyView_14 = value;
		Il2CppCodeGenWriteBarrier(&___keyView_14, value);
	}

	inline static int32_t get_offset_of_errorView_15() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___errorView_15)); }
	inline ErrorView_t2098714569 * get_errorView_15() const { return ___errorView_15; }
	inline ErrorView_t2098714569 ** get_address_of_errorView_15() { return &___errorView_15; }
	inline void set_errorView_15(ErrorView_t2098714569 * value)
	{
		___errorView_15 = value;
		Il2CppCodeGenWriteBarrier(&___errorView_15, value);
	}

	inline static int32_t get_offset_of_recordView_16() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___recordView_16)); }
	inline RecordView_t370637074 * get_recordView_16() const { return ___recordView_16; }
	inline RecordView_t370637074 ** get_address_of_recordView_16() { return &___recordView_16; }
	inline void set_recordView_16(RecordView_t370637074 * value)
	{
		___recordView_16 = value;
		Il2CppCodeGenWriteBarrier(&___recordView_16, value);
	}

	inline static int32_t get_offset_of_chatView_17() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___chatView_17)); }
	inline ChatView_t4014710859 * get_chatView_17() const { return ___chatView_17; }
	inline ChatView_t4014710859 ** get_address_of_chatView_17() { return &___chatView_17; }
	inline void set_chatView_17(ChatView_t4014710859 * value)
	{
		___chatView_17 = value;
		Il2CppCodeGenWriteBarrier(&___chatView_17, value);
	}

	inline static int32_t get_offset_of_reminderView_18() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___reminderView_18)); }
	inline ReminderView_t683333339 * get_reminderView_18() const { return ___reminderView_18; }
	inline ReminderView_t683333339 ** get_address_of_reminderView_18() { return &___reminderView_18; }
	inline void set_reminderView_18(ReminderView_t683333339 * value)
	{
		___reminderView_18 = value;
		Il2CppCodeGenWriteBarrier(&___reminderView_18, value);
	}

	inline static int32_t get_offset_of_spokenText_19() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___spokenText_19)); }
	inline String_t* get_spokenText_19() const { return ___spokenText_19; }
	inline String_t** get_address_of_spokenText_19() { return &___spokenText_19; }
	inline void set_spokenText_19(String_t* value)
	{
		___spokenText_19 = value;
		Il2CppCodeGenWriteBarrier(&___spokenText_19, value);
	}

	inline static int32_t get_offset_of_RegistrationView_20() { return static_cast<int32_t>(offsetof(ApplicationController_t2870996238, ___RegistrationView_20)); }
	inline GameObject_t1756533147 * get_RegistrationView_20() const { return ___RegistrationView_20; }
	inline GameObject_t1756533147 ** get_address_of_RegistrationView_20() { return &___RegistrationView_20; }
	inline void set_RegistrationView_20(GameObject_t1756533147 * value)
	{
		___RegistrationView_20 = value;
		Il2CppCodeGenWriteBarrier(&___RegistrationView_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
