#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.PostProcessing.PostProcessingContext
struct PostProcessingContext_t754893438;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingComponentBase
struct  PostProcessingComponentBase_t3868710427  : public Il2CppObject
{
public:
	// UnityEngine.PostProcessing.PostProcessingContext UnityEngine.PostProcessing.PostProcessingComponentBase::context
	PostProcessingContext_t754893438 * ___context_0;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(PostProcessingComponentBase_t3868710427, ___context_0)); }
	inline PostProcessingContext_t754893438 * get_context_0() const { return ___context_0; }
	inline PostProcessingContext_t754893438 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(PostProcessingContext_t754893438 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier(&___context_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
