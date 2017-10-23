#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat3360518468.h"

// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame[]
struct FrameU5BU5D_t1512492648;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter
struct  FrameBlendingFilter_t4201983135  : public Il2CppObject
{
public:
	// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_UseCompression
	bool ___m_UseCompression_0;
	// UnityEngine.RenderTextureFormat UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_RawTextureFormat
	int32_t ___m_RawTextureFormat_1;
	// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame[] UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_FrameList
	FrameU5BU5D_t1512492648* ___m_FrameList_2;
	// System.Int32 UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter::m_LastFrameCount
	int32_t ___m_LastFrameCount_3;

public:
	inline static int32_t get_offset_of_m_UseCompression_0() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t4201983135, ___m_UseCompression_0)); }
	inline bool get_m_UseCompression_0() const { return ___m_UseCompression_0; }
	inline bool* get_address_of_m_UseCompression_0() { return &___m_UseCompression_0; }
	inline void set_m_UseCompression_0(bool value)
	{
		___m_UseCompression_0 = value;
	}

	inline static int32_t get_offset_of_m_RawTextureFormat_1() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t4201983135, ___m_RawTextureFormat_1)); }
	inline int32_t get_m_RawTextureFormat_1() const { return ___m_RawTextureFormat_1; }
	inline int32_t* get_address_of_m_RawTextureFormat_1() { return &___m_RawTextureFormat_1; }
	inline void set_m_RawTextureFormat_1(int32_t value)
	{
		___m_RawTextureFormat_1 = value;
	}

	inline static int32_t get_offset_of_m_FrameList_2() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t4201983135, ___m_FrameList_2)); }
	inline FrameU5BU5D_t1512492648* get_m_FrameList_2() const { return ___m_FrameList_2; }
	inline FrameU5BU5D_t1512492648** get_address_of_m_FrameList_2() { return &___m_FrameList_2; }
	inline void set_m_FrameList_2(FrameU5BU5D_t1512492648* value)
	{
		___m_FrameList_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_FrameList_2, value);
	}

	inline static int32_t get_offset_of_m_LastFrameCount_3() { return static_cast<int32_t>(offsetof(FrameBlendingFilter_t4201983135, ___m_LastFrameCount_3)); }
	inline int32_t get_m_LastFrameCount_3() const { return ___m_LastFrameCount_3; }
	inline int32_t* get_address_of_m_LastFrameCount_3() { return &___m_LastFrameCount_3; }
	inline void set_m_LastFrameCount_3(int32_t value)
	{
		___m_LastFrameCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
