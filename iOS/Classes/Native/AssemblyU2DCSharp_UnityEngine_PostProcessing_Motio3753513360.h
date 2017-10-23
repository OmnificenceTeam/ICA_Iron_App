#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP2374348953.h"

// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter
struct ReconstructionFilter_t1962748845;
// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter
struct FrameBlendingFilter_t4201983135;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MotionBlurComponent
struct  MotionBlurComponent_t3753513360  : public PostProcessingComponentCommandBuffer_1_t2374348953
{
public:
	// UnityEngine.PostProcessing.MotionBlurComponent/ReconstructionFilter UnityEngine.PostProcessing.MotionBlurComponent::m_ReconstructionFilter
	ReconstructionFilter_t1962748845 * ___m_ReconstructionFilter_2;
	// UnityEngine.PostProcessing.MotionBlurComponent/FrameBlendingFilter UnityEngine.PostProcessing.MotionBlurComponent::m_FrameBlendingFilter
	FrameBlendingFilter_t4201983135 * ___m_FrameBlendingFilter_3;
	// System.Boolean UnityEngine.PostProcessing.MotionBlurComponent::m_FirstFrame
	bool ___m_FirstFrame_4;

public:
	inline static int32_t get_offset_of_m_ReconstructionFilter_2() { return static_cast<int32_t>(offsetof(MotionBlurComponent_t3753513360, ___m_ReconstructionFilter_2)); }
	inline ReconstructionFilter_t1962748845 * get_m_ReconstructionFilter_2() const { return ___m_ReconstructionFilter_2; }
	inline ReconstructionFilter_t1962748845 ** get_address_of_m_ReconstructionFilter_2() { return &___m_ReconstructionFilter_2; }
	inline void set_m_ReconstructionFilter_2(ReconstructionFilter_t1962748845 * value)
	{
		___m_ReconstructionFilter_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_ReconstructionFilter_2, value);
	}

	inline static int32_t get_offset_of_m_FrameBlendingFilter_3() { return static_cast<int32_t>(offsetof(MotionBlurComponent_t3753513360, ___m_FrameBlendingFilter_3)); }
	inline FrameBlendingFilter_t4201983135 * get_m_FrameBlendingFilter_3() const { return ___m_FrameBlendingFilter_3; }
	inline FrameBlendingFilter_t4201983135 ** get_address_of_m_FrameBlendingFilter_3() { return &___m_FrameBlendingFilter_3; }
	inline void set_m_FrameBlendingFilter_3(FrameBlendingFilter_t4201983135 * value)
	{
		___m_FrameBlendingFilter_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_FrameBlendingFilter_3, value);
	}

	inline static int32_t get_offset_of_m_FirstFrame_4() { return static_cast<int32_t>(offsetof(MotionBlurComponent_t3753513360, ___m_FirstFrame_4)); }
	inline bool get_m_FirstFrame_4() const { return ___m_FirstFrame_4; }
	inline bool* get_address_of_m_FirstFrame_4() { return &___m_FirstFrame_4; }
	inline void set_m_FirstFrame_4(bool value)
	{
		___m_FirstFrame_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
