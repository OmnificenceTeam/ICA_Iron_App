#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostPr967292752.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// UnityEngine.RenderBuffer[]
struct RenderBufferU5BU5D_t1583539489;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.TaaComponent
struct  TaaComponent_t3918545825  : public PostProcessingComponentRenderTexture_1_t967292752
{
public:
	// UnityEngine.RenderBuffer[] UnityEngine.PostProcessing.TaaComponent::m_MRT
	RenderBufferU5BU5D_t1583539489* ___m_MRT_4;
	// System.Int32 UnityEngine.PostProcessing.TaaComponent::m_SampleIndex
	int32_t ___m_SampleIndex_5;
	// System.Boolean UnityEngine.PostProcessing.TaaComponent::m_ResetHistory
	bool ___m_ResetHistory_6;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.TaaComponent::m_HistoryTexture
	RenderTexture_t2666733923 * ___m_HistoryTexture_7;
	// UnityEngine.Vector2 UnityEngine.PostProcessing.TaaComponent::<jitterVector>k__BackingField
	Vector2_t2243707579  ___U3CjitterVectorU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_m_MRT_4() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___m_MRT_4)); }
	inline RenderBufferU5BU5D_t1583539489* get_m_MRT_4() const { return ___m_MRT_4; }
	inline RenderBufferU5BU5D_t1583539489** get_address_of_m_MRT_4() { return &___m_MRT_4; }
	inline void set_m_MRT_4(RenderBufferU5BU5D_t1583539489* value)
	{
		___m_MRT_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_MRT_4, value);
	}

	inline static int32_t get_offset_of_m_SampleIndex_5() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___m_SampleIndex_5)); }
	inline int32_t get_m_SampleIndex_5() const { return ___m_SampleIndex_5; }
	inline int32_t* get_address_of_m_SampleIndex_5() { return &___m_SampleIndex_5; }
	inline void set_m_SampleIndex_5(int32_t value)
	{
		___m_SampleIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_ResetHistory_6() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___m_ResetHistory_6)); }
	inline bool get_m_ResetHistory_6() const { return ___m_ResetHistory_6; }
	inline bool* get_address_of_m_ResetHistory_6() { return &___m_ResetHistory_6; }
	inline void set_m_ResetHistory_6(bool value)
	{
		___m_ResetHistory_6 = value;
	}

	inline static int32_t get_offset_of_m_HistoryTexture_7() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___m_HistoryTexture_7)); }
	inline RenderTexture_t2666733923 * get_m_HistoryTexture_7() const { return ___m_HistoryTexture_7; }
	inline RenderTexture_t2666733923 ** get_address_of_m_HistoryTexture_7() { return &___m_HistoryTexture_7; }
	inline void set_m_HistoryTexture_7(RenderTexture_t2666733923 * value)
	{
		___m_HistoryTexture_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_HistoryTexture_7, value);
	}

	inline static int32_t get_offset_of_U3CjitterVectorU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TaaComponent_t3918545825, ___U3CjitterVectorU3Ek__BackingField_8)); }
	inline Vector2_t2243707579  get_U3CjitterVectorU3Ek__BackingField_8() const { return ___U3CjitterVectorU3Ek__BackingField_8; }
	inline Vector2_t2243707579 * get_address_of_U3CjitterVectorU3Ek__BackingField_8() { return &___U3CjitterVectorU3Ek__BackingField_8; }
	inline void set_U3CjitterVectorU3Ek__BackingField_8(Vector2_t2243707579  value)
	{
		___U3CjitterVectorU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
