#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SentenceSelector.AlternativeWordsTrie
struct AlternativeWordsTrie_t3055543214;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t3557165234;
// System.IO.StreamReader
struct StreamReader_t2360341767;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.AlternativeWordsSelector
struct  AlternativeWordsSelector_t3165084603  : public Il2CppObject
{
public:
	// SentenceSelector.AlternativeWordsTrie SentenceSelector.AlternativeWordsSelector::HeadTrie
	AlternativeWordsTrie_t3055543214 * ___HeadTrie_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> SentenceSelector.AlternativeWordsSelector::AlternateWords
	Dictionary_2_t3557165234 * ___AlternateWords_1;
	// System.IO.StreamReader SentenceSelector.AlternativeWordsSelector::sr
	StreamReader_t2360341767 * ___sr_2;

public:
	inline static int32_t get_offset_of_HeadTrie_0() { return static_cast<int32_t>(offsetof(AlternativeWordsSelector_t3165084603, ___HeadTrie_0)); }
	inline AlternativeWordsTrie_t3055543214 * get_HeadTrie_0() const { return ___HeadTrie_0; }
	inline AlternativeWordsTrie_t3055543214 ** get_address_of_HeadTrie_0() { return &___HeadTrie_0; }
	inline void set_HeadTrie_0(AlternativeWordsTrie_t3055543214 * value)
	{
		___HeadTrie_0 = value;
		Il2CppCodeGenWriteBarrier(&___HeadTrie_0, value);
	}

	inline static int32_t get_offset_of_AlternateWords_1() { return static_cast<int32_t>(offsetof(AlternativeWordsSelector_t3165084603, ___AlternateWords_1)); }
	inline Dictionary_2_t3557165234 * get_AlternateWords_1() const { return ___AlternateWords_1; }
	inline Dictionary_2_t3557165234 ** get_address_of_AlternateWords_1() { return &___AlternateWords_1; }
	inline void set_AlternateWords_1(Dictionary_2_t3557165234 * value)
	{
		___AlternateWords_1 = value;
		Il2CppCodeGenWriteBarrier(&___AlternateWords_1, value);
	}

	inline static int32_t get_offset_of_sr_2() { return static_cast<int32_t>(offsetof(AlternativeWordsSelector_t3165084603, ___sr_2)); }
	inline StreamReader_t2360341767 * get_sr_2() const { return ___sr_2; }
	inline StreamReader_t2360341767 ** get_address_of_sr_2() { return &___sr_2; }
	inline void set_sr_2(StreamReader_t2360341767 * value)
	{
		___sr_2 = value;
		Il2CppCodeGenWriteBarrier(&___sr_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
