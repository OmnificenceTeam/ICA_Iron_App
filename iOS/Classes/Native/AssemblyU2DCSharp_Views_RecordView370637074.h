#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Views.RecordView
struct  RecordView_t370637074  : public Il2CppObject
{
public:
	// UnityEngine.GameObject Views.RecordView::RecordingView
	GameObject_t1756533147 * ___RecordingView_0;
	// UnityEngine.UI.Text Views.RecordView::RecordingStatus
	Text_t356221433 * ___RecordingStatus_1;
	// System.DateTime Views.RecordView::RecordingTimeStarted
	DateTime_t693205669  ___RecordingTimeStarted_2;
	// System.DateTime Views.RecordView::TranslationTimeStarted
	DateTime_t693205669  ___TranslationTimeStarted_3;
	// UnityEngine.AudioSource Views.RecordView::micState
	AudioSource_t1135106623 * ___micState_4;
	// UnityEngine.UI.Image Views.RecordView::RecordingWageImage
	Image_t2042527209 * ___RecordingWageImage_5;
	// System.Single Views.RecordView::imageid
	float ___imageid_6;
	// System.Single Views.RecordView::speed
	float ___speed_7;
	// System.Boolean Views.RecordView::<IsRecording>k__BackingField
	bool ___U3CIsRecordingU3Ek__BackingField_8;
	// System.Boolean Views.RecordView::<IsTranslating>k__BackingField
	bool ___U3CIsTranslatingU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_RecordingView_0() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___RecordingView_0)); }
	inline GameObject_t1756533147 * get_RecordingView_0() const { return ___RecordingView_0; }
	inline GameObject_t1756533147 ** get_address_of_RecordingView_0() { return &___RecordingView_0; }
	inline void set_RecordingView_0(GameObject_t1756533147 * value)
	{
		___RecordingView_0 = value;
		Il2CppCodeGenWriteBarrier(&___RecordingView_0, value);
	}

	inline static int32_t get_offset_of_RecordingStatus_1() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___RecordingStatus_1)); }
	inline Text_t356221433 * get_RecordingStatus_1() const { return ___RecordingStatus_1; }
	inline Text_t356221433 ** get_address_of_RecordingStatus_1() { return &___RecordingStatus_1; }
	inline void set_RecordingStatus_1(Text_t356221433 * value)
	{
		___RecordingStatus_1 = value;
		Il2CppCodeGenWriteBarrier(&___RecordingStatus_1, value);
	}

	inline static int32_t get_offset_of_RecordingTimeStarted_2() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___RecordingTimeStarted_2)); }
	inline DateTime_t693205669  get_RecordingTimeStarted_2() const { return ___RecordingTimeStarted_2; }
	inline DateTime_t693205669 * get_address_of_RecordingTimeStarted_2() { return &___RecordingTimeStarted_2; }
	inline void set_RecordingTimeStarted_2(DateTime_t693205669  value)
	{
		___RecordingTimeStarted_2 = value;
	}

	inline static int32_t get_offset_of_TranslationTimeStarted_3() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___TranslationTimeStarted_3)); }
	inline DateTime_t693205669  get_TranslationTimeStarted_3() const { return ___TranslationTimeStarted_3; }
	inline DateTime_t693205669 * get_address_of_TranslationTimeStarted_3() { return &___TranslationTimeStarted_3; }
	inline void set_TranslationTimeStarted_3(DateTime_t693205669  value)
	{
		___TranslationTimeStarted_3 = value;
	}

	inline static int32_t get_offset_of_micState_4() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___micState_4)); }
	inline AudioSource_t1135106623 * get_micState_4() const { return ___micState_4; }
	inline AudioSource_t1135106623 ** get_address_of_micState_4() { return &___micState_4; }
	inline void set_micState_4(AudioSource_t1135106623 * value)
	{
		___micState_4 = value;
		Il2CppCodeGenWriteBarrier(&___micState_4, value);
	}

	inline static int32_t get_offset_of_RecordingWageImage_5() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___RecordingWageImage_5)); }
	inline Image_t2042527209 * get_RecordingWageImage_5() const { return ___RecordingWageImage_5; }
	inline Image_t2042527209 ** get_address_of_RecordingWageImage_5() { return &___RecordingWageImage_5; }
	inline void set_RecordingWageImage_5(Image_t2042527209 * value)
	{
		___RecordingWageImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___RecordingWageImage_5, value);
	}

	inline static int32_t get_offset_of_imageid_6() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___imageid_6)); }
	inline float get_imageid_6() const { return ___imageid_6; }
	inline float* get_address_of_imageid_6() { return &___imageid_6; }
	inline void set_imageid_6(float value)
	{
		___imageid_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRecordingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___U3CIsRecordingU3Ek__BackingField_8)); }
	inline bool get_U3CIsRecordingU3Ek__BackingField_8() const { return ___U3CIsRecordingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRecordingU3Ek__BackingField_8() { return &___U3CIsRecordingU3Ek__BackingField_8; }
	inline void set_U3CIsRecordingU3Ek__BackingField_8(bool value)
	{
		___U3CIsRecordingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsTranslatingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RecordView_t370637074, ___U3CIsTranslatingU3Ek__BackingField_9)); }
	inline bool get_U3CIsTranslatingU3Ek__BackingField_9() const { return ___U3CIsTranslatingU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsTranslatingU3Ek__BackingField_9() { return &___U3CIsTranslatingU3Ek__BackingField_9; }
	inline void set_U3CIsTranslatingU3Ek__BackingField_9(bool value)
	{
		___U3CIsTranslatingU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
