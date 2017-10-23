#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.Context
struct  Context_t1981446855  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.String> SentenceSelector.Context::Level1
	List_1_t1398341365 * ___Level1_0;
	// System.Collections.Generic.List`1<System.String> SentenceSelector.Context::Level2
	List_1_t1398341365 * ___Level2_1;
	// System.Collections.Generic.List`1<System.String> SentenceSelector.Context::Level3
	List_1_t1398341365 * ___Level3_2;

public:
	inline static int32_t get_offset_of_Level1_0() { return static_cast<int32_t>(offsetof(Context_t1981446855, ___Level1_0)); }
	inline List_1_t1398341365 * get_Level1_0() const { return ___Level1_0; }
	inline List_1_t1398341365 ** get_address_of_Level1_0() { return &___Level1_0; }
	inline void set_Level1_0(List_1_t1398341365 * value)
	{
		___Level1_0 = value;
		Il2CppCodeGenWriteBarrier(&___Level1_0, value);
	}

	inline static int32_t get_offset_of_Level2_1() { return static_cast<int32_t>(offsetof(Context_t1981446855, ___Level2_1)); }
	inline List_1_t1398341365 * get_Level2_1() const { return ___Level2_1; }
	inline List_1_t1398341365 ** get_address_of_Level2_1() { return &___Level2_1; }
	inline void set_Level2_1(List_1_t1398341365 * value)
	{
		___Level2_1 = value;
		Il2CppCodeGenWriteBarrier(&___Level2_1, value);
	}

	inline static int32_t get_offset_of_Level3_2() { return static_cast<int32_t>(offsetof(Context_t1981446855, ___Level3_2)); }
	inline List_1_t1398341365 * get_Level3_2() const { return ___Level3_2; }
	inline List_1_t1398341365 ** get_address_of_Level3_2() { return &___Level3_2; }
	inline void set_Level3_2(List_1_t1398341365 * value)
	{
		___Level3_2 = value;
		Il2CppCodeGenWriteBarrier(&___Level3_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
