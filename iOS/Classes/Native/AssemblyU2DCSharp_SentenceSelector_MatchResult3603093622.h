#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_SentenceSelector_MatchStatus686321979.h"

// System.Collections.Generic.List`1<SentenceSelector.MatchReport>
struct List_1_t1331967033;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.MatchResult
struct  MatchResult_t3603093622  : public Il2CppObject
{
public:
	// SentenceSelector.MatchStatus SentenceSelector.MatchResult::Status
	int32_t ___Status_0;
	// System.Collections.Generic.List`1<SentenceSelector.MatchReport> SentenceSelector.MatchResult::Reports
	List_1_t1331967033 * ___Reports_1;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(MatchResult_t3603093622, ___Status_0)); }
	inline int32_t get_Status_0() const { return ___Status_0; }
	inline int32_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(int32_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_Reports_1() { return static_cast<int32_t>(offsetof(MatchResult_t3603093622, ___Reports_1)); }
	inline List_1_t1331967033 * get_Reports_1() const { return ___Reports_1; }
	inline List_1_t1331967033 ** get_address_of_Reports_1() { return &___Reports_1; }
	inline void set_Reports_1(List_1_t1331967033 * value)
	{
		___Reports_1 = value;
		Il2CppCodeGenWriteBarrier(&___Reports_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
