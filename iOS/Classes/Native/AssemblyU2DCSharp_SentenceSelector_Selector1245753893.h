#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SentenceSelector.AlternativeWordsSelector
struct AlternativeWordsSelector_t3165084603;
// System.Collections.Generic.Dictionary`2<System.String,SentenceSelector.FAQ>
struct Dictionary_2_t191613652;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<SentenceSelector.FAQ>>
struct Dictionary_2_t3855702080;
// SentenceSelector.WordTrie
struct WordTrie_t3104357426;
// System.Object
struct Il2CppObject;
// SentenceSelector.Context
struct Context_t1981446855;
// SentenceSelector.Selector
struct Selector_t1245753893;
// System.Converter`2<System.Char,System.Int32>
struct Converter_2_t1497218253;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.Selector
struct  Selector_t1245753893  : public Il2CppObject
{
public:
	// SentenceSelector.AlternativeWordsSelector SentenceSelector.Selector::_alternateWords
	AlternativeWordsSelector_t3165084603 * ____alternateWords_0;
	// System.Collections.Generic.Dictionary`2<System.String,SentenceSelector.FAQ> SentenceSelector.Selector::Questions
	Dictionary_2_t191613652 * ___Questions_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<SentenceSelector.FAQ>> SentenceSelector.Selector::HelpQuestions
	Dictionary_2_t3855702080 * ___HelpQuestions_2;
	// SentenceSelector.WordTrie SentenceSelector.Selector::HeadTrie
	WordTrie_t3104357426 * ___HeadTrie_3;
	// SentenceSelector.Context SentenceSelector.Selector::_context
	Context_t1981446855 * ____context_5;

public:
	inline static int32_t get_offset_of__alternateWords_0() { return static_cast<int32_t>(offsetof(Selector_t1245753893, ____alternateWords_0)); }
	inline AlternativeWordsSelector_t3165084603 * get__alternateWords_0() const { return ____alternateWords_0; }
	inline AlternativeWordsSelector_t3165084603 ** get_address_of__alternateWords_0() { return &____alternateWords_0; }
	inline void set__alternateWords_0(AlternativeWordsSelector_t3165084603 * value)
	{
		____alternateWords_0 = value;
		Il2CppCodeGenWriteBarrier(&____alternateWords_0, value);
	}

	inline static int32_t get_offset_of_Questions_1() { return static_cast<int32_t>(offsetof(Selector_t1245753893, ___Questions_1)); }
	inline Dictionary_2_t191613652 * get_Questions_1() const { return ___Questions_1; }
	inline Dictionary_2_t191613652 ** get_address_of_Questions_1() { return &___Questions_1; }
	inline void set_Questions_1(Dictionary_2_t191613652 * value)
	{
		___Questions_1 = value;
		Il2CppCodeGenWriteBarrier(&___Questions_1, value);
	}

	inline static int32_t get_offset_of_HelpQuestions_2() { return static_cast<int32_t>(offsetof(Selector_t1245753893, ___HelpQuestions_2)); }
	inline Dictionary_2_t3855702080 * get_HelpQuestions_2() const { return ___HelpQuestions_2; }
	inline Dictionary_2_t3855702080 ** get_address_of_HelpQuestions_2() { return &___HelpQuestions_2; }
	inline void set_HelpQuestions_2(Dictionary_2_t3855702080 * value)
	{
		___HelpQuestions_2 = value;
		Il2CppCodeGenWriteBarrier(&___HelpQuestions_2, value);
	}

	inline static int32_t get_offset_of_HeadTrie_3() { return static_cast<int32_t>(offsetof(Selector_t1245753893, ___HeadTrie_3)); }
	inline WordTrie_t3104357426 * get_HeadTrie_3() const { return ___HeadTrie_3; }
	inline WordTrie_t3104357426 ** get_address_of_HeadTrie_3() { return &___HeadTrie_3; }
	inline void set_HeadTrie_3(WordTrie_t3104357426 * value)
	{
		___HeadTrie_3 = value;
		Il2CppCodeGenWriteBarrier(&___HeadTrie_3, value);
	}

	inline static int32_t get_offset_of__context_5() { return static_cast<int32_t>(offsetof(Selector_t1245753893, ____context_5)); }
	inline Context_t1981446855 * get__context_5() const { return ____context_5; }
	inline Context_t1981446855 ** get_address_of__context_5() { return &____context_5; }
	inline void set__context_5(Context_t1981446855 * value)
	{
		____context_5 = value;
		Il2CppCodeGenWriteBarrier(&____context_5, value);
	}
};

struct Selector_t1245753893_StaticFields
{
public:
	// System.Object SentenceSelector.Selector::_sync
	Il2CppObject * ____sync_4;
	// SentenceSelector.Selector SentenceSelector.Selector::selector
	Selector_t1245753893 * ___selector_6;
	// System.Converter`2<System.Char,System.Int32> SentenceSelector.Selector::<>f__mg$cache0
	Converter_2_t1497218253 * ___U3CU3Ef__mgU24cache0_7;
	// System.Converter`2<System.Char,System.Int32> SentenceSelector.Selector::<>f__mg$cache1
	Converter_2_t1497218253 * ___U3CU3Ef__mgU24cache1_8;
	// System.Converter`2<System.Char,System.Int32> SentenceSelector.Selector::<>f__mg$cache2
	Converter_2_t1497218253 * ___U3CU3Ef__mgU24cache2_9;
	// System.Converter`2<System.Char,System.Int32> SentenceSelector.Selector::<>f__mg$cache3
	Converter_2_t1497218253 * ___U3CU3Ef__mgU24cache3_10;

public:
	inline static int32_t get_offset_of__sync_4() { return static_cast<int32_t>(offsetof(Selector_t1245753893_StaticFields, ____sync_4)); }
	inline Il2CppObject * get__sync_4() const { return ____sync_4; }
	inline Il2CppObject ** get_address_of__sync_4() { return &____sync_4; }
	inline void set__sync_4(Il2CppObject * value)
	{
		____sync_4 = value;
		Il2CppCodeGenWriteBarrier(&____sync_4, value);
	}

	inline static int32_t get_offset_of_selector_6() { return static_cast<int32_t>(offsetof(Selector_t1245753893_StaticFields, ___selector_6)); }
	inline Selector_t1245753893 * get_selector_6() const { return ___selector_6; }
	inline Selector_t1245753893 ** get_address_of_selector_6() { return &___selector_6; }
	inline void set_selector_6(Selector_t1245753893 * value)
	{
		___selector_6 = value;
		Il2CppCodeGenWriteBarrier(&___selector_6, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_7() { return static_cast<int32_t>(offsetof(Selector_t1245753893_StaticFields, ___U3CU3Ef__mgU24cache0_7)); }
	inline Converter_2_t1497218253 * get_U3CU3Ef__mgU24cache0_7() const { return ___U3CU3Ef__mgU24cache0_7; }
	inline Converter_2_t1497218253 ** get_address_of_U3CU3Ef__mgU24cache0_7() { return &___U3CU3Ef__mgU24cache0_7; }
	inline void set_U3CU3Ef__mgU24cache0_7(Converter_2_t1497218253 * value)
	{
		___U3CU3Ef__mgU24cache0_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_8() { return static_cast<int32_t>(offsetof(Selector_t1245753893_StaticFields, ___U3CU3Ef__mgU24cache1_8)); }
	inline Converter_2_t1497218253 * get_U3CU3Ef__mgU24cache1_8() const { return ___U3CU3Ef__mgU24cache1_8; }
	inline Converter_2_t1497218253 ** get_address_of_U3CU3Ef__mgU24cache1_8() { return &___U3CU3Ef__mgU24cache1_8; }
	inline void set_U3CU3Ef__mgU24cache1_8(Converter_2_t1497218253 * value)
	{
		___U3CU3Ef__mgU24cache1_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_9() { return static_cast<int32_t>(offsetof(Selector_t1245753893_StaticFields, ___U3CU3Ef__mgU24cache2_9)); }
	inline Converter_2_t1497218253 * get_U3CU3Ef__mgU24cache2_9() const { return ___U3CU3Ef__mgU24cache2_9; }
	inline Converter_2_t1497218253 ** get_address_of_U3CU3Ef__mgU24cache2_9() { return &___U3CU3Ef__mgU24cache2_9; }
	inline void set_U3CU3Ef__mgU24cache2_9(Converter_2_t1497218253 * value)
	{
		___U3CU3Ef__mgU24cache2_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_9, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_10() { return static_cast<int32_t>(offsetof(Selector_t1245753893_StaticFields, ___U3CU3Ef__mgU24cache3_10)); }
	inline Converter_2_t1497218253 * get_U3CU3Ef__mgU24cache3_10() const { return ___U3CU3Ef__mgU24cache3_10; }
	inline Converter_2_t1497218253 ** get_address_of_U3CU3Ef__mgU24cache3_10() { return &___U3CU3Ef__mgU24cache3_10; }
	inline void set_U3CU3Ef__mgU24cache3_10(Converter_2_t1497218253 * value)
	{
		___U3CU3Ef__mgU24cache3_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
