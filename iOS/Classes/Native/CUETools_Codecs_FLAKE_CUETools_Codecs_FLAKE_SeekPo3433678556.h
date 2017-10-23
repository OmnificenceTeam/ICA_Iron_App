#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.FLAKE.SeekPoint
struct  SeekPoint_t3433678556 
{
public:
	// System.Int64 CUETools.Codecs.FLAKE.SeekPoint::number
	int64_t ___number_0;
	// System.Int64 CUETools.Codecs.FLAKE.SeekPoint::offset
	int64_t ___offset_1;
	// System.Int32 CUETools.Codecs.FLAKE.SeekPoint::framesize
	int32_t ___framesize_2;

public:
	inline static int32_t get_offset_of_number_0() { return static_cast<int32_t>(offsetof(SeekPoint_t3433678556, ___number_0)); }
	inline int64_t get_number_0() const { return ___number_0; }
	inline int64_t* get_address_of_number_0() { return &___number_0; }
	inline void set_number_0(int64_t value)
	{
		___number_0 = value;
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(SeekPoint_t3433678556, ___offset_1)); }
	inline int64_t get_offset_1() const { return ___offset_1; }
	inline int64_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(int64_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_framesize_2() { return static_cast<int32_t>(offsetof(SeekPoint_t3433678556, ___framesize_2)); }
	inline int32_t get_framesize_2() const { return ___framesize_2; }
	inline int32_t* get_address_of_framesize_2() { return &___framesize_2; }
	inline void set_framesize_2(int32_t value)
	{
		___framesize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
