#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_StreamReader2360341767.h"

// System.Boolean[]
struct BooleanU5BU5D_t3568034315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.UnexceptionalStreamReader
struct  UnexceptionalStreamReader_t683371910  : public StreamReader_t2360341767
{
public:

public:
};

struct UnexceptionalStreamReader_t683371910_StaticFields
{
public:
	// System.Boolean[] System.IO.UnexceptionalStreamReader::newline
	BooleanU5BU5D_t3568034315* ___newline_18;
	// System.Char System.IO.UnexceptionalStreamReader::newlineChar
	Il2CppChar ___newlineChar_19;

public:
	inline static int32_t get_offset_of_newline_18() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t683371910_StaticFields, ___newline_18)); }
	inline BooleanU5BU5D_t3568034315* get_newline_18() const { return ___newline_18; }
	inline BooleanU5BU5D_t3568034315** get_address_of_newline_18() { return &___newline_18; }
	inline void set_newline_18(BooleanU5BU5D_t3568034315* value)
	{
		___newline_18 = value;
		Il2CppCodeGenWriteBarrier(&___newline_18, value);
	}

	inline static int32_t get_offset_of_newlineChar_19() { return static_cast<int32_t>(offsetof(UnexceptionalStreamReader_t683371910_StaticFields, ___newlineChar_19)); }
	inline Il2CppChar get_newlineChar_19() const { return ___newlineChar_19; }
	inline Il2CppChar* get_address_of_newlineChar_19() { return &___newlineChar_19; }
	inline void set_newlineChar_19(Il2CppChar value)
	{
		___newlineChar_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
