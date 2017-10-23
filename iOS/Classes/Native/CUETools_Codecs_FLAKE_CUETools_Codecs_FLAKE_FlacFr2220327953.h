#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "CUETools_Codecs_FLAKE_CUETools_Codecs_FLAKE_Channe2048047198.h"

// CUETools.Codecs.FLAKE.FlacSubframeInfo[]
struct FlacSubframeInfoU5BU5D_t2367540190;
// CUETools.Codecs.FLAKE.FlacSubframe
struct FlacSubframe_t57719381;
// System.Single
struct Single_t2076509932;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.FLAKE.FlacFrame
struct  FlacFrame_t2220327953  : public Il2CppObject
{
public:
	// System.Int32 CUETools.Codecs.FLAKE.FlacFrame::blocksize
	int32_t ___blocksize_0;
	// System.Int32 CUETools.Codecs.FLAKE.FlacFrame::bs_code0
	int32_t ___bs_code0_1;
	// System.Int32 CUETools.Codecs.FLAKE.FlacFrame::bs_code1
	int32_t ___bs_code1_2;
	// CUETools.Codecs.FLAKE.ChannelMode CUETools.Codecs.FLAKE.FlacFrame::ch_mode
	int32_t ___ch_mode_3;
	// System.Byte CUETools.Codecs.FLAKE.FlacFrame::crc8
	uint8_t ___crc8_4;
	// CUETools.Codecs.FLAKE.FlacSubframeInfo[] CUETools.Codecs.FLAKE.FlacFrame::subframes
	FlacSubframeInfoU5BU5D_t2367540190* ___subframes_5;
	// System.Int32 CUETools.Codecs.FLAKE.FlacFrame::frame_number
	int32_t ___frame_number_6;
	// CUETools.Codecs.FLAKE.FlacSubframe CUETools.Codecs.FLAKE.FlacFrame::current
	FlacSubframe_t57719381 * ___current_7;
	// System.Single* CUETools.Codecs.FLAKE.FlacFrame::window_buffer
	float* ___window_buffer_8;

public:
	inline static int32_t get_offset_of_blocksize_0() { return static_cast<int32_t>(offsetof(FlacFrame_t2220327953, ___blocksize_0)); }
	inline int32_t get_blocksize_0() const { return ___blocksize_0; }
	inline int32_t* get_address_of_blocksize_0() { return &___blocksize_0; }
	inline void set_blocksize_0(int32_t value)
	{
		___blocksize_0 = value;
	}

	inline static int32_t get_offset_of_bs_code0_1() { return static_cast<int32_t>(offsetof(FlacFrame_t2220327953, ___bs_code0_1)); }
	inline int32_t get_bs_code0_1() const { return ___bs_code0_1; }
	inline int32_t* get_address_of_bs_code0_1() { return &___bs_code0_1; }
	inline void set_bs_code0_1(int32_t value)
	{
		___bs_code0_1 = value;
	}

	inline static int32_t get_offset_of_bs_code1_2() { return static_cast<int32_t>(offsetof(FlacFrame_t2220327953, ___bs_code1_2)); }
	inline int32_t get_bs_code1_2() const { return ___bs_code1_2; }
	inline int32_t* get_address_of_bs_code1_2() { return &___bs_code1_2; }
	inline void set_bs_code1_2(int32_t value)
	{
		___bs_code1_2 = value;
	}

	inline static int32_t get_offset_of_ch_mode_3() { return static_cast<int32_t>(offsetof(FlacFrame_t2220327953, ___ch_mode_3)); }
	inline int32_t get_ch_mode_3() const { return ___ch_mode_3; }
	inline int32_t* get_address_of_ch_mode_3() { return &___ch_mode_3; }
	inline void set_ch_mode_3(int32_t value)
	{
		___ch_mode_3 = value;
	}

	inline static int32_t get_offset_of_crc8_4() { return static_cast<int32_t>(offsetof(FlacFrame_t2220327953, ___crc8_4)); }
	inline uint8_t get_crc8_4() const { return ___crc8_4; }
	inline uint8_t* get_address_of_crc8_4() { return &___crc8_4; }
	inline void set_crc8_4(uint8_t value)
	{
		___crc8_4 = value;
	}

	inline static int32_t get_offset_of_subframes_5() { return static_cast<int32_t>(offsetof(FlacFrame_t2220327953, ___subframes_5)); }
	inline FlacSubframeInfoU5BU5D_t2367540190* get_subframes_5() const { return ___subframes_5; }
	inline FlacSubframeInfoU5BU5D_t2367540190** get_address_of_subframes_5() { return &___subframes_5; }
	inline void set_subframes_5(FlacSubframeInfoU5BU5D_t2367540190* value)
	{
		___subframes_5 = value;
		Il2CppCodeGenWriteBarrier(&___subframes_5, value);
	}

	inline static int32_t get_offset_of_frame_number_6() { return static_cast<int32_t>(offsetof(FlacFrame_t2220327953, ___frame_number_6)); }
	inline int32_t get_frame_number_6() const { return ___frame_number_6; }
	inline int32_t* get_address_of_frame_number_6() { return &___frame_number_6; }
	inline void set_frame_number_6(int32_t value)
	{
		___frame_number_6 = value;
	}

	inline static int32_t get_offset_of_current_7() { return static_cast<int32_t>(offsetof(FlacFrame_t2220327953, ___current_7)); }
	inline FlacSubframe_t57719381 * get_current_7() const { return ___current_7; }
	inline FlacSubframe_t57719381 ** get_address_of_current_7() { return &___current_7; }
	inline void set_current_7(FlacSubframe_t57719381 * value)
	{
		___current_7 = value;
		Il2CppCodeGenWriteBarrier(&___current_7, value);
	}

	inline static int32_t get_offset_of_window_buffer_8() { return static_cast<int32_t>(offsetof(FlacFrame_t2220327953, ___window_buffer_8)); }
	inline float* get_window_buffer_8() const { return ___window_buffer_8; }
	inline float** get_address_of_window_buffer_8() { return &___window_buffer_8; }
	inline void set_window_buffer_8(float* value)
	{
		___window_buffer_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
