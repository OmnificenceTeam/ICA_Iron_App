#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP1631135537.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent
struct  ScreenSpaceReflectionComponent_t2571322632  : public PostProcessingComponentCommandBuffer_1_t1631135537
{
public:
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_HighlightSuppression
	bool ___k_HighlightSuppression_2;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_TraceBehindObjects
	bool ___k_TraceBehindObjects_3;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_TreatBackfaceHitAsMiss
	bool ___k_TreatBackfaceHitAsMiss_4;
	// System.Boolean UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::k_BilateralUpsample
	bool ___k_BilateralUpsample_5;
	// System.Int32[] UnityEngine.PostProcessing.ScreenSpaceReflectionComponent::m_ReflectionTextures
	Int32U5BU5D_t3030399641* ___m_ReflectionTextures_6;

public:
	inline static int32_t get_offset_of_k_HighlightSuppression_2() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___k_HighlightSuppression_2)); }
	inline bool get_k_HighlightSuppression_2() const { return ___k_HighlightSuppression_2; }
	inline bool* get_address_of_k_HighlightSuppression_2() { return &___k_HighlightSuppression_2; }
	inline void set_k_HighlightSuppression_2(bool value)
	{
		___k_HighlightSuppression_2 = value;
	}

	inline static int32_t get_offset_of_k_TraceBehindObjects_3() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___k_TraceBehindObjects_3)); }
	inline bool get_k_TraceBehindObjects_3() const { return ___k_TraceBehindObjects_3; }
	inline bool* get_address_of_k_TraceBehindObjects_3() { return &___k_TraceBehindObjects_3; }
	inline void set_k_TraceBehindObjects_3(bool value)
	{
		___k_TraceBehindObjects_3 = value;
	}

	inline static int32_t get_offset_of_k_TreatBackfaceHitAsMiss_4() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___k_TreatBackfaceHitAsMiss_4)); }
	inline bool get_k_TreatBackfaceHitAsMiss_4() const { return ___k_TreatBackfaceHitAsMiss_4; }
	inline bool* get_address_of_k_TreatBackfaceHitAsMiss_4() { return &___k_TreatBackfaceHitAsMiss_4; }
	inline void set_k_TreatBackfaceHitAsMiss_4(bool value)
	{
		___k_TreatBackfaceHitAsMiss_4 = value;
	}

	inline static int32_t get_offset_of_k_BilateralUpsample_5() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___k_BilateralUpsample_5)); }
	inline bool get_k_BilateralUpsample_5() const { return ___k_BilateralUpsample_5; }
	inline bool* get_address_of_k_BilateralUpsample_5() { return &___k_BilateralUpsample_5; }
	inline void set_k_BilateralUpsample_5(bool value)
	{
		___k_BilateralUpsample_5 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionTextures_6() { return static_cast<int32_t>(offsetof(ScreenSpaceReflectionComponent_t2571322632, ___m_ReflectionTextures_6)); }
	inline Int32U5BU5D_t3030399641* get_m_ReflectionTextures_6() const { return ___m_ReflectionTextures_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_ReflectionTextures_6() { return &___m_ReflectionTextures_6; }
	inline void set_m_ReflectionTextures_6(Int32U5BU5D_t3030399641* value)
	{
		___m_ReflectionTextures_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_ReflectionTextures_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
