#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material>
struct Dictionary_2_t2108486189;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.MaterialFactory
struct  MaterialFactory_t857263061  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material> UnityEngine.PostProcessing.MaterialFactory::m_Materials
	Dictionary_2_t2108486189 * ___m_Materials_0;

public:
	inline static int32_t get_offset_of_m_Materials_0() { return static_cast<int32_t>(offsetof(MaterialFactory_t857263061, ___m_Materials_0)); }
	inline Dictionary_2_t2108486189 * get_m_Materials_0() const { return ___m_Materials_0; }
	inline Dictionary_2_t2108486189 ** get_address_of_m_Materials_0() { return &___m_Materials_0; }
	inline void set_m_Materials_0(Dictionary_2_t2108486189 * value)
	{
		___m_Materials_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Materials_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
