#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// RogoDigital.Lipsync.LipSync
struct LipSync_t2119759184;
// UnityEngine.Sprite
struct Sprite_t309593783;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t2241232412;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<SentenceSelector.FAQ>>
struct Dictionary_2_t3855702080;
// System.Collections.Generic.List`1<SentenceSelector.MatchReport>
struct List_1_t1331967033;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t1199013257;
// System.Comparison`1<SentenceSelector.MatchReport>
struct Comparison_1_t3224584752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Views.TranscriptView
struct  TranscriptView_t2141872483  : public Il2CppObject
{
public:
	// UnityEngine.GameObject Views.TranscriptView::transcriptView
	GameObject_t1756533147 * ___transcriptView_0;
	// UnityEngine.GameObject Views.TranscriptView::questionListView
	GameObject_t1756533147 * ___questionListView_1;
	// UnityEngine.GameObject Views.TranscriptView::SelectOptionErrorMessage
	GameObject_t1756533147 * ___SelectOptionErrorMessage_2;
	// UnityEngine.UI.Image Views.TranscriptView::TranscriptImg
	Image_t2042527209 * ___TranscriptImg_3;
	// UnityEngine.UI.Text Views.TranscriptView::Transcript
	Text_t356221433 * ___Transcript_4;
	// UnityEngine.UI.Button Views.TranscriptView::btnTransClose
	Button_t2872111280 * ___btnTransClose_5;
	// UnityEngine.AudioSource Views.TranscriptView::audioSource
	AudioSource_t1135106623 * ___audioSource_6;
	// RogoDigital.Lipsync.LipSync Views.TranscriptView::lipSync
	LipSync_t2119759184 * ___lipSync_7;
	// UnityEngine.GameObject Views.TranscriptView::jade
	GameObject_t1756533147 * ___jade_8;
	// UnityEngine.GameObject Views.TranscriptView::Options
	GameObject_t1756533147 * ___Options_9;
	// UnityEngine.UI.Text Views.TranscriptView::SpokenText
	Text_t356221433 * ___SpokenText_10;
	// UnityEngine.UI.Button Views.TranscriptView::questionPrototype
	Button_t2872111280 * ___questionPrototype_11;
	// UnityEngine.GameObject Views.TranscriptView::questionHeaderPrototype
	GameObject_t1756533147 * ___questionHeaderPrototype_12;
	// UnityEngine.GameObject Views.TranscriptView::InputQueryView
	GameObject_t1756533147 * ___InputQueryView_13;
	// UnityEngine.Sprite Views.TranscriptView::checkedActive
	Sprite_t309593783 * ___checkedActive_14;
	// UnityEngine.Sprite Views.TranscriptView::checkedInactive
	Sprite_t309593783 * ___checkedInactive_15;
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> Views.TranscriptView::optionButtonList
	List_1_t2241232412 * ___optionButtonList_16;
	// UnityEngine.UI.Button Views.TranscriptView::btnSubmitChoice
	Button_t2872111280 * ___btnSubmitChoice_17;
	// UnityEngine.Events.UnityAction Views.TranscriptView::OnTranscriptClose
	UnityAction_t4025899511 * ___OnTranscriptClose_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<SentenceSelector.FAQ>> Views.TranscriptView::reports
	Dictionary_2_t3855702080 * ___reports_19;
	// System.Collections.Generic.List`1<SentenceSelector.MatchReport> Views.TranscriptView::conflict
	List_1_t1331967033 * ___conflict_20;
	// UnityEngine.UI.Button Views.TranscriptView::_activeChoice
	Button_t2872111280 * ____activeChoice_21;
	// System.Boolean Views.TranscriptView::isHelp
	bool ___isHelp_22;
	// UnityEngine.UI.ScrollRect Views.TranscriptView::transcriptContainer
	ScrollRect_t1199013257 * ___transcriptContainer_23;
	// UnityEngine.UI.ScrollRect Views.TranscriptView::questionContainer
	ScrollRect_t1199013257 * ___questionContainer_24;

public:
	inline static int32_t get_offset_of_transcriptView_0() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___transcriptView_0)); }
	inline GameObject_t1756533147 * get_transcriptView_0() const { return ___transcriptView_0; }
	inline GameObject_t1756533147 ** get_address_of_transcriptView_0() { return &___transcriptView_0; }
	inline void set_transcriptView_0(GameObject_t1756533147 * value)
	{
		___transcriptView_0 = value;
		Il2CppCodeGenWriteBarrier(&___transcriptView_0, value);
	}

	inline static int32_t get_offset_of_questionListView_1() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___questionListView_1)); }
	inline GameObject_t1756533147 * get_questionListView_1() const { return ___questionListView_1; }
	inline GameObject_t1756533147 ** get_address_of_questionListView_1() { return &___questionListView_1; }
	inline void set_questionListView_1(GameObject_t1756533147 * value)
	{
		___questionListView_1 = value;
		Il2CppCodeGenWriteBarrier(&___questionListView_1, value);
	}

	inline static int32_t get_offset_of_SelectOptionErrorMessage_2() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___SelectOptionErrorMessage_2)); }
	inline GameObject_t1756533147 * get_SelectOptionErrorMessage_2() const { return ___SelectOptionErrorMessage_2; }
	inline GameObject_t1756533147 ** get_address_of_SelectOptionErrorMessage_2() { return &___SelectOptionErrorMessage_2; }
	inline void set_SelectOptionErrorMessage_2(GameObject_t1756533147 * value)
	{
		___SelectOptionErrorMessage_2 = value;
		Il2CppCodeGenWriteBarrier(&___SelectOptionErrorMessage_2, value);
	}

	inline static int32_t get_offset_of_TranscriptImg_3() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___TranscriptImg_3)); }
	inline Image_t2042527209 * get_TranscriptImg_3() const { return ___TranscriptImg_3; }
	inline Image_t2042527209 ** get_address_of_TranscriptImg_3() { return &___TranscriptImg_3; }
	inline void set_TranscriptImg_3(Image_t2042527209 * value)
	{
		___TranscriptImg_3 = value;
		Il2CppCodeGenWriteBarrier(&___TranscriptImg_3, value);
	}

	inline static int32_t get_offset_of_Transcript_4() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___Transcript_4)); }
	inline Text_t356221433 * get_Transcript_4() const { return ___Transcript_4; }
	inline Text_t356221433 ** get_address_of_Transcript_4() { return &___Transcript_4; }
	inline void set_Transcript_4(Text_t356221433 * value)
	{
		___Transcript_4 = value;
		Il2CppCodeGenWriteBarrier(&___Transcript_4, value);
	}

	inline static int32_t get_offset_of_btnTransClose_5() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___btnTransClose_5)); }
	inline Button_t2872111280 * get_btnTransClose_5() const { return ___btnTransClose_5; }
	inline Button_t2872111280 ** get_address_of_btnTransClose_5() { return &___btnTransClose_5; }
	inline void set_btnTransClose_5(Button_t2872111280 * value)
	{
		___btnTransClose_5 = value;
		Il2CppCodeGenWriteBarrier(&___btnTransClose_5, value);
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___audioSource_6)); }
	inline AudioSource_t1135106623 * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_t1135106623 * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_6, value);
	}

	inline static int32_t get_offset_of_lipSync_7() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___lipSync_7)); }
	inline LipSync_t2119759184 * get_lipSync_7() const { return ___lipSync_7; }
	inline LipSync_t2119759184 ** get_address_of_lipSync_7() { return &___lipSync_7; }
	inline void set_lipSync_7(LipSync_t2119759184 * value)
	{
		___lipSync_7 = value;
		Il2CppCodeGenWriteBarrier(&___lipSync_7, value);
	}

	inline static int32_t get_offset_of_jade_8() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___jade_8)); }
	inline GameObject_t1756533147 * get_jade_8() const { return ___jade_8; }
	inline GameObject_t1756533147 ** get_address_of_jade_8() { return &___jade_8; }
	inline void set_jade_8(GameObject_t1756533147 * value)
	{
		___jade_8 = value;
		Il2CppCodeGenWriteBarrier(&___jade_8, value);
	}

	inline static int32_t get_offset_of_Options_9() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___Options_9)); }
	inline GameObject_t1756533147 * get_Options_9() const { return ___Options_9; }
	inline GameObject_t1756533147 ** get_address_of_Options_9() { return &___Options_9; }
	inline void set_Options_9(GameObject_t1756533147 * value)
	{
		___Options_9 = value;
		Il2CppCodeGenWriteBarrier(&___Options_9, value);
	}

	inline static int32_t get_offset_of_SpokenText_10() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___SpokenText_10)); }
	inline Text_t356221433 * get_SpokenText_10() const { return ___SpokenText_10; }
	inline Text_t356221433 ** get_address_of_SpokenText_10() { return &___SpokenText_10; }
	inline void set_SpokenText_10(Text_t356221433 * value)
	{
		___SpokenText_10 = value;
		Il2CppCodeGenWriteBarrier(&___SpokenText_10, value);
	}

	inline static int32_t get_offset_of_questionPrototype_11() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___questionPrototype_11)); }
	inline Button_t2872111280 * get_questionPrototype_11() const { return ___questionPrototype_11; }
	inline Button_t2872111280 ** get_address_of_questionPrototype_11() { return &___questionPrototype_11; }
	inline void set_questionPrototype_11(Button_t2872111280 * value)
	{
		___questionPrototype_11 = value;
		Il2CppCodeGenWriteBarrier(&___questionPrototype_11, value);
	}

	inline static int32_t get_offset_of_questionHeaderPrototype_12() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___questionHeaderPrototype_12)); }
	inline GameObject_t1756533147 * get_questionHeaderPrototype_12() const { return ___questionHeaderPrototype_12; }
	inline GameObject_t1756533147 ** get_address_of_questionHeaderPrototype_12() { return &___questionHeaderPrototype_12; }
	inline void set_questionHeaderPrototype_12(GameObject_t1756533147 * value)
	{
		___questionHeaderPrototype_12 = value;
		Il2CppCodeGenWriteBarrier(&___questionHeaderPrototype_12, value);
	}

	inline static int32_t get_offset_of_InputQueryView_13() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___InputQueryView_13)); }
	inline GameObject_t1756533147 * get_InputQueryView_13() const { return ___InputQueryView_13; }
	inline GameObject_t1756533147 ** get_address_of_InputQueryView_13() { return &___InputQueryView_13; }
	inline void set_InputQueryView_13(GameObject_t1756533147 * value)
	{
		___InputQueryView_13 = value;
		Il2CppCodeGenWriteBarrier(&___InputQueryView_13, value);
	}

	inline static int32_t get_offset_of_checkedActive_14() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___checkedActive_14)); }
	inline Sprite_t309593783 * get_checkedActive_14() const { return ___checkedActive_14; }
	inline Sprite_t309593783 ** get_address_of_checkedActive_14() { return &___checkedActive_14; }
	inline void set_checkedActive_14(Sprite_t309593783 * value)
	{
		___checkedActive_14 = value;
		Il2CppCodeGenWriteBarrier(&___checkedActive_14, value);
	}

	inline static int32_t get_offset_of_checkedInactive_15() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___checkedInactive_15)); }
	inline Sprite_t309593783 * get_checkedInactive_15() const { return ___checkedInactive_15; }
	inline Sprite_t309593783 ** get_address_of_checkedInactive_15() { return &___checkedInactive_15; }
	inline void set_checkedInactive_15(Sprite_t309593783 * value)
	{
		___checkedInactive_15 = value;
		Il2CppCodeGenWriteBarrier(&___checkedInactive_15, value);
	}

	inline static int32_t get_offset_of_optionButtonList_16() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___optionButtonList_16)); }
	inline List_1_t2241232412 * get_optionButtonList_16() const { return ___optionButtonList_16; }
	inline List_1_t2241232412 ** get_address_of_optionButtonList_16() { return &___optionButtonList_16; }
	inline void set_optionButtonList_16(List_1_t2241232412 * value)
	{
		___optionButtonList_16 = value;
		Il2CppCodeGenWriteBarrier(&___optionButtonList_16, value);
	}

	inline static int32_t get_offset_of_btnSubmitChoice_17() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___btnSubmitChoice_17)); }
	inline Button_t2872111280 * get_btnSubmitChoice_17() const { return ___btnSubmitChoice_17; }
	inline Button_t2872111280 ** get_address_of_btnSubmitChoice_17() { return &___btnSubmitChoice_17; }
	inline void set_btnSubmitChoice_17(Button_t2872111280 * value)
	{
		___btnSubmitChoice_17 = value;
		Il2CppCodeGenWriteBarrier(&___btnSubmitChoice_17, value);
	}

	inline static int32_t get_offset_of_OnTranscriptClose_18() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___OnTranscriptClose_18)); }
	inline UnityAction_t4025899511 * get_OnTranscriptClose_18() const { return ___OnTranscriptClose_18; }
	inline UnityAction_t4025899511 ** get_address_of_OnTranscriptClose_18() { return &___OnTranscriptClose_18; }
	inline void set_OnTranscriptClose_18(UnityAction_t4025899511 * value)
	{
		___OnTranscriptClose_18 = value;
		Il2CppCodeGenWriteBarrier(&___OnTranscriptClose_18, value);
	}

	inline static int32_t get_offset_of_reports_19() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___reports_19)); }
	inline Dictionary_2_t3855702080 * get_reports_19() const { return ___reports_19; }
	inline Dictionary_2_t3855702080 ** get_address_of_reports_19() { return &___reports_19; }
	inline void set_reports_19(Dictionary_2_t3855702080 * value)
	{
		___reports_19 = value;
		Il2CppCodeGenWriteBarrier(&___reports_19, value);
	}

	inline static int32_t get_offset_of_conflict_20() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___conflict_20)); }
	inline List_1_t1331967033 * get_conflict_20() const { return ___conflict_20; }
	inline List_1_t1331967033 ** get_address_of_conflict_20() { return &___conflict_20; }
	inline void set_conflict_20(List_1_t1331967033 * value)
	{
		___conflict_20 = value;
		Il2CppCodeGenWriteBarrier(&___conflict_20, value);
	}

	inline static int32_t get_offset_of__activeChoice_21() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ____activeChoice_21)); }
	inline Button_t2872111280 * get__activeChoice_21() const { return ____activeChoice_21; }
	inline Button_t2872111280 ** get_address_of__activeChoice_21() { return &____activeChoice_21; }
	inline void set__activeChoice_21(Button_t2872111280 * value)
	{
		____activeChoice_21 = value;
		Il2CppCodeGenWriteBarrier(&____activeChoice_21, value);
	}

	inline static int32_t get_offset_of_isHelp_22() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___isHelp_22)); }
	inline bool get_isHelp_22() const { return ___isHelp_22; }
	inline bool* get_address_of_isHelp_22() { return &___isHelp_22; }
	inline void set_isHelp_22(bool value)
	{
		___isHelp_22 = value;
	}

	inline static int32_t get_offset_of_transcriptContainer_23() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___transcriptContainer_23)); }
	inline ScrollRect_t1199013257 * get_transcriptContainer_23() const { return ___transcriptContainer_23; }
	inline ScrollRect_t1199013257 ** get_address_of_transcriptContainer_23() { return &___transcriptContainer_23; }
	inline void set_transcriptContainer_23(ScrollRect_t1199013257 * value)
	{
		___transcriptContainer_23 = value;
		Il2CppCodeGenWriteBarrier(&___transcriptContainer_23, value);
	}

	inline static int32_t get_offset_of_questionContainer_24() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483, ___questionContainer_24)); }
	inline ScrollRect_t1199013257 * get_questionContainer_24() const { return ___questionContainer_24; }
	inline ScrollRect_t1199013257 ** get_address_of_questionContainer_24() { return &___questionContainer_24; }
	inline void set_questionContainer_24(ScrollRect_t1199013257 * value)
	{
		___questionContainer_24 = value;
		Il2CppCodeGenWriteBarrier(&___questionContainer_24, value);
	}
};

struct TranscriptView_t2141872483_StaticFields
{
public:
	// System.Comparison`1<SentenceSelector.MatchReport> Views.TranscriptView::<>f__am$cache0
	Comparison_1_t3224584752 * ___U3CU3Ef__amU24cache0_25;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_25() { return static_cast<int32_t>(offsetof(TranscriptView_t2141872483_StaticFields, ___U3CU3Ef__amU24cache0_25)); }
	inline Comparison_1_t3224584752 * get_U3CU3Ef__amU24cache0_25() const { return ___U3CU3Ef__amU24cache0_25; }
	inline Comparison_1_t3224584752 ** get_address_of_U3CU3Ef__amU24cache0_25() { return &___U3CU3Ef__amU24cache0_25; }
	inline void set_U3CU3Ef__amU24cache0_25(Comparison_1_t3224584752 * value)
	{
		___U3CU3Ef__amU24cache0_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
