#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "CUETools_Codecs_FLAKE_CUETools_Codecs_FLAKE_FlakeEn609977151.h"

// System.IO.Stream
struct Stream_t3255436806;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Single[]
struct SingleU5BU5D_t577127397;
// System.Double[]
struct DoubleU5BU5D_t1889952540;
// CUETools.Codecs.Crc8
struct Crc8_t647258784;
// CUETools.Codecs.Crc16
struct Crc16_t477180359;
// System.Security.Cryptography.MD5
struct MD5_t1507972490;
// CUETools.Codecs.FLAKE.FlacFrame
struct FlacFrame_t2220327953;
// CUETools.Codecs.FLAKE.FlakeReader
struct FlakeReader_t465846400;
// CUETools.Codecs.FLAKE.SeekPoint[]
struct SeekPointU5BU5D_t3354154549;
// CUETools.Codecs.AudioPCMConfig
struct AudioPCMConfig_t1288270972;
// CUETools.Codecs.FLAKE.FlakeWriterSettings
struct FlakeWriterSettings_t2629197919;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.FLAKE.FlakeWriter
struct  FlakeWriter_t668639376  : public Il2CppObject
{
public:
	// System.IO.Stream CUETools.Codecs.FLAKE.FlakeWriter::_IO
	Stream_t3255436806 * ____IO_0;
	// System.String CUETools.Codecs.FLAKE.FlakeWriter::_path
	String_t* ____path_1;
	// System.Int64 CUETools.Codecs.FLAKE.FlakeWriter::_position
	int64_t ____position_2;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::channels
	int32_t ___channels_3;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::ch_code
	int32_t ___ch_code_4;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::sr_code0
	int32_t ___sr_code0_5;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::sr_code1
	int32_t ___sr_code1_6;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::bps_code
	int32_t ___bps_code_7;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::sample_count
	int32_t ___sample_count_8;
	// CUETools.Codecs.FLAKE.FlakeEncodeParams CUETools.Codecs.FLAKE.FlakeWriter::eparams
	FlakeEncodeParams_t609977151  ___eparams_9;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::max_frame_size
	int32_t ___max_frame_size_10;
	// System.Byte[] CUETools.Codecs.FLAKE.FlakeWriter::frame_buffer
	ByteU5BU5D_t3397334013* ___frame_buffer_11;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::frame_count
	int32_t ___frame_count_12;
	// System.Int64 CUETools.Codecs.FLAKE.FlakeWriter::first_frame_offset
	int64_t ___first_frame_offset_13;
	// System.Byte[] CUETools.Codecs.FLAKE.FlakeWriter::header
	ByteU5BU5D_t3397334013* ___header_14;
	// System.Int32[] CUETools.Codecs.FLAKE.FlakeWriter::samplesBuffer
	Int32U5BU5D_t3030399641* ___samplesBuffer_15;
	// System.Int32[] CUETools.Codecs.FLAKE.FlakeWriter::verifyBuffer
	Int32U5BU5D_t3030399641* ___verifyBuffer_16;
	// System.Int32[] CUETools.Codecs.FLAKE.FlakeWriter::residualBuffer
	Int32U5BU5D_t3030399641* ___residualBuffer_17;
	// System.Single[] CUETools.Codecs.FLAKE.FlakeWriter::windowBuffer
	SingleU5BU5D_t577127397* ___windowBuffer_18;
	// System.Double[] CUETools.Codecs.FLAKE.FlakeWriter::windowScale
	DoubleU5BU5D_t1889952540* ___windowScale_19;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::samplesInBuffer
	int32_t ___samplesInBuffer_20;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::_compressionLevel
	int32_t ____compressionLevel_21;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::_blocksize
	int32_t ____blocksize_22;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::_totalSize
	int32_t ____totalSize_23;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::_windowsize
	int32_t ____windowsize_24;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::_windowcount
	int32_t ____windowcount_25;
	// CUETools.Codecs.Crc8 CUETools.Codecs.FLAKE.FlakeWriter::crc8
	Crc8_t647258784 * ___crc8_26;
	// CUETools.Codecs.Crc16 CUETools.Codecs.FLAKE.FlakeWriter::crc16
	Crc16_t477180359 * ___crc16_27;
	// System.Security.Cryptography.MD5 CUETools.Codecs.FLAKE.FlakeWriter::md5
	MD5_t1507972490 * ___md5_28;
	// CUETools.Codecs.FLAKE.FlacFrame CUETools.Codecs.FLAKE.FlakeWriter::frame
	FlacFrame_t2220327953 * ___frame_29;
	// CUETools.Codecs.FLAKE.FlakeReader CUETools.Codecs.FLAKE.FlakeWriter::verify
	FlakeReader_t465846400 * ___verify_30;
	// CUETools.Codecs.FLAKE.SeekPoint[] CUETools.Codecs.FLAKE.FlakeWriter::seek_table
	SeekPointU5BU5D_t3354154549* ___seek_table_31;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeWriter::seek_table_offset
	int32_t ___seek_table_offset_32;
	// System.Boolean CUETools.Codecs.FLAKE.FlakeWriter::inited
	bool ___inited_33;
	// CUETools.Codecs.AudioPCMConfig CUETools.Codecs.FLAKE.FlakeWriter::_pcm
	AudioPCMConfig_t1288270972 * ____pcm_34;
	// CUETools.Codecs.FLAKE.FlakeWriterSettings CUETools.Codecs.FLAKE.FlakeWriter::_settings
	FlakeWriterSettings_t2629197919 * ____settings_35;
	// System.String CUETools.Codecs.FLAKE.FlakeWriter::vendor_string
	String_t* ___vendor_string_36;

public:
	inline static int32_t get_offset_of__IO_0() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____IO_0)); }
	inline Stream_t3255436806 * get__IO_0() const { return ____IO_0; }
	inline Stream_t3255436806 ** get_address_of__IO_0() { return &____IO_0; }
	inline void set__IO_0(Stream_t3255436806 * value)
	{
		____IO_0 = value;
		Il2CppCodeGenWriteBarrier(&____IO_0, value);
	}

	inline static int32_t get_offset_of__path_1() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____path_1)); }
	inline String_t* get__path_1() const { return ____path_1; }
	inline String_t** get_address_of__path_1() { return &____path_1; }
	inline void set__path_1(String_t* value)
	{
		____path_1 = value;
		Il2CppCodeGenWriteBarrier(&____path_1, value);
	}

	inline static int32_t get_offset_of__position_2() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____position_2)); }
	inline int64_t get__position_2() const { return ____position_2; }
	inline int64_t* get_address_of__position_2() { return &____position_2; }
	inline void set__position_2(int64_t value)
	{
		____position_2 = value;
	}

	inline static int32_t get_offset_of_channels_3() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___channels_3)); }
	inline int32_t get_channels_3() const { return ___channels_3; }
	inline int32_t* get_address_of_channels_3() { return &___channels_3; }
	inline void set_channels_3(int32_t value)
	{
		___channels_3 = value;
	}

	inline static int32_t get_offset_of_ch_code_4() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___ch_code_4)); }
	inline int32_t get_ch_code_4() const { return ___ch_code_4; }
	inline int32_t* get_address_of_ch_code_4() { return &___ch_code_4; }
	inline void set_ch_code_4(int32_t value)
	{
		___ch_code_4 = value;
	}

	inline static int32_t get_offset_of_sr_code0_5() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___sr_code0_5)); }
	inline int32_t get_sr_code0_5() const { return ___sr_code0_5; }
	inline int32_t* get_address_of_sr_code0_5() { return &___sr_code0_5; }
	inline void set_sr_code0_5(int32_t value)
	{
		___sr_code0_5 = value;
	}

	inline static int32_t get_offset_of_sr_code1_6() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___sr_code1_6)); }
	inline int32_t get_sr_code1_6() const { return ___sr_code1_6; }
	inline int32_t* get_address_of_sr_code1_6() { return &___sr_code1_6; }
	inline void set_sr_code1_6(int32_t value)
	{
		___sr_code1_6 = value;
	}

	inline static int32_t get_offset_of_bps_code_7() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___bps_code_7)); }
	inline int32_t get_bps_code_7() const { return ___bps_code_7; }
	inline int32_t* get_address_of_bps_code_7() { return &___bps_code_7; }
	inline void set_bps_code_7(int32_t value)
	{
		___bps_code_7 = value;
	}

	inline static int32_t get_offset_of_sample_count_8() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___sample_count_8)); }
	inline int32_t get_sample_count_8() const { return ___sample_count_8; }
	inline int32_t* get_address_of_sample_count_8() { return &___sample_count_8; }
	inline void set_sample_count_8(int32_t value)
	{
		___sample_count_8 = value;
	}

	inline static int32_t get_offset_of_eparams_9() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___eparams_9)); }
	inline FlakeEncodeParams_t609977151  get_eparams_9() const { return ___eparams_9; }
	inline FlakeEncodeParams_t609977151 * get_address_of_eparams_9() { return &___eparams_9; }
	inline void set_eparams_9(FlakeEncodeParams_t609977151  value)
	{
		___eparams_9 = value;
	}

	inline static int32_t get_offset_of_max_frame_size_10() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___max_frame_size_10)); }
	inline int32_t get_max_frame_size_10() const { return ___max_frame_size_10; }
	inline int32_t* get_address_of_max_frame_size_10() { return &___max_frame_size_10; }
	inline void set_max_frame_size_10(int32_t value)
	{
		___max_frame_size_10 = value;
	}

	inline static int32_t get_offset_of_frame_buffer_11() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___frame_buffer_11)); }
	inline ByteU5BU5D_t3397334013* get_frame_buffer_11() const { return ___frame_buffer_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_frame_buffer_11() { return &___frame_buffer_11; }
	inline void set_frame_buffer_11(ByteU5BU5D_t3397334013* value)
	{
		___frame_buffer_11 = value;
		Il2CppCodeGenWriteBarrier(&___frame_buffer_11, value);
	}

	inline static int32_t get_offset_of_frame_count_12() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___frame_count_12)); }
	inline int32_t get_frame_count_12() const { return ___frame_count_12; }
	inline int32_t* get_address_of_frame_count_12() { return &___frame_count_12; }
	inline void set_frame_count_12(int32_t value)
	{
		___frame_count_12 = value;
	}

	inline static int32_t get_offset_of_first_frame_offset_13() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___first_frame_offset_13)); }
	inline int64_t get_first_frame_offset_13() const { return ___first_frame_offset_13; }
	inline int64_t* get_address_of_first_frame_offset_13() { return &___first_frame_offset_13; }
	inline void set_first_frame_offset_13(int64_t value)
	{
		___first_frame_offset_13 = value;
	}

	inline static int32_t get_offset_of_header_14() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___header_14)); }
	inline ByteU5BU5D_t3397334013* get_header_14() const { return ___header_14; }
	inline ByteU5BU5D_t3397334013** get_address_of_header_14() { return &___header_14; }
	inline void set_header_14(ByteU5BU5D_t3397334013* value)
	{
		___header_14 = value;
		Il2CppCodeGenWriteBarrier(&___header_14, value);
	}

	inline static int32_t get_offset_of_samplesBuffer_15() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___samplesBuffer_15)); }
	inline Int32U5BU5D_t3030399641* get_samplesBuffer_15() const { return ___samplesBuffer_15; }
	inline Int32U5BU5D_t3030399641** get_address_of_samplesBuffer_15() { return &___samplesBuffer_15; }
	inline void set_samplesBuffer_15(Int32U5BU5D_t3030399641* value)
	{
		___samplesBuffer_15 = value;
		Il2CppCodeGenWriteBarrier(&___samplesBuffer_15, value);
	}

	inline static int32_t get_offset_of_verifyBuffer_16() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___verifyBuffer_16)); }
	inline Int32U5BU5D_t3030399641* get_verifyBuffer_16() const { return ___verifyBuffer_16; }
	inline Int32U5BU5D_t3030399641** get_address_of_verifyBuffer_16() { return &___verifyBuffer_16; }
	inline void set_verifyBuffer_16(Int32U5BU5D_t3030399641* value)
	{
		___verifyBuffer_16 = value;
		Il2CppCodeGenWriteBarrier(&___verifyBuffer_16, value);
	}

	inline static int32_t get_offset_of_residualBuffer_17() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___residualBuffer_17)); }
	inline Int32U5BU5D_t3030399641* get_residualBuffer_17() const { return ___residualBuffer_17; }
	inline Int32U5BU5D_t3030399641** get_address_of_residualBuffer_17() { return &___residualBuffer_17; }
	inline void set_residualBuffer_17(Int32U5BU5D_t3030399641* value)
	{
		___residualBuffer_17 = value;
		Il2CppCodeGenWriteBarrier(&___residualBuffer_17, value);
	}

	inline static int32_t get_offset_of_windowBuffer_18() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___windowBuffer_18)); }
	inline SingleU5BU5D_t577127397* get_windowBuffer_18() const { return ___windowBuffer_18; }
	inline SingleU5BU5D_t577127397** get_address_of_windowBuffer_18() { return &___windowBuffer_18; }
	inline void set_windowBuffer_18(SingleU5BU5D_t577127397* value)
	{
		___windowBuffer_18 = value;
		Il2CppCodeGenWriteBarrier(&___windowBuffer_18, value);
	}

	inline static int32_t get_offset_of_windowScale_19() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___windowScale_19)); }
	inline DoubleU5BU5D_t1889952540* get_windowScale_19() const { return ___windowScale_19; }
	inline DoubleU5BU5D_t1889952540** get_address_of_windowScale_19() { return &___windowScale_19; }
	inline void set_windowScale_19(DoubleU5BU5D_t1889952540* value)
	{
		___windowScale_19 = value;
		Il2CppCodeGenWriteBarrier(&___windowScale_19, value);
	}

	inline static int32_t get_offset_of_samplesInBuffer_20() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___samplesInBuffer_20)); }
	inline int32_t get_samplesInBuffer_20() const { return ___samplesInBuffer_20; }
	inline int32_t* get_address_of_samplesInBuffer_20() { return &___samplesInBuffer_20; }
	inline void set_samplesInBuffer_20(int32_t value)
	{
		___samplesInBuffer_20 = value;
	}

	inline static int32_t get_offset_of__compressionLevel_21() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____compressionLevel_21)); }
	inline int32_t get__compressionLevel_21() const { return ____compressionLevel_21; }
	inline int32_t* get_address_of__compressionLevel_21() { return &____compressionLevel_21; }
	inline void set__compressionLevel_21(int32_t value)
	{
		____compressionLevel_21 = value;
	}

	inline static int32_t get_offset_of__blocksize_22() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____blocksize_22)); }
	inline int32_t get__blocksize_22() const { return ____blocksize_22; }
	inline int32_t* get_address_of__blocksize_22() { return &____blocksize_22; }
	inline void set__blocksize_22(int32_t value)
	{
		____blocksize_22 = value;
	}

	inline static int32_t get_offset_of__totalSize_23() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____totalSize_23)); }
	inline int32_t get__totalSize_23() const { return ____totalSize_23; }
	inline int32_t* get_address_of__totalSize_23() { return &____totalSize_23; }
	inline void set__totalSize_23(int32_t value)
	{
		____totalSize_23 = value;
	}

	inline static int32_t get_offset_of__windowsize_24() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____windowsize_24)); }
	inline int32_t get__windowsize_24() const { return ____windowsize_24; }
	inline int32_t* get_address_of__windowsize_24() { return &____windowsize_24; }
	inline void set__windowsize_24(int32_t value)
	{
		____windowsize_24 = value;
	}

	inline static int32_t get_offset_of__windowcount_25() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____windowcount_25)); }
	inline int32_t get__windowcount_25() const { return ____windowcount_25; }
	inline int32_t* get_address_of__windowcount_25() { return &____windowcount_25; }
	inline void set__windowcount_25(int32_t value)
	{
		____windowcount_25 = value;
	}

	inline static int32_t get_offset_of_crc8_26() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___crc8_26)); }
	inline Crc8_t647258784 * get_crc8_26() const { return ___crc8_26; }
	inline Crc8_t647258784 ** get_address_of_crc8_26() { return &___crc8_26; }
	inline void set_crc8_26(Crc8_t647258784 * value)
	{
		___crc8_26 = value;
		Il2CppCodeGenWriteBarrier(&___crc8_26, value);
	}

	inline static int32_t get_offset_of_crc16_27() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___crc16_27)); }
	inline Crc16_t477180359 * get_crc16_27() const { return ___crc16_27; }
	inline Crc16_t477180359 ** get_address_of_crc16_27() { return &___crc16_27; }
	inline void set_crc16_27(Crc16_t477180359 * value)
	{
		___crc16_27 = value;
		Il2CppCodeGenWriteBarrier(&___crc16_27, value);
	}

	inline static int32_t get_offset_of_md5_28() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___md5_28)); }
	inline MD5_t1507972490 * get_md5_28() const { return ___md5_28; }
	inline MD5_t1507972490 ** get_address_of_md5_28() { return &___md5_28; }
	inline void set_md5_28(MD5_t1507972490 * value)
	{
		___md5_28 = value;
		Il2CppCodeGenWriteBarrier(&___md5_28, value);
	}

	inline static int32_t get_offset_of_frame_29() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___frame_29)); }
	inline FlacFrame_t2220327953 * get_frame_29() const { return ___frame_29; }
	inline FlacFrame_t2220327953 ** get_address_of_frame_29() { return &___frame_29; }
	inline void set_frame_29(FlacFrame_t2220327953 * value)
	{
		___frame_29 = value;
		Il2CppCodeGenWriteBarrier(&___frame_29, value);
	}

	inline static int32_t get_offset_of_verify_30() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___verify_30)); }
	inline FlakeReader_t465846400 * get_verify_30() const { return ___verify_30; }
	inline FlakeReader_t465846400 ** get_address_of_verify_30() { return &___verify_30; }
	inline void set_verify_30(FlakeReader_t465846400 * value)
	{
		___verify_30 = value;
		Il2CppCodeGenWriteBarrier(&___verify_30, value);
	}

	inline static int32_t get_offset_of_seek_table_31() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___seek_table_31)); }
	inline SeekPointU5BU5D_t3354154549* get_seek_table_31() const { return ___seek_table_31; }
	inline SeekPointU5BU5D_t3354154549** get_address_of_seek_table_31() { return &___seek_table_31; }
	inline void set_seek_table_31(SeekPointU5BU5D_t3354154549* value)
	{
		___seek_table_31 = value;
		Il2CppCodeGenWriteBarrier(&___seek_table_31, value);
	}

	inline static int32_t get_offset_of_seek_table_offset_32() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___seek_table_offset_32)); }
	inline int32_t get_seek_table_offset_32() const { return ___seek_table_offset_32; }
	inline int32_t* get_address_of_seek_table_offset_32() { return &___seek_table_offset_32; }
	inline void set_seek_table_offset_32(int32_t value)
	{
		___seek_table_offset_32 = value;
	}

	inline static int32_t get_offset_of_inited_33() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___inited_33)); }
	inline bool get_inited_33() const { return ___inited_33; }
	inline bool* get_address_of_inited_33() { return &___inited_33; }
	inline void set_inited_33(bool value)
	{
		___inited_33 = value;
	}

	inline static int32_t get_offset_of__pcm_34() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____pcm_34)); }
	inline AudioPCMConfig_t1288270972 * get__pcm_34() const { return ____pcm_34; }
	inline AudioPCMConfig_t1288270972 ** get_address_of__pcm_34() { return &____pcm_34; }
	inline void set__pcm_34(AudioPCMConfig_t1288270972 * value)
	{
		____pcm_34 = value;
		Il2CppCodeGenWriteBarrier(&____pcm_34, value);
	}

	inline static int32_t get_offset_of__settings_35() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ____settings_35)); }
	inline FlakeWriterSettings_t2629197919 * get__settings_35() const { return ____settings_35; }
	inline FlakeWriterSettings_t2629197919 ** get_address_of__settings_35() { return &____settings_35; }
	inline void set__settings_35(FlakeWriterSettings_t2629197919 * value)
	{
		____settings_35 = value;
		Il2CppCodeGenWriteBarrier(&____settings_35, value);
	}

	inline static int32_t get_offset_of_vendor_string_36() { return static_cast<int32_t>(offsetof(FlakeWriter_t668639376, ___vendor_string_36)); }
	inline String_t* get_vendor_string_36() const { return ___vendor_string_36; }
	inline String_t** get_address_of_vendor_string_36() { return &___vendor_string_36; }
	inline void set_vendor_string_36(String_t* value)
	{
		___vendor_string_36 = value;
		Il2CppCodeGenWriteBarrier(&___vendor_string_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
