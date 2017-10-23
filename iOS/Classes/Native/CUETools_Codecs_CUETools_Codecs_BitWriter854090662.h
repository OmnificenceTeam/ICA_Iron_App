#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.BitWriter
struct  BitWriter_t854090662  : public Il2CppObject
{
public:
	// System.UInt32 CUETools.Codecs.BitWriter::bit_buf
	uint32_t ___bit_buf_0;
	// System.Int32 CUETools.Codecs.BitWriter::bit_left
	int32_t ___bit_left_1;
	// System.Byte[] CUETools.Codecs.BitWriter::buffer
	ByteU5BU5D_t3397334013* ___buffer_2;
	// System.Int32 CUETools.Codecs.BitWriter::buf_start
	int32_t ___buf_start_3;
	// System.Int32 CUETools.Codecs.BitWriter::buf_ptr
	int32_t ___buf_ptr_4;
	// System.Int32 CUETools.Codecs.BitWriter::buf_end
	int32_t ___buf_end_5;
	// System.Boolean CUETools.Codecs.BitWriter::eof
	bool ___eof_6;

public:
	inline static int32_t get_offset_of_bit_buf_0() { return static_cast<int32_t>(offsetof(BitWriter_t854090662, ___bit_buf_0)); }
	inline uint32_t get_bit_buf_0() const { return ___bit_buf_0; }
	inline uint32_t* get_address_of_bit_buf_0() { return &___bit_buf_0; }
	inline void set_bit_buf_0(uint32_t value)
	{
		___bit_buf_0 = value;
	}

	inline static int32_t get_offset_of_bit_left_1() { return static_cast<int32_t>(offsetof(BitWriter_t854090662, ___bit_left_1)); }
	inline int32_t get_bit_left_1() const { return ___bit_left_1; }
	inline int32_t* get_address_of_bit_left_1() { return &___bit_left_1; }
	inline void set_bit_left_1(int32_t value)
	{
		___bit_left_1 = value;
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(BitWriter_t854090662, ___buffer_2)); }
	inline ByteU5BU5D_t3397334013* get_buffer_2() const { return ___buffer_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ByteU5BU5D_t3397334013* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_2, value);
	}

	inline static int32_t get_offset_of_buf_start_3() { return static_cast<int32_t>(offsetof(BitWriter_t854090662, ___buf_start_3)); }
	inline int32_t get_buf_start_3() const { return ___buf_start_3; }
	inline int32_t* get_address_of_buf_start_3() { return &___buf_start_3; }
	inline void set_buf_start_3(int32_t value)
	{
		___buf_start_3 = value;
	}

	inline static int32_t get_offset_of_buf_ptr_4() { return static_cast<int32_t>(offsetof(BitWriter_t854090662, ___buf_ptr_4)); }
	inline int32_t get_buf_ptr_4() const { return ___buf_ptr_4; }
	inline int32_t* get_address_of_buf_ptr_4() { return &___buf_ptr_4; }
	inline void set_buf_ptr_4(int32_t value)
	{
		___buf_ptr_4 = value;
	}

	inline static int32_t get_offset_of_buf_end_5() { return static_cast<int32_t>(offsetof(BitWriter_t854090662, ___buf_end_5)); }
	inline int32_t get_buf_end_5() const { return ___buf_end_5; }
	inline int32_t* get_address_of_buf_end_5() { return &___buf_end_5; }
	inline void set_buf_end_5(int32_t value)
	{
		___buf_end_5 = value;
	}

	inline static int32_t get_offset_of_eof_6() { return static_cast<int32_t>(offsetof(BitWriter_t854090662, ___eof_6)); }
	inline bool get_eof_6() const { return ___eof_6; }
	inline bool* get_address_of_eof_6() { return &___eof_6; }
	inline void set_eof_6(bool value)
	{
		___eof_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
