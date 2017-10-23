#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// CUETools.Codecs.Crc8
struct Crc8_t647258784;
// CUETools.Codecs.Crc16
struct Crc16_t477180359;
// CUETools.Codecs.FLAKE.FlacFrame
struct FlacFrame_t2220327953;
// CUETools.Codecs.BitReader
struct BitReader_t1537623812;
// CUETools.Codecs.AudioPCMConfig
struct AudioPCMConfig_t1288270972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.FLAKE.FlakeReader
struct  FlakeReader_t465846400  : public Il2CppObject
{
public:
	// System.Int32[] CUETools.Codecs.FLAKE.FlakeReader::samplesBuffer
	Int32U5BU5D_t3030399641* ___samplesBuffer_0;
	// System.Int32[] CUETools.Codecs.FLAKE.FlakeReader::residualBuffer
	Int32U5BU5D_t3030399641* ___residualBuffer_1;
	// CUETools.Codecs.Crc8 CUETools.Codecs.FLAKE.FlakeReader::crc8
	Crc8_t647258784 * ___crc8_2;
	// CUETools.Codecs.Crc16 CUETools.Codecs.FLAKE.FlakeReader::crc16
	Crc16_t477180359 * ___crc16_3;
	// CUETools.Codecs.FLAKE.FlacFrame CUETools.Codecs.FLAKE.FlakeReader::frame
	FlacFrame_t2220327953 * ___frame_4;
	// CUETools.Codecs.BitReader CUETools.Codecs.FLAKE.FlakeReader::framereader
	BitReader_t1537623812 * ___framereader_5;
	// CUETools.Codecs.AudioPCMConfig CUETools.Codecs.FLAKE.FlakeReader::pcm
	AudioPCMConfig_t1288270972 * ___pcm_6;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeReader::_samplesInBuffer
	int32_t ____samplesInBuffer_7;
	// System.Int64 CUETools.Codecs.FLAKE.FlakeReader::_sampleCount
	int64_t ____sampleCount_8;
	// System.Int64 CUETools.Codecs.FLAKE.FlakeReader::_sampleOffset
	int64_t ____sampleOffset_9;
	// System.Boolean CUETools.Codecs.FLAKE.FlakeReader::do_crc
	bool ___do_crc_10;

public:
	inline static int32_t get_offset_of_samplesBuffer_0() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ___samplesBuffer_0)); }
	inline Int32U5BU5D_t3030399641* get_samplesBuffer_0() const { return ___samplesBuffer_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_samplesBuffer_0() { return &___samplesBuffer_0; }
	inline void set_samplesBuffer_0(Int32U5BU5D_t3030399641* value)
	{
		___samplesBuffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___samplesBuffer_0, value);
	}

	inline static int32_t get_offset_of_residualBuffer_1() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ___residualBuffer_1)); }
	inline Int32U5BU5D_t3030399641* get_residualBuffer_1() const { return ___residualBuffer_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_residualBuffer_1() { return &___residualBuffer_1; }
	inline void set_residualBuffer_1(Int32U5BU5D_t3030399641* value)
	{
		___residualBuffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___residualBuffer_1, value);
	}

	inline static int32_t get_offset_of_crc8_2() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ___crc8_2)); }
	inline Crc8_t647258784 * get_crc8_2() const { return ___crc8_2; }
	inline Crc8_t647258784 ** get_address_of_crc8_2() { return &___crc8_2; }
	inline void set_crc8_2(Crc8_t647258784 * value)
	{
		___crc8_2 = value;
		Il2CppCodeGenWriteBarrier(&___crc8_2, value);
	}

	inline static int32_t get_offset_of_crc16_3() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ___crc16_3)); }
	inline Crc16_t477180359 * get_crc16_3() const { return ___crc16_3; }
	inline Crc16_t477180359 ** get_address_of_crc16_3() { return &___crc16_3; }
	inline void set_crc16_3(Crc16_t477180359 * value)
	{
		___crc16_3 = value;
		Il2CppCodeGenWriteBarrier(&___crc16_3, value);
	}

	inline static int32_t get_offset_of_frame_4() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ___frame_4)); }
	inline FlacFrame_t2220327953 * get_frame_4() const { return ___frame_4; }
	inline FlacFrame_t2220327953 ** get_address_of_frame_4() { return &___frame_4; }
	inline void set_frame_4(FlacFrame_t2220327953 * value)
	{
		___frame_4 = value;
		Il2CppCodeGenWriteBarrier(&___frame_4, value);
	}

	inline static int32_t get_offset_of_framereader_5() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ___framereader_5)); }
	inline BitReader_t1537623812 * get_framereader_5() const { return ___framereader_5; }
	inline BitReader_t1537623812 ** get_address_of_framereader_5() { return &___framereader_5; }
	inline void set_framereader_5(BitReader_t1537623812 * value)
	{
		___framereader_5 = value;
		Il2CppCodeGenWriteBarrier(&___framereader_5, value);
	}

	inline static int32_t get_offset_of_pcm_6() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ___pcm_6)); }
	inline AudioPCMConfig_t1288270972 * get_pcm_6() const { return ___pcm_6; }
	inline AudioPCMConfig_t1288270972 ** get_address_of_pcm_6() { return &___pcm_6; }
	inline void set_pcm_6(AudioPCMConfig_t1288270972 * value)
	{
		___pcm_6 = value;
		Il2CppCodeGenWriteBarrier(&___pcm_6, value);
	}

	inline static int32_t get_offset_of__samplesInBuffer_7() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ____samplesInBuffer_7)); }
	inline int32_t get__samplesInBuffer_7() const { return ____samplesInBuffer_7; }
	inline int32_t* get_address_of__samplesInBuffer_7() { return &____samplesInBuffer_7; }
	inline void set__samplesInBuffer_7(int32_t value)
	{
		____samplesInBuffer_7 = value;
	}

	inline static int32_t get_offset_of__sampleCount_8() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ____sampleCount_8)); }
	inline int64_t get__sampleCount_8() const { return ____sampleCount_8; }
	inline int64_t* get_address_of__sampleCount_8() { return &____sampleCount_8; }
	inline void set__sampleCount_8(int64_t value)
	{
		____sampleCount_8 = value;
	}

	inline static int32_t get_offset_of__sampleOffset_9() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ____sampleOffset_9)); }
	inline int64_t get__sampleOffset_9() const { return ____sampleOffset_9; }
	inline int64_t* get_address_of__sampleOffset_9() { return &____sampleOffset_9; }
	inline void set__sampleOffset_9(int64_t value)
	{
		____sampleOffset_9 = value;
	}

	inline static int32_t get_offset_of_do_crc_10() { return static_cast<int32_t>(offsetof(FlakeReader_t465846400, ___do_crc_10)); }
	inline bool get_do_crc_10() const { return ___do_crc_10; }
	inline bool* get_address_of_do_crc_10() { return &___do_crc_10; }
	inline void set_do_crc_10(bool value)
	{
		___do_crc_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
