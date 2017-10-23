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

// UnityEngine.UI.Image
struct Image_t2042527209;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Random
struct Random_t1170710517;
// System.String[]
struct StringU5BU5D_t1642385972;
// RogoDigital.Lipsync.LipSync
struct LipSync_t2119759184;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Views.ErrorView
struct  ErrorView_t2098714569  : public Il2CppObject
{
public:
	// UnityEngine.UI.Image Views.ErrorView::ErrorImg
	Image_t2042527209 * ___ErrorImg_0;
	// UnityEngine.UI.Text Views.ErrorView::ErrorText
	Text_t356221433 * ___ErrorText_1;
	// System.DateTime Views.ErrorView::timeStarted
	DateTime_t693205669  ___timeStarted_2;
	// System.Boolean Views.ErrorView::IsErrorShown
	bool ___IsErrorShown_3;
	// UnityEngine.Random Views.ErrorView::random
	Random_t1170710517 * ___random_4;
	// System.Boolean Views.ErrorView::IsSecondTime
	bool ___IsSecondTime_5;
	// System.String[] Views.ErrorView::errorMessages
	StringU5BU5D_t1642385972* ___errorMessages_6;
	// RogoDigital.Lipsync.LipSync Views.ErrorView::lipsync
	LipSync_t2119759184 * ___lipsync_7;

public:
	inline static int32_t get_offset_of_ErrorImg_0() { return static_cast<int32_t>(offsetof(ErrorView_t2098714569, ___ErrorImg_0)); }
	inline Image_t2042527209 * get_ErrorImg_0() const { return ___ErrorImg_0; }
	inline Image_t2042527209 ** get_address_of_ErrorImg_0() { return &___ErrorImg_0; }
	inline void set_ErrorImg_0(Image_t2042527209 * value)
	{
		___ErrorImg_0 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorImg_0, value);
	}

	inline static int32_t get_offset_of_ErrorText_1() { return static_cast<int32_t>(offsetof(ErrorView_t2098714569, ___ErrorText_1)); }
	inline Text_t356221433 * get_ErrorText_1() const { return ___ErrorText_1; }
	inline Text_t356221433 ** get_address_of_ErrorText_1() { return &___ErrorText_1; }
	inline void set_ErrorText_1(Text_t356221433 * value)
	{
		___ErrorText_1 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorText_1, value);
	}

	inline static int32_t get_offset_of_timeStarted_2() { return static_cast<int32_t>(offsetof(ErrorView_t2098714569, ___timeStarted_2)); }
	inline DateTime_t693205669  get_timeStarted_2() const { return ___timeStarted_2; }
	inline DateTime_t693205669 * get_address_of_timeStarted_2() { return &___timeStarted_2; }
	inline void set_timeStarted_2(DateTime_t693205669  value)
	{
		___timeStarted_2 = value;
	}

	inline static int32_t get_offset_of_IsErrorShown_3() { return static_cast<int32_t>(offsetof(ErrorView_t2098714569, ___IsErrorShown_3)); }
	inline bool get_IsErrorShown_3() const { return ___IsErrorShown_3; }
	inline bool* get_address_of_IsErrorShown_3() { return &___IsErrorShown_3; }
	inline void set_IsErrorShown_3(bool value)
	{
		___IsErrorShown_3 = value;
	}

	inline static int32_t get_offset_of_random_4() { return static_cast<int32_t>(offsetof(ErrorView_t2098714569, ___random_4)); }
	inline Random_t1170710517 * get_random_4() const { return ___random_4; }
	inline Random_t1170710517 ** get_address_of_random_4() { return &___random_4; }
	inline void set_random_4(Random_t1170710517 * value)
	{
		___random_4 = value;
		Il2CppCodeGenWriteBarrier(&___random_4, value);
	}

	inline static int32_t get_offset_of_IsSecondTime_5() { return static_cast<int32_t>(offsetof(ErrorView_t2098714569, ___IsSecondTime_5)); }
	inline bool get_IsSecondTime_5() const { return ___IsSecondTime_5; }
	inline bool* get_address_of_IsSecondTime_5() { return &___IsSecondTime_5; }
	inline void set_IsSecondTime_5(bool value)
	{
		___IsSecondTime_5 = value;
	}

	inline static int32_t get_offset_of_errorMessages_6() { return static_cast<int32_t>(offsetof(ErrorView_t2098714569, ___errorMessages_6)); }
	inline StringU5BU5D_t1642385972* get_errorMessages_6() const { return ___errorMessages_6; }
	inline StringU5BU5D_t1642385972** get_address_of_errorMessages_6() { return &___errorMessages_6; }
	inline void set_errorMessages_6(StringU5BU5D_t1642385972* value)
	{
		___errorMessages_6 = value;
		Il2CppCodeGenWriteBarrier(&___errorMessages_6, value);
	}

	inline static int32_t get_offset_of_lipsync_7() { return static_cast<int32_t>(offsetof(ErrorView_t2098714569, ___lipsync_7)); }
	inline LipSync_t2119759184 * get_lipsync_7() const { return ___lipsync_7; }
	inline LipSync_t2119759184 ** get_address_of_lipsync_7() { return &___lipsync_7; }
	inline void set_lipsync_7(LipSync_t2119759184 * value)
	{
		___lipsync_7 = value;
		Il2CppCodeGenWriteBarrier(&___lipsync_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
