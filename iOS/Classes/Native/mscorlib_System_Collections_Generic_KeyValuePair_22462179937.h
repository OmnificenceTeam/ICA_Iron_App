#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// SentenceSelector.WordTrie
struct WordTrie_t3104357426;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Char,SentenceSelector.WordTrie>
struct  KeyValuePair_2_t2462179937 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Il2CppChar ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	WordTrie_t3104357426 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2462179937, ___key_0)); }
	inline Il2CppChar get_key_0() const { return ___key_0; }
	inline Il2CppChar* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Il2CppChar value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2462179937, ___value_1)); }
	inline WordTrie_t3104357426 * get_value_1() const { return ___value_1; }
	inline WordTrie_t3104357426 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(WordTrie_t3104357426 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
