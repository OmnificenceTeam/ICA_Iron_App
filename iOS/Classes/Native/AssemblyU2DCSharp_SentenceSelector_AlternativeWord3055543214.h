#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.Char,SentenceSelector.AlternativeWordsTrie>
struct Dictionary_2_t361053207;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.AlternativeWordsTrie
struct  AlternativeWordsTrie_t3055543214  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Char,SentenceSelector.AlternativeWordsTrie> SentenceSelector.AlternativeWordsTrie::nextChar
	Dictionary_2_t361053207 * ___nextChar_0;
	// System.Char SentenceSelector.AlternativeWordsTrie::letter
	Il2CppChar ___letter_1;
	// System.Collections.Generic.List`1<System.String> SentenceSelector.AlternativeWordsTrie::MasterWordList
	List_1_t1398341365 * ___MasterWordList_2;

public:
	inline static int32_t get_offset_of_nextChar_0() { return static_cast<int32_t>(offsetof(AlternativeWordsTrie_t3055543214, ___nextChar_0)); }
	inline Dictionary_2_t361053207 * get_nextChar_0() const { return ___nextChar_0; }
	inline Dictionary_2_t361053207 ** get_address_of_nextChar_0() { return &___nextChar_0; }
	inline void set_nextChar_0(Dictionary_2_t361053207 * value)
	{
		___nextChar_0 = value;
		Il2CppCodeGenWriteBarrier(&___nextChar_0, value);
	}

	inline static int32_t get_offset_of_letter_1() { return static_cast<int32_t>(offsetof(AlternativeWordsTrie_t3055543214, ___letter_1)); }
	inline Il2CppChar get_letter_1() const { return ___letter_1; }
	inline Il2CppChar* get_address_of_letter_1() { return &___letter_1; }
	inline void set_letter_1(Il2CppChar value)
	{
		___letter_1 = value;
	}

	inline static int32_t get_offset_of_MasterWordList_2() { return static_cast<int32_t>(offsetof(AlternativeWordsTrie_t3055543214, ___MasterWordList_2)); }
	inline List_1_t1398341365 * get_MasterWordList_2() const { return ___MasterWordList_2; }
	inline List_1_t1398341365 ** get_address_of_MasterWordList_2() { return &___MasterWordList_2; }
	inline void set_MasterWordList_2(List_1_t1398341365 * value)
	{
		___MasterWordList_2 = value;
		Il2CppCodeGenWriteBarrier(&___MasterWordList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
