#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP2973057428.h"

// UnityEngine.ComputeShader
struct ComputeShader_t3573922338;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1827099467;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t1137456562;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.EyeAdaptationComponent
struct  EyeAdaptationComponent_t97759513  : public PostProcessingComponentRenderTexture_1_t2973057428
{
public:
	// UnityEngine.ComputeShader UnityEngine.PostProcessing.EyeAdaptationComponent::m_EyeCompute
	ComputeShader_t3573922338 * ___m_EyeCompute_2;
	// UnityEngine.ComputeBuffer UnityEngine.PostProcessing.EyeAdaptationComponent::m_HistogramBuffer
	ComputeBuffer_t1827099467 * ___m_HistogramBuffer_3;
	// UnityEngine.RenderTexture[] UnityEngine.PostProcessing.EyeAdaptationComponent::m_AutoExposurePool
	RenderTextureU5BU5D_t1137456562* ___m_AutoExposurePool_4;
	// System.Int32 UnityEngine.PostProcessing.EyeAdaptationComponent::m_AutoExposurePingPing
	int32_t ___m_AutoExposurePingPing_5;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.EyeAdaptationComponent::m_CurrentAutoExposure
	RenderTexture_t2666733923 * ___m_CurrentAutoExposure_6;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.EyeAdaptationComponent::m_DebugHistogram
	RenderTexture_t2666733923 * ___m_DebugHistogram_7;
	// System.Boolean UnityEngine.PostProcessing.EyeAdaptationComponent::m_FirstFrame
	bool ___m_FirstFrame_9;

public:
	inline static int32_t get_offset_of_m_EyeCompute_2() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_EyeCompute_2)); }
	inline ComputeShader_t3573922338 * get_m_EyeCompute_2() const { return ___m_EyeCompute_2; }
	inline ComputeShader_t3573922338 ** get_address_of_m_EyeCompute_2() { return &___m_EyeCompute_2; }
	inline void set_m_EyeCompute_2(ComputeShader_t3573922338 * value)
	{
		___m_EyeCompute_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_EyeCompute_2, value);
	}

	inline static int32_t get_offset_of_m_HistogramBuffer_3() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_HistogramBuffer_3)); }
	inline ComputeBuffer_t1827099467 * get_m_HistogramBuffer_3() const { return ___m_HistogramBuffer_3; }
	inline ComputeBuffer_t1827099467 ** get_address_of_m_HistogramBuffer_3() { return &___m_HistogramBuffer_3; }
	inline void set_m_HistogramBuffer_3(ComputeBuffer_t1827099467 * value)
	{
		___m_HistogramBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_HistogramBuffer_3, value);
	}

	inline static int32_t get_offset_of_m_AutoExposurePool_4() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_AutoExposurePool_4)); }
	inline RenderTextureU5BU5D_t1137456562* get_m_AutoExposurePool_4() const { return ___m_AutoExposurePool_4; }
	inline RenderTextureU5BU5D_t1137456562** get_address_of_m_AutoExposurePool_4() { return &___m_AutoExposurePool_4; }
	inline void set_m_AutoExposurePool_4(RenderTextureU5BU5D_t1137456562* value)
	{
		___m_AutoExposurePool_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_AutoExposurePool_4, value);
	}

	inline static int32_t get_offset_of_m_AutoExposurePingPing_5() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_AutoExposurePingPing_5)); }
	inline int32_t get_m_AutoExposurePingPing_5() const { return ___m_AutoExposurePingPing_5; }
	inline int32_t* get_address_of_m_AutoExposurePingPing_5() { return &___m_AutoExposurePingPing_5; }
	inline void set_m_AutoExposurePingPing_5(int32_t value)
	{
		___m_AutoExposurePingPing_5 = value;
	}

	inline static int32_t get_offset_of_m_CurrentAutoExposure_6() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_CurrentAutoExposure_6)); }
	inline RenderTexture_t2666733923 * get_m_CurrentAutoExposure_6() const { return ___m_CurrentAutoExposure_6; }
	inline RenderTexture_t2666733923 ** get_address_of_m_CurrentAutoExposure_6() { return &___m_CurrentAutoExposure_6; }
	inline void set_m_CurrentAutoExposure_6(RenderTexture_t2666733923 * value)
	{
		___m_CurrentAutoExposure_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_CurrentAutoExposure_6, value);
	}

	inline static int32_t get_offset_of_m_DebugHistogram_7() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_DebugHistogram_7)); }
	inline RenderTexture_t2666733923 * get_m_DebugHistogram_7() const { return ___m_DebugHistogram_7; }
	inline RenderTexture_t2666733923 ** get_address_of_m_DebugHistogram_7() { return &___m_DebugHistogram_7; }
	inline void set_m_DebugHistogram_7(RenderTexture_t2666733923 * value)
	{
		___m_DebugHistogram_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_DebugHistogram_7, value);
	}

	inline static int32_t get_offset_of_m_FirstFrame_9() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513, ___m_FirstFrame_9)); }
	inline bool get_m_FirstFrame_9() const { return ___m_FirstFrame_9; }
	inline bool* get_address_of_m_FirstFrame_9() { return &___m_FirstFrame_9; }
	inline void set_m_FirstFrame_9(bool value)
	{
		___m_FirstFrame_9 = value;
	}
};

struct EyeAdaptationComponent_t97759513_StaticFields
{
public:
	// System.UInt32[] UnityEngine.PostProcessing.EyeAdaptationComponent::s_EmptyHistogramBuffer
	UInt32U5BU5D_t59386216* ___s_EmptyHistogramBuffer_8;

public:
	inline static int32_t get_offset_of_s_EmptyHistogramBuffer_8() { return static_cast<int32_t>(offsetof(EyeAdaptationComponent_t97759513_StaticFields, ___s_EmptyHistogramBuffer_8)); }
	inline UInt32U5BU5D_t59386216* get_s_EmptyHistogramBuffer_8() const { return ___s_EmptyHistogramBuffer_8; }
	inline UInt32U5BU5D_t59386216** get_address_of_s_EmptyHistogramBuffer_8() { return &___s_EmptyHistogramBuffer_8; }
	inline void set_s_EmptyHistogramBuffer_8(UInt32U5BU5D_t59386216* value)
	{
		___s_EmptyHistogramBuffer_8 = value;
		Il2CppCodeGenWriteBarrier(&___s_EmptyHistogramBuffer_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
