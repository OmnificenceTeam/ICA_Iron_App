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
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.MatchRank
struct  MatchRank_t2533783893  : public Il2CppObject
{
public:
	// System.String SentenceSelector.MatchRank::Question
	String_t* ___Question_0;
	// System.String SentenceSelector.MatchRank::Answer
	String_t* ___Answer_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SentenceSelector.MatchRank::WordMatch
	Dictionary_2_t3986656710 * ___WordMatch_2;
	// System.Int32 SentenceSelector.MatchRank::SentenceMatch
	int32_t ___SentenceMatch_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SentenceSelector.MatchRank::Level1Match
	Dictionary_2_t3986656710 * ___Level1Match_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SentenceSelector.MatchRank::Level2Match
	Dictionary_2_t3986656710 * ___Level2Match_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SentenceSelector.MatchRank::Level3Match
	Dictionary_2_t3986656710 * ___Level3Match_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SentenceSelector.MatchRank::Level4Match
	Dictionary_2_t3986656710 * ___Level4Match_7;
	// System.Int32 SentenceSelector.MatchRank::Score
	int32_t ___Score_8;
	// System.Int32 SentenceSelector.MatchRank::ContextScore
	int32_t ___ContextScore_9;

public:
	inline static int32_t get_offset_of_Question_0() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___Question_0)); }
	inline String_t* get_Question_0() const { return ___Question_0; }
	inline String_t** get_address_of_Question_0() { return &___Question_0; }
	inline void set_Question_0(String_t* value)
	{
		___Question_0 = value;
		Il2CppCodeGenWriteBarrier(&___Question_0, value);
	}

	inline static int32_t get_offset_of_Answer_1() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___Answer_1)); }
	inline String_t* get_Answer_1() const { return ___Answer_1; }
	inline String_t** get_address_of_Answer_1() { return &___Answer_1; }
	inline void set_Answer_1(String_t* value)
	{
		___Answer_1 = value;
		Il2CppCodeGenWriteBarrier(&___Answer_1, value);
	}

	inline static int32_t get_offset_of_WordMatch_2() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___WordMatch_2)); }
	inline Dictionary_2_t3986656710 * get_WordMatch_2() const { return ___WordMatch_2; }
	inline Dictionary_2_t3986656710 ** get_address_of_WordMatch_2() { return &___WordMatch_2; }
	inline void set_WordMatch_2(Dictionary_2_t3986656710 * value)
	{
		___WordMatch_2 = value;
		Il2CppCodeGenWriteBarrier(&___WordMatch_2, value);
	}

	inline static int32_t get_offset_of_SentenceMatch_3() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___SentenceMatch_3)); }
	inline int32_t get_SentenceMatch_3() const { return ___SentenceMatch_3; }
	inline int32_t* get_address_of_SentenceMatch_3() { return &___SentenceMatch_3; }
	inline void set_SentenceMatch_3(int32_t value)
	{
		___SentenceMatch_3 = value;
	}

	inline static int32_t get_offset_of_Level1Match_4() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___Level1Match_4)); }
	inline Dictionary_2_t3986656710 * get_Level1Match_4() const { return ___Level1Match_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_Level1Match_4() { return &___Level1Match_4; }
	inline void set_Level1Match_4(Dictionary_2_t3986656710 * value)
	{
		___Level1Match_4 = value;
		Il2CppCodeGenWriteBarrier(&___Level1Match_4, value);
	}

	inline static int32_t get_offset_of_Level2Match_5() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___Level2Match_5)); }
	inline Dictionary_2_t3986656710 * get_Level2Match_5() const { return ___Level2Match_5; }
	inline Dictionary_2_t3986656710 ** get_address_of_Level2Match_5() { return &___Level2Match_5; }
	inline void set_Level2Match_5(Dictionary_2_t3986656710 * value)
	{
		___Level2Match_5 = value;
		Il2CppCodeGenWriteBarrier(&___Level2Match_5, value);
	}

	inline static int32_t get_offset_of_Level3Match_6() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___Level3Match_6)); }
	inline Dictionary_2_t3986656710 * get_Level3Match_6() const { return ___Level3Match_6; }
	inline Dictionary_2_t3986656710 ** get_address_of_Level3Match_6() { return &___Level3Match_6; }
	inline void set_Level3Match_6(Dictionary_2_t3986656710 * value)
	{
		___Level3Match_6 = value;
		Il2CppCodeGenWriteBarrier(&___Level3Match_6, value);
	}

	inline static int32_t get_offset_of_Level4Match_7() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___Level4Match_7)); }
	inline Dictionary_2_t3986656710 * get_Level4Match_7() const { return ___Level4Match_7; }
	inline Dictionary_2_t3986656710 ** get_address_of_Level4Match_7() { return &___Level4Match_7; }
	inline void set_Level4Match_7(Dictionary_2_t3986656710 * value)
	{
		___Level4Match_7 = value;
		Il2CppCodeGenWriteBarrier(&___Level4Match_7, value);
	}

	inline static int32_t get_offset_of_Score_8() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___Score_8)); }
	inline int32_t get_Score_8() const { return ___Score_8; }
	inline int32_t* get_address_of_Score_8() { return &___Score_8; }
	inline void set_Score_8(int32_t value)
	{
		___Score_8 = value;
	}

	inline static int32_t get_offset_of_ContextScore_9() { return static_cast<int32_t>(offsetof(MatchRank_t2533783893, ___ContextScore_9)); }
	inline int32_t get_ContextScore_9() const { return ___ContextScore_9; }
	inline int32_t* get_address_of_ContextScore_9() { return &___ContextScore_9; }
	inline void set_ContextScore_9(int32_t value)
	{
		___ContextScore_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
