#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<SentenceSelector.FAQ>
struct List_1_t1940922818;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SentenceSelector.FAQSerializer
struct  FAQSerializer_t3791964634  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<SentenceSelector.FAQ> SentenceSelector.FAQSerializer::faqs
	List_1_t1940922818 * ___faqs_0;

public:
	inline static int32_t get_offset_of_faqs_0() { return static_cast<int32_t>(offsetof(FAQSerializer_t3791964634, ___faqs_0)); }
	inline List_1_t1940922818 * get_faqs_0() const { return ___faqs_0; }
	inline List_1_t1940922818 ** get_address_of_faqs_0() { return &___faqs_0; }
	inline void set_faqs_0(List_1_t1940922818 * value)
	{
		___faqs_0 = value;
		Il2CppCodeGenWriteBarrier(&___faqs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
