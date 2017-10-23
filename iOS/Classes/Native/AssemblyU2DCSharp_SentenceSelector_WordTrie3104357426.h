#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.Char,SentenceSelector.WordTrie>
struct Dictionary_2_t409867419;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.WordTrie
struct  WordTrie_t3104357426  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Char,SentenceSelector.WordTrie> SentenceSelector.WordTrie::nextLetter
	Dictionary_2_t409867419 * ___nextLetter_0;
	// System.Char SentenceSelector.WordTrie::letter
	Il2CppChar ___letter_1;
	// System.Collections.Generic.List`1<System.String> SentenceSelector.WordTrie::QuestionList
	List_1_t1398341365 * ___QuestionList_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SentenceSelector.WordTrie::Faqs
	Dictionary_2_t3986656710 * ___Faqs_3;

public:
	inline static int32_t get_offset_of_nextLetter_0() { return static_cast<int32_t>(offsetof(WordTrie_t3104357426, ___nextLetter_0)); }
	inline Dictionary_2_t409867419 * get_nextLetter_0() const { return ___nextLetter_0; }
	inline Dictionary_2_t409867419 ** get_address_of_nextLetter_0() { return &___nextLetter_0; }
	inline void set_nextLetter_0(Dictionary_2_t409867419 * value)
	{
		___nextLetter_0 = value;
		Il2CppCodeGenWriteBarrier(&___nextLetter_0, value);
	}

	inline static int32_t get_offset_of_letter_1() { return static_cast<int32_t>(offsetof(WordTrie_t3104357426, ___letter_1)); }
	inline Il2CppChar get_letter_1() const { return ___letter_1; }
	inline Il2CppChar* get_address_of_letter_1() { return &___letter_1; }
	inline void set_letter_1(Il2CppChar value)
	{
		___letter_1 = value;
	}

	inline static int32_t get_offset_of_QuestionList_2() { return static_cast<int32_t>(offsetof(WordTrie_t3104357426, ___QuestionList_2)); }
	inline List_1_t1398341365 * get_QuestionList_2() const { return ___QuestionList_2; }
	inline List_1_t1398341365 ** get_address_of_QuestionList_2() { return &___QuestionList_2; }
	inline void set_QuestionList_2(List_1_t1398341365 * value)
	{
		___QuestionList_2 = value;
		Il2CppCodeGenWriteBarrier(&___QuestionList_2, value);
	}

	inline static int32_t get_offset_of_Faqs_3() { return static_cast<int32_t>(offsetof(WordTrie_t3104357426, ___Faqs_3)); }
	inline Dictionary_2_t3986656710 * get_Faqs_3() const { return ___Faqs_3; }
	inline Dictionary_2_t3986656710 ** get_address_of_Faqs_3() { return &___Faqs_3; }
	inline void set_Faqs_3(Dictionary_2_t3986656710 * value)
	{
		___Faqs_3 = value;
		Il2CppCodeGenWriteBarrier(&___Faqs_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
