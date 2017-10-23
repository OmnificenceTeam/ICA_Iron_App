#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Alternate>
struct List_1_t1769459818;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Result
struct  Result_t896113815  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Alternate> Result::alternative
	List_1_t1769459818 * ___alternative_0;
	// System.Boolean Result::final
	bool ___final_1;

public:
	inline static int32_t get_offset_of_alternative_0() { return static_cast<int32_t>(offsetof(Result_t896113815, ___alternative_0)); }
	inline List_1_t1769459818 * get_alternative_0() const { return ___alternative_0; }
	inline List_1_t1769459818 ** get_address_of_alternative_0() { return &___alternative_0; }
	inline void set_alternative_0(List_1_t1769459818 * value)
	{
		___alternative_0 = value;
		Il2CppCodeGenWriteBarrier(&___alternative_0, value);
	}

	inline static int32_t get_offset_of_final_1() { return static_cast<int32_t>(offsetof(Result_t896113815, ___final_1)); }
	inline bool get_final_1() const { return ___final_1; }
	inline bool* get_address_of_final_1() { return &___final_1; }
	inline void set_final_1(bool value)
	{
		___final_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
