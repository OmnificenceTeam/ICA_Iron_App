#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RogoDigital_Lipsync_BlendSystemUs526961539.h"
#include "AssemblyU2DCSharp_RogoDigital_Lipsync_LipSync_Anima595669715.h"
#include "AssemblyU2DCSharp_RogoDigital_Lipsync_LipSync_Curv4237124834.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.PhonemeShape>
struct List_1_t2417838819;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.EmotionShape>
struct List_1_t1183258026;
// RogoDigital.Lipsync.LipSyncData
struct LipSyncData_t4127593376;
// UnityEngine.Animator
struct Animator_t69676727;
// System.Collections.Generic.List`1<GestureInstance>
struct List_1_t3650176796;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t408735097;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.Dictionary`2<System.String,RogoDigital.Lipsync.EmotionShape>
struct Dictionary_2_t3728916156;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.PhonemeMarker>
struct List_1_t1671078252;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.EmotionMarker>
struct List_1_t3802224545;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.GestureMarker>
struct List_1_t2625427483;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<UnityEngine.AnimationCurve>
struct List_1_t2675662283;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t2644239190;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.TransformAnimationCurve>
struct List_1_t1552408875;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t3399195050;
// RogoDigital.Lipsync.LipSync/ResetDelegate
struct ResetDelegate_t65150868;
// System.Comparison`1<RogoDigital.Lipsync.PhonemeMarker>
struct Comparison_1_t3563695971;
// System.Comparison`1<RogoDigital.Lipsync.GestureMarker>
struct Comparison_1_t223077906;
// System.Comparison`1<RogoDigital.Lipsync.EmotionMarker>
struct Comparison_1_t1399874968;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.LipSync
struct  LipSync_t2119759184  : public BlendSystemUser_t526961539
{
public:
	// UnityEngine.AudioSource RogoDigital.Lipsync.LipSync::audioSource
	AudioSource_t1135106623 * ___audioSource_3;
	// System.Boolean RogoDigital.Lipsync.LipSync::useBones
	bool ___useBones_4;
	// System.Boolean RogoDigital.Lipsync.LipSync::boneUpdateAnimation
	bool ___boneUpdateAnimation_5;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.PhonemeShape> RogoDigital.Lipsync.LipSync::phonemes
	List_1_t2417838819 * ___phonemes_6;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.EmotionShape> RogoDigital.Lipsync.LipSync::emotions
	List_1_t1183258026 * ___emotions_7;
	// System.Boolean RogoDigital.Lipsync.LipSync::playOnAwake
	bool ___playOnAwake_8;
	// System.Boolean RogoDigital.Lipsync.LipSync::loop
	bool ___loop_9;
	// RogoDigital.Lipsync.LipSyncData RogoDigital.Lipsync.LipSync::defaultClip
	LipSyncData_t4127593376 * ___defaultClip_10;
	// System.Single RogoDigital.Lipsync.LipSync::defaultDelay
	float ___defaultDelay_11;
	// System.Boolean RogoDigital.Lipsync.LipSync::scaleAudioSpeed
	bool ___scaleAudioSpeed_12;
	// RogoDigital.Lipsync.LipSync/AnimationTimingMode RogoDigital.Lipsync.LipSync::m_animationTimingMode
	int32_t ___m_animationTimingMode_13;
	// System.Int32 RogoDigital.Lipsync.LipSync::frameRate
	int32_t ___frameRate_14;
	// System.Single RogoDigital.Lipsync.LipSync::restTime
	float ___restTime_15;
	// System.Single RogoDigital.Lipsync.LipSync::restHoldTime
	float ___restHoldTime_16;
	// RogoDigital.Lipsync.LipSync/CurveGenerationMode RogoDigital.Lipsync.LipSync::phonemeCurveGenerationMode
	int32_t ___phonemeCurveGenerationMode_17;
	// RogoDigital.Lipsync.LipSync/CurveGenerationMode RogoDigital.Lipsync.LipSync::emotionCurveGenerationMode
	int32_t ___emotionCurveGenerationMode_18;
	// System.Boolean RogoDigital.Lipsync.LipSync::keepEmotionWhenFinished
	bool ___keepEmotionWhenFinished_19;
	// System.Boolean RogoDigital.Lipsync.LipSync::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_20;
	// System.Boolean RogoDigital.Lipsync.LipSync::<IsPaused>k__BackingField
	bool ___U3CIsPausedU3Ek__BackingField_21;
	// System.Boolean RogoDigital.Lipsync.LipSync::<IsStopping>k__BackingField
	bool ___U3CIsStoppingU3Ek__BackingField_22;
	// UnityEngine.Animator RogoDigital.Lipsync.LipSync::gesturesAnimator
	Animator_t69676727 * ___gesturesAnimator_23;
	// System.Int32 RogoDigital.Lipsync.LipSync::gesturesLayer
	int32_t ___gesturesLayer_24;
	// System.Collections.Generic.List`1<GestureInstance> RogoDigital.Lipsync.LipSync::gestures
	List_1_t3650176796 * ___gestures_25;
	// UnityEngine.Events.UnityEvent RogoDigital.Lipsync.LipSync::onFinishedPlaying
	UnityEvent_t408735097 * ___onFinishedPlaying_26;
	// UnityEngine.AudioClip RogoDigital.Lipsync.LipSync::audioClip
	AudioClip_t1932558630 * ___audioClip_27;
	// System.Boolean RogoDigital.Lipsync.LipSync::ready
	bool ___ready_28;
	// System.Collections.Generic.Dictionary`2<System.String,RogoDigital.Lipsync.EmotionShape> RogoDigital.Lipsync.LipSync::emotionCache
	Dictionary_2_t3728916156 * ___emotionCache_29;
	// System.Int32 RogoDigital.Lipsync.LipSync::currentFileID
	int32_t ___currentFileID_30;
	// RogoDigital.Lipsync.LipSyncData RogoDigital.Lipsync.LipSync::lastClip
	LipSyncData_t4127593376 * ___lastClip_31;
	// System.Single RogoDigital.Lipsync.LipSync::emotionBlendTime
	float ___emotionBlendTime_32;
	// System.Single RogoDigital.Lipsync.LipSync::emotionTimer
	float ___emotionTimer_33;
	// System.Boolean RogoDigital.Lipsync.LipSync::changingEmotion
	bool ___changingEmotion_34;
	// System.Int32 RogoDigital.Lipsync.LipSync::customEmotion
	int32_t ___customEmotion_35;
	// System.Single RogoDigital.Lipsync.LipSync::customTimer
	float ___customTimer_36;
	// System.Boolean RogoDigital.Lipsync.LipSync::isDelaying
	bool ___isDelaying_37;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.PhonemeMarker> RogoDigital.Lipsync.LipSync::phonemeMarkers
	List_1_t1671078252 * ___phonemeMarkers_38;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.EmotionMarker> RogoDigital.Lipsync.LipSync::emotionMarkers
	List_1_t3802224545 * ___emotionMarkers_39;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.GestureMarker> RogoDigital.Lipsync.LipSync::gestureMarkers
	List_1_t2625427483 * ___gestureMarkers_40;
	// System.Single RogoDigital.Lipsync.LipSync::fileLength
	float ___fileLength_41;
	// System.Int32 RogoDigital.Lipsync.LipSync::nextGesture
	int32_t ___nextGesture_42;
	// System.Collections.Generic.List`1<System.Int32> RogoDigital.Lipsync.LipSync::indexBlendables
	List_1_t1440998580 * ___indexBlendables_43;
	// System.Collections.Generic.List`1<UnityEngine.AnimationCurve> RogoDigital.Lipsync.LipSync::animCurves
	List_1_t2675662283 * ___animCurves_44;
	// System.Collections.Generic.List`1<UnityEngine.Transform> RogoDigital.Lipsync.LipSync::bones
	List_1_t2644239190 * ___bones_45;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.TransformAnimationCurve> RogoDigital.Lipsync.LipSync::boneCurves
	List_1_t1552408875 * ___boneCurves_46;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> RogoDigital.Lipsync.LipSync::boneNeutralPositions
	List_1_t1612828712 * ___boneNeutralPositions_47;
	// System.Collections.Generic.List`1<UnityEngine.Quaternion> RogoDigital.Lipsync.LipSync::boneNeutralRotations
	List_1_t3399195050 * ___boneNeutralRotations_48;
	// RogoDigital.Lipsync.LipSync/ResetDelegate RogoDigital.Lipsync.LipSync::reset
	ResetDelegate_t65150868 * ___reset_49;
	// System.Single RogoDigital.Lipsync.LipSync::lastUsedVersion
	float ___lastUsedVersion_50;

public:
	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___audioSource_3)); }
	inline AudioSource_t1135106623 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t1135106623 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_useBones_4() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___useBones_4)); }
	inline bool get_useBones_4() const { return ___useBones_4; }
	inline bool* get_address_of_useBones_4() { return &___useBones_4; }
	inline void set_useBones_4(bool value)
	{
		___useBones_4 = value;
	}

	inline static int32_t get_offset_of_boneUpdateAnimation_5() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___boneUpdateAnimation_5)); }
	inline bool get_boneUpdateAnimation_5() const { return ___boneUpdateAnimation_5; }
	inline bool* get_address_of_boneUpdateAnimation_5() { return &___boneUpdateAnimation_5; }
	inline void set_boneUpdateAnimation_5(bool value)
	{
		___boneUpdateAnimation_5 = value;
	}

	inline static int32_t get_offset_of_phonemes_6() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___phonemes_6)); }
	inline List_1_t2417838819 * get_phonemes_6() const { return ___phonemes_6; }
	inline List_1_t2417838819 ** get_address_of_phonemes_6() { return &___phonemes_6; }
	inline void set_phonemes_6(List_1_t2417838819 * value)
	{
		___phonemes_6 = value;
		Il2CppCodeGenWriteBarrier(&___phonemes_6, value);
	}

	inline static int32_t get_offset_of_emotions_7() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___emotions_7)); }
	inline List_1_t1183258026 * get_emotions_7() const { return ___emotions_7; }
	inline List_1_t1183258026 ** get_address_of_emotions_7() { return &___emotions_7; }
	inline void set_emotions_7(List_1_t1183258026 * value)
	{
		___emotions_7 = value;
		Il2CppCodeGenWriteBarrier(&___emotions_7, value);
	}

	inline static int32_t get_offset_of_playOnAwake_8() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___playOnAwake_8)); }
	inline bool get_playOnAwake_8() const { return ___playOnAwake_8; }
	inline bool* get_address_of_playOnAwake_8() { return &___playOnAwake_8; }
	inline void set_playOnAwake_8(bool value)
	{
		___playOnAwake_8 = value;
	}

	inline static int32_t get_offset_of_loop_9() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___loop_9)); }
	inline bool get_loop_9() const { return ___loop_9; }
	inline bool* get_address_of_loop_9() { return &___loop_9; }
	inline void set_loop_9(bool value)
	{
		___loop_9 = value;
	}

	inline static int32_t get_offset_of_defaultClip_10() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___defaultClip_10)); }
	inline LipSyncData_t4127593376 * get_defaultClip_10() const { return ___defaultClip_10; }
	inline LipSyncData_t4127593376 ** get_address_of_defaultClip_10() { return &___defaultClip_10; }
	inline void set_defaultClip_10(LipSyncData_t4127593376 * value)
	{
		___defaultClip_10 = value;
		Il2CppCodeGenWriteBarrier(&___defaultClip_10, value);
	}

	inline static int32_t get_offset_of_defaultDelay_11() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___defaultDelay_11)); }
	inline float get_defaultDelay_11() const { return ___defaultDelay_11; }
	inline float* get_address_of_defaultDelay_11() { return &___defaultDelay_11; }
	inline void set_defaultDelay_11(float value)
	{
		___defaultDelay_11 = value;
	}

	inline static int32_t get_offset_of_scaleAudioSpeed_12() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___scaleAudioSpeed_12)); }
	inline bool get_scaleAudioSpeed_12() const { return ___scaleAudioSpeed_12; }
	inline bool* get_address_of_scaleAudioSpeed_12() { return &___scaleAudioSpeed_12; }
	inline void set_scaleAudioSpeed_12(bool value)
	{
		___scaleAudioSpeed_12 = value;
	}

	inline static int32_t get_offset_of_m_animationTimingMode_13() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___m_animationTimingMode_13)); }
	inline int32_t get_m_animationTimingMode_13() const { return ___m_animationTimingMode_13; }
	inline int32_t* get_address_of_m_animationTimingMode_13() { return &___m_animationTimingMode_13; }
	inline void set_m_animationTimingMode_13(int32_t value)
	{
		___m_animationTimingMode_13 = value;
	}

	inline static int32_t get_offset_of_frameRate_14() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___frameRate_14)); }
	inline int32_t get_frameRate_14() const { return ___frameRate_14; }
	inline int32_t* get_address_of_frameRate_14() { return &___frameRate_14; }
	inline void set_frameRate_14(int32_t value)
	{
		___frameRate_14 = value;
	}

	inline static int32_t get_offset_of_restTime_15() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___restTime_15)); }
	inline float get_restTime_15() const { return ___restTime_15; }
	inline float* get_address_of_restTime_15() { return &___restTime_15; }
	inline void set_restTime_15(float value)
	{
		___restTime_15 = value;
	}

	inline static int32_t get_offset_of_restHoldTime_16() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___restHoldTime_16)); }
	inline float get_restHoldTime_16() const { return ___restHoldTime_16; }
	inline float* get_address_of_restHoldTime_16() { return &___restHoldTime_16; }
	inline void set_restHoldTime_16(float value)
	{
		___restHoldTime_16 = value;
	}

	inline static int32_t get_offset_of_phonemeCurveGenerationMode_17() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___phonemeCurveGenerationMode_17)); }
	inline int32_t get_phonemeCurveGenerationMode_17() const { return ___phonemeCurveGenerationMode_17; }
	inline int32_t* get_address_of_phonemeCurveGenerationMode_17() { return &___phonemeCurveGenerationMode_17; }
	inline void set_phonemeCurveGenerationMode_17(int32_t value)
	{
		___phonemeCurveGenerationMode_17 = value;
	}

	inline static int32_t get_offset_of_emotionCurveGenerationMode_18() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___emotionCurveGenerationMode_18)); }
	inline int32_t get_emotionCurveGenerationMode_18() const { return ___emotionCurveGenerationMode_18; }
	inline int32_t* get_address_of_emotionCurveGenerationMode_18() { return &___emotionCurveGenerationMode_18; }
	inline void set_emotionCurveGenerationMode_18(int32_t value)
	{
		___emotionCurveGenerationMode_18 = value;
	}

	inline static int32_t get_offset_of_keepEmotionWhenFinished_19() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___keepEmotionWhenFinished_19)); }
	inline bool get_keepEmotionWhenFinished_19() const { return ___keepEmotionWhenFinished_19; }
	inline bool* get_address_of_keepEmotionWhenFinished_19() { return &___keepEmotionWhenFinished_19; }
	inline void set_keepEmotionWhenFinished_19(bool value)
	{
		___keepEmotionWhenFinished_19 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___U3CIsPlayingU3Ek__BackingField_20)); }
	inline bool get_U3CIsPlayingU3Ek__BackingField_20() const { return ___U3CIsPlayingU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CIsPlayingU3Ek__BackingField_20() { return &___U3CIsPlayingU3Ek__BackingField_20; }
	inline void set_U3CIsPlayingU3Ek__BackingField_20(bool value)
	{
		___U3CIsPlayingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CIsPausedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___U3CIsPausedU3Ek__BackingField_21)); }
	inline bool get_U3CIsPausedU3Ek__BackingField_21() const { return ___U3CIsPausedU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CIsPausedU3Ek__BackingField_21() { return &___U3CIsPausedU3Ek__BackingField_21; }
	inline void set_U3CIsPausedU3Ek__BackingField_21(bool value)
	{
		___U3CIsPausedU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CIsStoppingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___U3CIsStoppingU3Ek__BackingField_22)); }
	inline bool get_U3CIsStoppingU3Ek__BackingField_22() const { return ___U3CIsStoppingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CIsStoppingU3Ek__BackingField_22() { return &___U3CIsStoppingU3Ek__BackingField_22; }
	inline void set_U3CIsStoppingU3Ek__BackingField_22(bool value)
	{
		___U3CIsStoppingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_gesturesAnimator_23() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___gesturesAnimator_23)); }
	inline Animator_t69676727 * get_gesturesAnimator_23() const { return ___gesturesAnimator_23; }
	inline Animator_t69676727 ** get_address_of_gesturesAnimator_23() { return &___gesturesAnimator_23; }
	inline void set_gesturesAnimator_23(Animator_t69676727 * value)
	{
		___gesturesAnimator_23 = value;
		Il2CppCodeGenWriteBarrier(&___gesturesAnimator_23, value);
	}

	inline static int32_t get_offset_of_gesturesLayer_24() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___gesturesLayer_24)); }
	inline int32_t get_gesturesLayer_24() const { return ___gesturesLayer_24; }
	inline int32_t* get_address_of_gesturesLayer_24() { return &___gesturesLayer_24; }
	inline void set_gesturesLayer_24(int32_t value)
	{
		___gesturesLayer_24 = value;
	}

	inline static int32_t get_offset_of_gestures_25() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___gestures_25)); }
	inline List_1_t3650176796 * get_gestures_25() const { return ___gestures_25; }
	inline List_1_t3650176796 ** get_address_of_gestures_25() { return &___gestures_25; }
	inline void set_gestures_25(List_1_t3650176796 * value)
	{
		___gestures_25 = value;
		Il2CppCodeGenWriteBarrier(&___gestures_25, value);
	}

	inline static int32_t get_offset_of_onFinishedPlaying_26() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___onFinishedPlaying_26)); }
	inline UnityEvent_t408735097 * get_onFinishedPlaying_26() const { return ___onFinishedPlaying_26; }
	inline UnityEvent_t408735097 ** get_address_of_onFinishedPlaying_26() { return &___onFinishedPlaying_26; }
	inline void set_onFinishedPlaying_26(UnityEvent_t408735097 * value)
	{
		___onFinishedPlaying_26 = value;
		Il2CppCodeGenWriteBarrier(&___onFinishedPlaying_26, value);
	}

	inline static int32_t get_offset_of_audioClip_27() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___audioClip_27)); }
	inline AudioClip_t1932558630 * get_audioClip_27() const { return ___audioClip_27; }
	inline AudioClip_t1932558630 ** get_address_of_audioClip_27() { return &___audioClip_27; }
	inline void set_audioClip_27(AudioClip_t1932558630 * value)
	{
		___audioClip_27 = value;
		Il2CppCodeGenWriteBarrier(&___audioClip_27, value);
	}

	inline static int32_t get_offset_of_ready_28() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___ready_28)); }
	inline bool get_ready_28() const { return ___ready_28; }
	inline bool* get_address_of_ready_28() { return &___ready_28; }
	inline void set_ready_28(bool value)
	{
		___ready_28 = value;
	}

	inline static int32_t get_offset_of_emotionCache_29() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___emotionCache_29)); }
	inline Dictionary_2_t3728916156 * get_emotionCache_29() const { return ___emotionCache_29; }
	inline Dictionary_2_t3728916156 ** get_address_of_emotionCache_29() { return &___emotionCache_29; }
	inline void set_emotionCache_29(Dictionary_2_t3728916156 * value)
	{
		___emotionCache_29 = value;
		Il2CppCodeGenWriteBarrier(&___emotionCache_29, value);
	}

	inline static int32_t get_offset_of_currentFileID_30() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___currentFileID_30)); }
	inline int32_t get_currentFileID_30() const { return ___currentFileID_30; }
	inline int32_t* get_address_of_currentFileID_30() { return &___currentFileID_30; }
	inline void set_currentFileID_30(int32_t value)
	{
		___currentFileID_30 = value;
	}

	inline static int32_t get_offset_of_lastClip_31() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___lastClip_31)); }
	inline LipSyncData_t4127593376 * get_lastClip_31() const { return ___lastClip_31; }
	inline LipSyncData_t4127593376 ** get_address_of_lastClip_31() { return &___lastClip_31; }
	inline void set_lastClip_31(LipSyncData_t4127593376 * value)
	{
		___lastClip_31 = value;
		Il2CppCodeGenWriteBarrier(&___lastClip_31, value);
	}

	inline static int32_t get_offset_of_emotionBlendTime_32() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___emotionBlendTime_32)); }
	inline float get_emotionBlendTime_32() const { return ___emotionBlendTime_32; }
	inline float* get_address_of_emotionBlendTime_32() { return &___emotionBlendTime_32; }
	inline void set_emotionBlendTime_32(float value)
	{
		___emotionBlendTime_32 = value;
	}

	inline static int32_t get_offset_of_emotionTimer_33() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___emotionTimer_33)); }
	inline float get_emotionTimer_33() const { return ___emotionTimer_33; }
	inline float* get_address_of_emotionTimer_33() { return &___emotionTimer_33; }
	inline void set_emotionTimer_33(float value)
	{
		___emotionTimer_33 = value;
	}

	inline static int32_t get_offset_of_changingEmotion_34() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___changingEmotion_34)); }
	inline bool get_changingEmotion_34() const { return ___changingEmotion_34; }
	inline bool* get_address_of_changingEmotion_34() { return &___changingEmotion_34; }
	inline void set_changingEmotion_34(bool value)
	{
		___changingEmotion_34 = value;
	}

	inline static int32_t get_offset_of_customEmotion_35() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___customEmotion_35)); }
	inline int32_t get_customEmotion_35() const { return ___customEmotion_35; }
	inline int32_t* get_address_of_customEmotion_35() { return &___customEmotion_35; }
	inline void set_customEmotion_35(int32_t value)
	{
		___customEmotion_35 = value;
	}

	inline static int32_t get_offset_of_customTimer_36() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___customTimer_36)); }
	inline float get_customTimer_36() const { return ___customTimer_36; }
	inline float* get_address_of_customTimer_36() { return &___customTimer_36; }
	inline void set_customTimer_36(float value)
	{
		___customTimer_36 = value;
	}

	inline static int32_t get_offset_of_isDelaying_37() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___isDelaying_37)); }
	inline bool get_isDelaying_37() const { return ___isDelaying_37; }
	inline bool* get_address_of_isDelaying_37() { return &___isDelaying_37; }
	inline void set_isDelaying_37(bool value)
	{
		___isDelaying_37 = value;
	}

	inline static int32_t get_offset_of_phonemeMarkers_38() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___phonemeMarkers_38)); }
	inline List_1_t1671078252 * get_phonemeMarkers_38() const { return ___phonemeMarkers_38; }
	inline List_1_t1671078252 ** get_address_of_phonemeMarkers_38() { return &___phonemeMarkers_38; }
	inline void set_phonemeMarkers_38(List_1_t1671078252 * value)
	{
		___phonemeMarkers_38 = value;
		Il2CppCodeGenWriteBarrier(&___phonemeMarkers_38, value);
	}

	inline static int32_t get_offset_of_emotionMarkers_39() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___emotionMarkers_39)); }
	inline List_1_t3802224545 * get_emotionMarkers_39() const { return ___emotionMarkers_39; }
	inline List_1_t3802224545 ** get_address_of_emotionMarkers_39() { return &___emotionMarkers_39; }
	inline void set_emotionMarkers_39(List_1_t3802224545 * value)
	{
		___emotionMarkers_39 = value;
		Il2CppCodeGenWriteBarrier(&___emotionMarkers_39, value);
	}

	inline static int32_t get_offset_of_gestureMarkers_40() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___gestureMarkers_40)); }
	inline List_1_t2625427483 * get_gestureMarkers_40() const { return ___gestureMarkers_40; }
	inline List_1_t2625427483 ** get_address_of_gestureMarkers_40() { return &___gestureMarkers_40; }
	inline void set_gestureMarkers_40(List_1_t2625427483 * value)
	{
		___gestureMarkers_40 = value;
		Il2CppCodeGenWriteBarrier(&___gestureMarkers_40, value);
	}

	inline static int32_t get_offset_of_fileLength_41() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___fileLength_41)); }
	inline float get_fileLength_41() const { return ___fileLength_41; }
	inline float* get_address_of_fileLength_41() { return &___fileLength_41; }
	inline void set_fileLength_41(float value)
	{
		___fileLength_41 = value;
	}

	inline static int32_t get_offset_of_nextGesture_42() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___nextGesture_42)); }
	inline int32_t get_nextGesture_42() const { return ___nextGesture_42; }
	inline int32_t* get_address_of_nextGesture_42() { return &___nextGesture_42; }
	inline void set_nextGesture_42(int32_t value)
	{
		___nextGesture_42 = value;
	}

	inline static int32_t get_offset_of_indexBlendables_43() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___indexBlendables_43)); }
	inline List_1_t1440998580 * get_indexBlendables_43() const { return ___indexBlendables_43; }
	inline List_1_t1440998580 ** get_address_of_indexBlendables_43() { return &___indexBlendables_43; }
	inline void set_indexBlendables_43(List_1_t1440998580 * value)
	{
		___indexBlendables_43 = value;
		Il2CppCodeGenWriteBarrier(&___indexBlendables_43, value);
	}

	inline static int32_t get_offset_of_animCurves_44() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___animCurves_44)); }
	inline List_1_t2675662283 * get_animCurves_44() const { return ___animCurves_44; }
	inline List_1_t2675662283 ** get_address_of_animCurves_44() { return &___animCurves_44; }
	inline void set_animCurves_44(List_1_t2675662283 * value)
	{
		___animCurves_44 = value;
		Il2CppCodeGenWriteBarrier(&___animCurves_44, value);
	}

	inline static int32_t get_offset_of_bones_45() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___bones_45)); }
	inline List_1_t2644239190 * get_bones_45() const { return ___bones_45; }
	inline List_1_t2644239190 ** get_address_of_bones_45() { return &___bones_45; }
	inline void set_bones_45(List_1_t2644239190 * value)
	{
		___bones_45 = value;
		Il2CppCodeGenWriteBarrier(&___bones_45, value);
	}

	inline static int32_t get_offset_of_boneCurves_46() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___boneCurves_46)); }
	inline List_1_t1552408875 * get_boneCurves_46() const { return ___boneCurves_46; }
	inline List_1_t1552408875 ** get_address_of_boneCurves_46() { return &___boneCurves_46; }
	inline void set_boneCurves_46(List_1_t1552408875 * value)
	{
		___boneCurves_46 = value;
		Il2CppCodeGenWriteBarrier(&___boneCurves_46, value);
	}

	inline static int32_t get_offset_of_boneNeutralPositions_47() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___boneNeutralPositions_47)); }
	inline List_1_t1612828712 * get_boneNeutralPositions_47() const { return ___boneNeutralPositions_47; }
	inline List_1_t1612828712 ** get_address_of_boneNeutralPositions_47() { return &___boneNeutralPositions_47; }
	inline void set_boneNeutralPositions_47(List_1_t1612828712 * value)
	{
		___boneNeutralPositions_47 = value;
		Il2CppCodeGenWriteBarrier(&___boneNeutralPositions_47, value);
	}

	inline static int32_t get_offset_of_boneNeutralRotations_48() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___boneNeutralRotations_48)); }
	inline List_1_t3399195050 * get_boneNeutralRotations_48() const { return ___boneNeutralRotations_48; }
	inline List_1_t3399195050 ** get_address_of_boneNeutralRotations_48() { return &___boneNeutralRotations_48; }
	inline void set_boneNeutralRotations_48(List_1_t3399195050 * value)
	{
		___boneNeutralRotations_48 = value;
		Il2CppCodeGenWriteBarrier(&___boneNeutralRotations_48, value);
	}

	inline static int32_t get_offset_of_reset_49() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___reset_49)); }
	inline ResetDelegate_t65150868 * get_reset_49() const { return ___reset_49; }
	inline ResetDelegate_t65150868 ** get_address_of_reset_49() { return &___reset_49; }
	inline void set_reset_49(ResetDelegate_t65150868 * value)
	{
		___reset_49 = value;
		Il2CppCodeGenWriteBarrier(&___reset_49, value);
	}

	inline static int32_t get_offset_of_lastUsedVersion_50() { return static_cast<int32_t>(offsetof(LipSync_t2119759184, ___lastUsedVersion_50)); }
	inline float get_lastUsedVersion_50() const { return ___lastUsedVersion_50; }
	inline float* get_address_of_lastUsedVersion_50() { return &___lastUsedVersion_50; }
	inline void set_lastUsedVersion_50(float value)
	{
		___lastUsedVersion_50 = value;
	}
};

struct LipSync_t2119759184_StaticFields
{
public:
	// System.Comparison`1<RogoDigital.Lipsync.PhonemeMarker> RogoDigital.Lipsync.LipSync::<>f__mg$cache0
	Comparison_1_t3563695971 * ___U3CU3Ef__mgU24cache0_51;
	// System.Comparison`1<RogoDigital.Lipsync.PhonemeMarker> RogoDigital.Lipsync.LipSync::<>f__mg$cache1
	Comparison_1_t3563695971 * ___U3CU3Ef__mgU24cache1_52;
	// System.Comparison`1<RogoDigital.Lipsync.PhonemeMarker> RogoDigital.Lipsync.LipSync::<>f__mg$cache2
	Comparison_1_t3563695971 * ___U3CU3Ef__mgU24cache2_53;
	// System.Comparison`1<RogoDigital.Lipsync.GestureMarker> RogoDigital.Lipsync.LipSync::<>f__mg$cache3
	Comparison_1_t223077906 * ___U3CU3Ef__mgU24cache3_54;
	// System.Comparison`1<RogoDigital.Lipsync.EmotionMarker> RogoDigital.Lipsync.LipSync::<>f__mg$cache4
	Comparison_1_t1399874968 * ___U3CU3Ef__mgU24cache4_55;
	// System.Comparison`1<RogoDigital.Lipsync.PhonemeMarker> RogoDigital.Lipsync.LipSync::<>f__mg$cache5
	Comparison_1_t3563695971 * ___U3CU3Ef__mgU24cache5_56;
	// System.Comparison`1<RogoDigital.Lipsync.GestureMarker> RogoDigital.Lipsync.LipSync::<>f__mg$cache6
	Comparison_1_t223077906 * ___U3CU3Ef__mgU24cache6_57;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_51() { return static_cast<int32_t>(offsetof(LipSync_t2119759184_StaticFields, ___U3CU3Ef__mgU24cache0_51)); }
	inline Comparison_1_t3563695971 * get_U3CU3Ef__mgU24cache0_51() const { return ___U3CU3Ef__mgU24cache0_51; }
	inline Comparison_1_t3563695971 ** get_address_of_U3CU3Ef__mgU24cache0_51() { return &___U3CU3Ef__mgU24cache0_51; }
	inline void set_U3CU3Ef__mgU24cache0_51(Comparison_1_t3563695971 * value)
	{
		___U3CU3Ef__mgU24cache0_51 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_51, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_52() { return static_cast<int32_t>(offsetof(LipSync_t2119759184_StaticFields, ___U3CU3Ef__mgU24cache1_52)); }
	inline Comparison_1_t3563695971 * get_U3CU3Ef__mgU24cache1_52() const { return ___U3CU3Ef__mgU24cache1_52; }
	inline Comparison_1_t3563695971 ** get_address_of_U3CU3Ef__mgU24cache1_52() { return &___U3CU3Ef__mgU24cache1_52; }
	inline void set_U3CU3Ef__mgU24cache1_52(Comparison_1_t3563695971 * value)
	{
		___U3CU3Ef__mgU24cache1_52 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_52, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_53() { return static_cast<int32_t>(offsetof(LipSync_t2119759184_StaticFields, ___U3CU3Ef__mgU24cache2_53)); }
	inline Comparison_1_t3563695971 * get_U3CU3Ef__mgU24cache2_53() const { return ___U3CU3Ef__mgU24cache2_53; }
	inline Comparison_1_t3563695971 ** get_address_of_U3CU3Ef__mgU24cache2_53() { return &___U3CU3Ef__mgU24cache2_53; }
	inline void set_U3CU3Ef__mgU24cache2_53(Comparison_1_t3563695971 * value)
	{
		___U3CU3Ef__mgU24cache2_53 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_53, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_54() { return static_cast<int32_t>(offsetof(LipSync_t2119759184_StaticFields, ___U3CU3Ef__mgU24cache3_54)); }
	inline Comparison_1_t223077906 * get_U3CU3Ef__mgU24cache3_54() const { return ___U3CU3Ef__mgU24cache3_54; }
	inline Comparison_1_t223077906 ** get_address_of_U3CU3Ef__mgU24cache3_54() { return &___U3CU3Ef__mgU24cache3_54; }
	inline void set_U3CU3Ef__mgU24cache3_54(Comparison_1_t223077906 * value)
	{
		___U3CU3Ef__mgU24cache3_54 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_54, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_55() { return static_cast<int32_t>(offsetof(LipSync_t2119759184_StaticFields, ___U3CU3Ef__mgU24cache4_55)); }
	inline Comparison_1_t1399874968 * get_U3CU3Ef__mgU24cache4_55() const { return ___U3CU3Ef__mgU24cache4_55; }
	inline Comparison_1_t1399874968 ** get_address_of_U3CU3Ef__mgU24cache4_55() { return &___U3CU3Ef__mgU24cache4_55; }
	inline void set_U3CU3Ef__mgU24cache4_55(Comparison_1_t1399874968 * value)
	{
		___U3CU3Ef__mgU24cache4_55 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache4_55, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_56() { return static_cast<int32_t>(offsetof(LipSync_t2119759184_StaticFields, ___U3CU3Ef__mgU24cache5_56)); }
	inline Comparison_1_t3563695971 * get_U3CU3Ef__mgU24cache5_56() const { return ___U3CU3Ef__mgU24cache5_56; }
	inline Comparison_1_t3563695971 ** get_address_of_U3CU3Ef__mgU24cache5_56() { return &___U3CU3Ef__mgU24cache5_56; }
	inline void set_U3CU3Ef__mgU24cache5_56(Comparison_1_t3563695971 * value)
	{
		___U3CU3Ef__mgU24cache5_56 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache5_56, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_57() { return static_cast<int32_t>(offsetof(LipSync_t2119759184_StaticFields, ___U3CU3Ef__mgU24cache6_57)); }
	inline Comparison_1_t223077906 * get_U3CU3Ef__mgU24cache6_57() const { return ___U3CU3Ef__mgU24cache6_57; }
	inline Comparison_1_t223077906 ** get_address_of_U3CU3Ef__mgU24cache6_57() { return &___U3CU3Ef__mgU24cache6_57; }
	inline void set_U3CU3Ef__mgU24cache6_57(Comparison_1_t223077906 * value)
	{
		___U3CU3Ef__mgU24cache6_57 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache6_57, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
