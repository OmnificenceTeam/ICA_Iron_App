#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.Stream
struct Stream_t3255436806;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// CUETools.Codecs.AudioPCMConfig
struct AudioPCMConfig_t1288270972;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.WAVReader
struct  WAVReader_t1832405455  : public Il2CppObject
{
public:
	// System.IO.Stream CUETools.Codecs.WAVReader::_IO
	Stream_t3255436806 * ____IO_0;
	// System.IO.BinaryReader CUETools.Codecs.WAVReader::_br
	BinaryReader_t2491843768 * ____br_1;
	// System.Int64 CUETools.Codecs.WAVReader::_dataOffset
	int64_t ____dataOffset_2;
	// System.Int64 CUETools.Codecs.WAVReader::_samplePos
	int64_t ____samplePos_3;
	// System.Int64 CUETools.Codecs.WAVReader::_sampleLen
	int64_t ____sampleLen_4;
	// CUETools.Codecs.AudioPCMConfig CUETools.Codecs.WAVReader::pcm
	AudioPCMConfig_t1288270972 * ___pcm_5;
	// System.Int64 CUETools.Codecs.WAVReader::_dataLen
	int64_t ____dataLen_6;
	// System.Boolean CUETools.Codecs.WAVReader::_largeFile
	bool ____largeFile_7;
	// System.String CUETools.Codecs.WAVReader::_path
	String_t* ____path_8;

public:
	inline static int32_t get_offset_of__IO_0() { return static_cast<int32_t>(offsetof(WAVReader_t1832405455, ____IO_0)); }
	inline Stream_t3255436806 * get__IO_0() const { return ____IO_0; }
	inline Stream_t3255436806 ** get_address_of__IO_0() { return &____IO_0; }
	inline void set__IO_0(Stream_t3255436806 * value)
	{
		____IO_0 = value;
		Il2CppCodeGenWriteBarrier(&____IO_0, value);
	}

	inline static int32_t get_offset_of__br_1() { return static_cast<int32_t>(offsetof(WAVReader_t1832405455, ____br_1)); }
	inline BinaryReader_t2491843768 * get__br_1() const { return ____br_1; }
	inline BinaryReader_t2491843768 ** get_address_of__br_1() { return &____br_1; }
	inline void set__br_1(BinaryReader_t2491843768 * value)
	{
		____br_1 = value;
		Il2CppCodeGenWriteBarrier(&____br_1, value);
	}

	inline static int32_t get_offset_of__dataOffset_2() { return static_cast<int32_t>(offsetof(WAVReader_t1832405455, ____dataOffset_2)); }
	inline int64_t get__dataOffset_2() const { return ____dataOffset_2; }
	inline int64_t* get_address_of__dataOffset_2() { return &____dataOffset_2; }
	inline void set__dataOffset_2(int64_t value)
	{
		____dataOffset_2 = value;
	}

	inline static int32_t get_offset_of__samplePos_3() { return static_cast<int32_t>(offsetof(WAVReader_t1832405455, ____samplePos_3)); }
	inline int64_t get__samplePos_3() const { return ____samplePos_3; }
	inline int64_t* get_address_of__samplePos_3() { return &____samplePos_3; }
	inline void set__samplePos_3(int64_t value)
	{
		____samplePos_3 = value;
	}

	inline static int32_t get_offset_of__sampleLen_4() { return static_cast<int32_t>(offsetof(WAVReader_t1832405455, ____sampleLen_4)); }
	inline int64_t get__sampleLen_4() const { return ____sampleLen_4; }
	inline int64_t* get_address_of__sampleLen_4() { return &____sampleLen_4; }
	inline void set__sampleLen_4(int64_t value)
	{
		____sampleLen_4 = value;
	}

	inline static int32_t get_offset_of_pcm_5() { return static_cast<int32_t>(offsetof(WAVReader_t1832405455, ___pcm_5)); }
	inline AudioPCMConfig_t1288270972 * get_pcm_5() const { return ___pcm_5; }
	inline AudioPCMConfig_t1288270972 ** get_address_of_pcm_5() { return &___pcm_5; }
	inline void set_pcm_5(AudioPCMConfig_t1288270972 * value)
	{
		___pcm_5 = value;
		Il2CppCodeGenWriteBarrier(&___pcm_5, value);
	}

	inline static int32_t get_offset_of__dataLen_6() { return static_cast<int32_t>(offsetof(WAVReader_t1832405455, ____dataLen_6)); }
	inline int64_t get__dataLen_6() const { return ____dataLen_6; }
	inline int64_t* get_address_of__dataLen_6() { return &____dataLen_6; }
	inline void set__dataLen_6(int64_t value)
	{
		____dataLen_6 = value;
	}

	inline static int32_t get_offset_of__largeFile_7() { return static_cast<int32_t>(offsetof(WAVReader_t1832405455, ____largeFile_7)); }
	inline bool get__largeFile_7() const { return ____largeFile_7; }
	inline bool* get_address_of__largeFile_7() { return &____largeFile_7; }
	inline void set__largeFile_7(bool value)
	{
		____largeFile_7 = value;
	}

	inline static int32_t get_offset_of__path_8() { return static_cast<int32_t>(offsetof(WAVReader_t1832405455, ____path_8)); }
	inline String_t* get__path_8() const { return ____path_8; }
	inline String_t** get_address_of__path_8() { return &____path_8; }
	inline void set__path_8(String_t* value)
	{
		____path_8 = value;
		Il2CppCodeGenWriteBarrier(&____path_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
