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

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// SentenceSelector.AlternativeWordsTrie
struct AlternativeWordsTrie_t3055543214;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.AlternateMatchResult
struct  AlternateMatchResult_t611406620  : public Il2CppObject
{
public:
	// SentenceSelector.MatchStatus SentenceSelector.AlternateMatchResult::Status
	int32_t ___Status_0;
	// System.Collections.Generic.List`1<System.String> SentenceSelector.AlternateMatchResult::MatchedWord
	List_1_t1398341365 * ___MatchedWord_1;
	// System.Single SentenceSelector.AlternateMatchResult::MatchPercentage
	float ___MatchPercentage_2;
	// SentenceSelector.AlternativeWordsTrie SentenceSelector.AlternateMatchResult::lastMatched
	AlternativeWordsTrie_t3055543214 * ___lastMatched_3;
	// System.String SentenceSelector.AlternateMatchResult::Result
	String_t* ___Result_4;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(AlternateMatchResult_t611406620, ___Status_0)); }
	inline int32_t get_Status_0() const { return ___Status_0; }
	inline int32_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(int32_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_MatchedWord_1() { return static_cast<int32_t>(offsetof(AlternateMatchResult_t611406620, ___MatchedWord_1)); }
	inline List_1_t1398341365 * get_MatchedWord_1() const { return ___MatchedWord_1; }
	inline List_1_t1398341365 ** get_address_of_MatchedWord_1() { return &___MatchedWord_1; }
	inline void set_MatchedWord_1(List_1_t1398341365 * value)
	{
		___MatchedWord_1 = value;
		Il2CppCodeGenWriteBarrier(&___MatchedWord_1, value);
	}

	inline static int32_t get_offset_of_MatchPercentage_2() { return static_cast<int32_t>(offsetof(AlternateMatchResult_t611406620, ___MatchPercentage_2)); }
	inline float get_MatchPercentage_2() const { return ___MatchPercentage_2; }
	inline float* get_address_of_MatchPercentage_2() { return &___MatchPercentage_2; }
	inline void set_MatchPercentage_2(float value)
	{
		___MatchPercentage_2 = value;
	}

	inline static int32_t get_offset_of_lastMatched_3() { return static_cast<int32_t>(offsetof(AlternateMatchResult_t611406620, ___lastMatched_3)); }
	inline AlternativeWordsTrie_t3055543214 * get_lastMatched_3() const { return ___lastMatched_3; }
	inline AlternativeWordsTrie_t3055543214 ** get_address_of_lastMatched_3() { return &___lastMatched_3; }
	inline void set_lastMatched_3(AlternativeWordsTrie_t3055543214 * value)
	{
		___lastMatched_3 = value;
		Il2CppCodeGenWriteBarrier(&___lastMatched_3, value);
	}

	inline static int32_t get_offset_of_Result_4() { return static_cast<int32_t>(offsetof(AlternateMatchResult_t611406620, ___Result_4)); }
	inline String_t* get_Result_4() const { return ___Result_4; }
	inline String_t** get_address_of_Result_4() { return &___Result_4; }
	inline void set_Result_4(String_t* value)
	{
		___Result_4 = value;
		Il2CppCodeGenWriteBarrier(&___Result_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
