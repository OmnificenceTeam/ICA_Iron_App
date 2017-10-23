#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// SentenceSelector.MatchRank
struct MatchRank_t2533783893;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.MatchReport
struct  MatchReport_t1962845901  : public Il2CppObject
{
public:
	// System.String SentenceSelector.MatchReport::Question
	String_t* ___Question_0;
	// System.String SentenceSelector.MatchReport::Answer
	String_t* ___Answer_1;
	// System.String SentenceSelector.MatchReport::QID
	String_t* ___QID_2;
	// System.Single SentenceSelector.MatchReport::Score
	float ___Score_3;
	// SentenceSelector.MatchRank SentenceSelector.MatchReport::Rank
	MatchRank_t2533783893 * ___Rank_4;

public:
	inline static int32_t get_offset_of_Question_0() { return static_cast<int32_t>(offsetof(MatchReport_t1962845901, ___Question_0)); }
	inline String_t* get_Question_0() const { return ___Question_0; }
	inline String_t** get_address_of_Question_0() { return &___Question_0; }
	inline void set_Question_0(String_t* value)
	{
		___Question_0 = value;
		Il2CppCodeGenWriteBarrier(&___Question_0, value);
	}

	inline static int32_t get_offset_of_Answer_1() { return static_cast<int32_t>(offsetof(MatchReport_t1962845901, ___Answer_1)); }
	inline String_t* get_Answer_1() const { return ___Answer_1; }
	inline String_t** get_address_of_Answer_1() { return &___Answer_1; }
	inline void set_Answer_1(String_t* value)
	{
		___Answer_1 = value;
		Il2CppCodeGenWriteBarrier(&___Answer_1, value);
	}

	inline static int32_t get_offset_of_QID_2() { return static_cast<int32_t>(offsetof(MatchReport_t1962845901, ___QID_2)); }
	inline String_t* get_QID_2() const { return ___QID_2; }
	inline String_t** get_address_of_QID_2() { return &___QID_2; }
	inline void set_QID_2(String_t* value)
	{
		___QID_2 = value;
		Il2CppCodeGenWriteBarrier(&___QID_2, value);
	}

	inline static int32_t get_offset_of_Score_3() { return static_cast<int32_t>(offsetof(MatchReport_t1962845901, ___Score_3)); }
	inline float get_Score_3() const { return ___Score_3; }
	inline float* get_address_of_Score_3() { return &___Score_3; }
	inline void set_Score_3(float value)
	{
		___Score_3 = value;
	}

	inline static int32_t get_offset_of_Rank_4() { return static_cast<int32_t>(offsetof(MatchReport_t1962845901, ___Rank_4)); }
	inline MatchRank_t2533783893 * get_Rank_4() const { return ___Rank_4; }
	inline MatchRank_t2533783893 ** get_address_of_Rank_4() { return &___Rank_4; }
	inline void set_Rank_4(MatchRank_t2533783893 * value)
	{
		___Rank_4 = value;
		Il2CppCodeGenWriteBarrier(&___Rank_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
