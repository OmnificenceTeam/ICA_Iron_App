#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// UnityEngine.Rendering.RenderTargetIdentifier[]
struct RenderTargetIdentifierU5BU5D_t32810763;
struct RenderTargetIdentifier_t772440638 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct  Frame_t3543665253 
{
public:
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::lumaTexture
	RenderTexture_t2666733923 * ___lumaTexture_0;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::chromaTexture
	RenderTexture_t2666733923 * ___chromaTexture_1;
	// System.Single UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::m_Time
	float ___m_Time_2;
	// UnityEngine.Rendering.RenderTargetIdentifier[] UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame::m_MRT
	RenderTargetIdentifierU5BU5D_t32810763* ___m_MRT_3;

public:
	inline static int32_t get_offset_of_lumaTexture_0() { return static_cast<int32_t>(offsetof(Frame_t3543665253, ___lumaTexture_0)); }
	inline RenderTexture_t2666733923 * get_lumaTexture_0() const { return ___lumaTexture_0; }
	inline RenderTexture_t2666733923 ** get_address_of_lumaTexture_0() { return &___lumaTexture_0; }
	inline void set_lumaTexture_0(RenderTexture_t2666733923 * value)
	{
		___lumaTexture_0 = value;
		Il2CppCodeGenWriteBarrier(&___lumaTexture_0, value);
	}

	inline static int32_t get_offset_of_chromaTexture_1() { return static_cast<int32_t>(offsetof(Frame_t3543665253, ___chromaTexture_1)); }
	inline RenderTexture_t2666733923 * get_chromaTexture_1() const { return ___chromaTexture_1; }
	inline RenderTexture_t2666733923 ** get_address_of_chromaTexture_1() { return &___chromaTexture_1; }
	inline void set_chromaTexture_1(RenderTexture_t2666733923 * value)
	{
		___chromaTexture_1 = value;
		Il2CppCodeGenWriteBarrier(&___chromaTexture_1, value);
	}

	inline static int32_t get_offset_of_m_Time_2() { return static_cast<int32_t>(offsetof(Frame_t3543665253, ___m_Time_2)); }
	inline float get_m_Time_2() const { return ___m_Time_2; }
	inline float* get_address_of_m_Time_2() { return &___m_Time_2; }
	inline void set_m_Time_2(float value)
	{
		___m_Time_2 = value;
	}

	inline static int32_t get_offset_of_m_MRT_3() { return static_cast<int32_t>(offsetof(Frame_t3543665253, ___m_MRT_3)); }
	inline RenderTargetIdentifierU5BU5D_t32810763* get_m_MRT_3() const { return ___m_MRT_3; }
	inline RenderTargetIdentifierU5BU5D_t32810763** get_address_of_m_MRT_3() { return &___m_MRT_3; }
	inline void set_m_MRT_3(RenderTargetIdentifierU5BU5D_t32810763* value)
	{
		___m_MRT_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_MRT_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct Frame_t3543665253_marshaled_pinvoke
{
	RenderTexture_t2666733923 * ___lumaTexture_0;
	RenderTexture_t2666733923 * ___chromaTexture_1;
	float ___m_Time_2;
	RenderTargetIdentifier_t772440638 * ___m_MRT_3;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter/Frame
struct Frame_t3543665253_marshaled_com
{
	RenderTexture_t2666733923 * ___lumaTexture_0;
	RenderTexture_t2666733923 * ___chromaTexture_1;
	float ___m_Time_2;
	RenderTargetIdentifier_t772440638 * ___m_MRT_3;
};
