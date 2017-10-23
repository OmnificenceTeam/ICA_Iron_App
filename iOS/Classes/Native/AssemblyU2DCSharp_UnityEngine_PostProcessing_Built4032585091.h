#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP2401038342.h"

// System.String
struct String_t;
// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray
struct ArrowArray_t772926374;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsComponent
struct  BuiltinDebugViewsComponent_t4032585091  : public PostProcessingComponentCommandBuffer_1_t2401038342
{
public:
	// UnityEngine.PostProcessing.BuiltinDebugViewsComponent/ArrowArray UnityEngine.PostProcessing.BuiltinDebugViewsComponent::m_Arrows
	ArrowArray_t772926374 * ___m_Arrows_3;

public:
	inline static int32_t get_offset_of_m_Arrows_3() { return static_cast<int32_t>(offsetof(BuiltinDebugViewsComponent_t4032585091, ___m_Arrows_3)); }
	inline ArrowArray_t772926374 * get_m_Arrows_3() const { return ___m_Arrows_3; }
	inline ArrowArray_t772926374 ** get_address_of_m_Arrows_3() { return &___m_Arrows_3; }
	inline void set_m_Arrows_3(ArrowArray_t772926374 * value)
	{
		___m_Arrows_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Arrows_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
