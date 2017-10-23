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
// System.Byte
struct Byte_t3683104436;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.BitReader
struct  BitReader_t1537623812  : public Il2CppObject
{
public:
	// System.Byte* CUETools.Codecs.BitReader::buffer
	uint8_t* ___buffer_2;
	// System.Int32 CUETools.Codecs.BitReader::pos
	int32_t ___pos_3;
	// System.Int32 CUETools.Codecs.BitReader::len
	int32_t ___len_4;
	// System.Int32 CUETools.Codecs.BitReader::_bitaccumulator
	int32_t ____bitaccumulator_5;
	// System.UInt32 CUETools.Codecs.BitReader::cache
	uint32_t ___cache_6;

public:
	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(BitReader_t1537623812, ___buffer_2)); }
	inline uint8_t* get_buffer_2() const { return ___buffer_2; }
	inline uint8_t** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(uint8_t* value)
	{
		___buffer_2 = value;
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(BitReader_t1537623812, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}

	inline static int32_t get_offset_of_len_4() { return static_cast<int32_t>(offsetof(BitReader_t1537623812, ___len_4)); }
	inline int32_t get_len_4() const { return ___len_4; }
	inline int32_t* get_address_of_len_4() { return &___len_4; }
	inline void set_len_4(int32_t value)
	{
		___len_4 = value;
	}

	inline static int32_t get_offset_of__bitaccumulator_5() { return static_cast<int32_t>(offsetof(BitReader_t1537623812, ____bitaccumulator_5)); }
	inline int32_t get__bitaccumulator_5() const { return ____bitaccumulator_5; }
	inline int32_t* get_address_of__bitaccumulator_5() { return &____bitaccumulator_5; }
	inline void set__bitaccumulator_5(int32_t value)
	{
		____bitaccumulator_5 = value;
	}

	inline static int32_t get_offset_of_cache_6() { return static_cast<int32_t>(offsetof(BitReader_t1537623812, ___cache_6)); }
	inline uint32_t get_cache_6() const { return ___cache_6; }
	inline uint32_t* get_address_of_cache_6() { return &___cache_6; }
	inline void set_cache_6(uint32_t value)
	{
		___cache_6 = value;
	}
};

struct BitReader_t1537623812_StaticFields
{
public:
	// System.Byte[] CUETools.Codecs.BitReader::byte_to_unary_table
	ByteU5BU5D_t3397334013* ___byte_to_unary_table_0;
	// System.Byte[] CUETools.Codecs.BitReader::byte_to_log2_table
	ByteU5BU5D_t3397334013* ___byte_to_log2_table_1;

public:
	inline static int32_t get_offset_of_byte_to_unary_table_0() { return static_cast<int32_t>(offsetof(BitReader_t1537623812_StaticFields, ___byte_to_unary_table_0)); }
	inline ByteU5BU5D_t3397334013* get_byte_to_unary_table_0() const { return ___byte_to_unary_table_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_byte_to_unary_table_0() { return &___byte_to_unary_table_0; }
	inline void set_byte_to_unary_table_0(ByteU5BU5D_t3397334013* value)
	{
		___byte_to_unary_table_0 = value;
		Il2CppCodeGenWriteBarrier(&___byte_to_unary_table_0, value);
	}

	inline static int32_t get_offset_of_byte_to_log2_table_1() { return static_cast<int32_t>(offsetof(BitReader_t1537623812_StaticFields, ___byte_to_log2_table_1)); }
	inline ByteU5BU5D_t3397334013* get_byte_to_log2_table_1() const { return ___byte_to_log2_table_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_byte_to_log2_table_1() { return &___byte_to_log2_table_1; }
	inline void set_byte_to_log2_table_1(ByteU5BU5D_t3397334013* value)
	{
		___byte_to_log2_table_1 = value;
		Il2CppCodeGenWriteBarrier(&___byte_to_log2_table_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
