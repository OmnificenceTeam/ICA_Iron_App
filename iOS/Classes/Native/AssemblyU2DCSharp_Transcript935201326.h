﻿#pragma once

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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Transcript
struct  Transcript_t935201326  : public Il2CppObject
{
public:
	// System.String Transcript::transcript
	String_t* ___transcript_0;
	// System.Double Transcript::confidence
	double ___confidence_1;

public:
	inline static int32_t get_offset_of_transcript_0() { return static_cast<int32_t>(offsetof(Transcript_t935201326, ___transcript_0)); }
	inline String_t* get_transcript_0() const { return ___transcript_0; }
	inline String_t** get_address_of_transcript_0() { return &___transcript_0; }
	inline void set_transcript_0(String_t* value)
	{
		___transcript_0 = value;
		Il2CppCodeGenWriteBarrier(&___transcript_0, value);
	}

	inline static int32_t get_offset_of_confidence_1() { return static_cast<int32_t>(offsetof(Transcript_t935201326, ___confidence_1)); }
	inline double get_confidence_1() const { return ___confidence_1; }
	inline double* get_address_of_confidence_1() { return &___confidence_1; }
	inline void set_confidence_1(double value)
	{
		___confidence_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif