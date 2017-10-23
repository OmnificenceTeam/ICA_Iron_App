#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Result>
struct List_1_t265234947;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GoogleResult
struct  GoogleResult_t496180082  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Result> GoogleResult::result
	List_1_t265234947 * ___result_0;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(GoogleResult_t496180082, ___result_0)); }
	inline List_1_t265234947 * get_result_0() const { return ___result_0; }
	inline List_1_t265234947 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(List_1_t265234947 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier(&___result_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
