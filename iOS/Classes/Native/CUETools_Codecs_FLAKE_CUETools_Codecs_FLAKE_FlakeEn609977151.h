#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "CUETools_Codecs_FLAKE_CUETools_Codecs_FLAKE_OrderM4007086257.h"
#include "CUETools_Codecs_FLAKE_CUETools_Codecs_FLAKE_Stereo1361319041.h"
#include "CUETools_Codecs_FLAKE_CUETools_Codecs_FLAKE_Window2799622759.h"
#include "CUETools_Codecs_FLAKE_CUETools_Codecs_FLAKE_Predic3254709033.h"
#include "CUETools_Codecs_FLAKE_CUETools_Codecs_FLAKE_WindowF829486410.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.FLAKE.FlakeEncodeParams
struct  FlakeEncodeParams_t609977151 
{
public:
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::compression
	int32_t ___compression_0;
	// CUETools.Codecs.FLAKE.OrderMethod CUETools.Codecs.FLAKE.FlakeEncodeParams::order_method
	int32_t ___order_method_1;
	// CUETools.Codecs.FLAKE.StereoMethod CUETools.Codecs.FLAKE.FlakeEncodeParams::stereo_method
	int32_t ___stereo_method_2;
	// CUETools.Codecs.FLAKE.WindowMethod CUETools.Codecs.FLAKE.FlakeEncodeParams::window_method
	int32_t ___window_method_3;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::block_size
	int32_t ___block_size_4;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::block_time_ms
	int32_t ___block_time_ms_5;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::padding_size
	int32_t ___padding_size_6;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::min_prediction_order
	int32_t ___min_prediction_order_7;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::max_prediction_order
	int32_t ___max_prediction_order_8;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::estimation_depth
	int32_t ___estimation_depth_9;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::min_fixed_order
	int32_t ___min_fixed_order_10;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::max_fixed_order
	int32_t ___max_fixed_order_11;
	// CUETools.Codecs.FLAKE.PredictionType CUETools.Codecs.FLAKE.FlakeEncodeParams::prediction_type
	int32_t ___prediction_type_12;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::min_partition_order
	int32_t ___min_partition_order_13;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::max_partition_order
	int32_t ___max_partition_order_14;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::variable_block_size
	int32_t ___variable_block_size_15;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::lpc_max_precision_search
	int32_t ___lpc_max_precision_search_16;
	// System.Int32 CUETools.Codecs.FLAKE.FlakeEncodeParams::lpc_min_precision_search
	int32_t ___lpc_min_precision_search_17;
	// CUETools.Codecs.FLAKE.WindowFunction CUETools.Codecs.FLAKE.FlakeEncodeParams::window_function
	int32_t ___window_function_18;
	// System.Boolean CUETools.Codecs.FLAKE.FlakeEncodeParams::do_seektable
	bool ___do_seektable_19;

public:
	inline static int32_t get_offset_of_compression_0() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___compression_0)); }
	inline int32_t get_compression_0() const { return ___compression_0; }
	inline int32_t* get_address_of_compression_0() { return &___compression_0; }
	inline void set_compression_0(int32_t value)
	{
		___compression_0 = value;
	}

	inline static int32_t get_offset_of_order_method_1() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___order_method_1)); }
	inline int32_t get_order_method_1() const { return ___order_method_1; }
	inline int32_t* get_address_of_order_method_1() { return &___order_method_1; }
	inline void set_order_method_1(int32_t value)
	{
		___order_method_1 = value;
	}

	inline static int32_t get_offset_of_stereo_method_2() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___stereo_method_2)); }
	inline int32_t get_stereo_method_2() const { return ___stereo_method_2; }
	inline int32_t* get_address_of_stereo_method_2() { return &___stereo_method_2; }
	inline void set_stereo_method_2(int32_t value)
	{
		___stereo_method_2 = value;
	}

	inline static int32_t get_offset_of_window_method_3() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___window_method_3)); }
	inline int32_t get_window_method_3() const { return ___window_method_3; }
	inline int32_t* get_address_of_window_method_3() { return &___window_method_3; }
	inline void set_window_method_3(int32_t value)
	{
		___window_method_3 = value;
	}

	inline static int32_t get_offset_of_block_size_4() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___block_size_4)); }
	inline int32_t get_block_size_4() const { return ___block_size_4; }
	inline int32_t* get_address_of_block_size_4() { return &___block_size_4; }
	inline void set_block_size_4(int32_t value)
	{
		___block_size_4 = value;
	}

	inline static int32_t get_offset_of_block_time_ms_5() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___block_time_ms_5)); }
	inline int32_t get_block_time_ms_5() const { return ___block_time_ms_5; }
	inline int32_t* get_address_of_block_time_ms_5() { return &___block_time_ms_5; }
	inline void set_block_time_ms_5(int32_t value)
	{
		___block_time_ms_5 = value;
	}

	inline static int32_t get_offset_of_padding_size_6() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___padding_size_6)); }
	inline int32_t get_padding_size_6() const { return ___padding_size_6; }
	inline int32_t* get_address_of_padding_size_6() { return &___padding_size_6; }
	inline void set_padding_size_6(int32_t value)
	{
		___padding_size_6 = value;
	}

	inline static int32_t get_offset_of_min_prediction_order_7() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___min_prediction_order_7)); }
	inline int32_t get_min_prediction_order_7() const { return ___min_prediction_order_7; }
	inline int32_t* get_address_of_min_prediction_order_7() { return &___min_prediction_order_7; }
	inline void set_min_prediction_order_7(int32_t value)
	{
		___min_prediction_order_7 = value;
	}

	inline static int32_t get_offset_of_max_prediction_order_8() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___max_prediction_order_8)); }
	inline int32_t get_max_prediction_order_8() const { return ___max_prediction_order_8; }
	inline int32_t* get_address_of_max_prediction_order_8() { return &___max_prediction_order_8; }
	inline void set_max_prediction_order_8(int32_t value)
	{
		___max_prediction_order_8 = value;
	}

	inline static int32_t get_offset_of_estimation_depth_9() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___estimation_depth_9)); }
	inline int32_t get_estimation_depth_9() const { return ___estimation_depth_9; }
	inline int32_t* get_address_of_estimation_depth_9() { return &___estimation_depth_9; }
	inline void set_estimation_depth_9(int32_t value)
	{
		___estimation_depth_9 = value;
	}

	inline static int32_t get_offset_of_min_fixed_order_10() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___min_fixed_order_10)); }
	inline int32_t get_min_fixed_order_10() const { return ___min_fixed_order_10; }
	inline int32_t* get_address_of_min_fixed_order_10() { return &___min_fixed_order_10; }
	inline void set_min_fixed_order_10(int32_t value)
	{
		___min_fixed_order_10 = value;
	}

	inline static int32_t get_offset_of_max_fixed_order_11() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___max_fixed_order_11)); }
	inline int32_t get_max_fixed_order_11() const { return ___max_fixed_order_11; }
	inline int32_t* get_address_of_max_fixed_order_11() { return &___max_fixed_order_11; }
	inline void set_max_fixed_order_11(int32_t value)
	{
		___max_fixed_order_11 = value;
	}

	inline static int32_t get_offset_of_prediction_type_12() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___prediction_type_12)); }
	inline int32_t get_prediction_type_12() const { return ___prediction_type_12; }
	inline int32_t* get_address_of_prediction_type_12() { return &___prediction_type_12; }
	inline void set_prediction_type_12(int32_t value)
	{
		___prediction_type_12 = value;
	}

	inline static int32_t get_offset_of_min_partition_order_13() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___min_partition_order_13)); }
	inline int32_t get_min_partition_order_13() const { return ___min_partition_order_13; }
	inline int32_t* get_address_of_min_partition_order_13() { return &___min_partition_order_13; }
	inline void set_min_partition_order_13(int32_t value)
	{
		___min_partition_order_13 = value;
	}

	inline static int32_t get_offset_of_max_partition_order_14() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___max_partition_order_14)); }
	inline int32_t get_max_partition_order_14() const { return ___max_partition_order_14; }
	inline int32_t* get_address_of_max_partition_order_14() { return &___max_partition_order_14; }
	inline void set_max_partition_order_14(int32_t value)
	{
		___max_partition_order_14 = value;
	}

	inline static int32_t get_offset_of_variable_block_size_15() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___variable_block_size_15)); }
	inline int32_t get_variable_block_size_15() const { return ___variable_block_size_15; }
	inline int32_t* get_address_of_variable_block_size_15() { return &___variable_block_size_15; }
	inline void set_variable_block_size_15(int32_t value)
	{
		___variable_block_size_15 = value;
	}

	inline static int32_t get_offset_of_lpc_max_precision_search_16() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___lpc_max_precision_search_16)); }
	inline int32_t get_lpc_max_precision_search_16() const { return ___lpc_max_precision_search_16; }
	inline int32_t* get_address_of_lpc_max_precision_search_16() { return &___lpc_max_precision_search_16; }
	inline void set_lpc_max_precision_search_16(int32_t value)
	{
		___lpc_max_precision_search_16 = value;
	}

	inline static int32_t get_offset_of_lpc_min_precision_search_17() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___lpc_min_precision_search_17)); }
	inline int32_t get_lpc_min_precision_search_17() const { return ___lpc_min_precision_search_17; }
	inline int32_t* get_address_of_lpc_min_precision_search_17() { return &___lpc_min_precision_search_17; }
	inline void set_lpc_min_precision_search_17(int32_t value)
	{
		___lpc_min_precision_search_17 = value;
	}

	inline static int32_t get_offset_of_window_function_18() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___window_function_18)); }
	inline int32_t get_window_function_18() const { return ___window_function_18; }
	inline int32_t* get_address_of_window_function_18() { return &___window_function_18; }
	inline void set_window_function_18(int32_t value)
	{
		___window_function_18 = value;
	}

	inline static int32_t get_offset_of_do_seektable_19() { return static_cast<int32_t>(offsetof(FlakeEncodeParams_t609977151, ___do_seektable_19)); }
	inline bool get_do_seektable_19() const { return ___do_seektable_19; }
	inline bool* get_address_of_do_seektable_19() { return &___do_seektable_19; }
	inline void set_do_seektable_19(bool value)
	{
		___do_seektable_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CUETools.Codecs.FLAKE.FlakeEncodeParams
struct FlakeEncodeParams_t609977151_marshaled_pinvoke
{
	int32_t ___compression_0;
	int32_t ___order_method_1;
	int32_t ___stereo_method_2;
	int32_t ___window_method_3;
	int32_t ___block_size_4;
	int32_t ___block_time_ms_5;
	int32_t ___padding_size_6;
	int32_t ___min_prediction_order_7;
	int32_t ___max_prediction_order_8;
	int32_t ___estimation_depth_9;
	int32_t ___min_fixed_order_10;
	int32_t ___max_fixed_order_11;
	int32_t ___prediction_type_12;
	int32_t ___min_partition_order_13;
	int32_t ___max_partition_order_14;
	int32_t ___variable_block_size_15;
	int32_t ___lpc_max_precision_search_16;
	int32_t ___lpc_min_precision_search_17;
	int32_t ___window_function_18;
	int32_t ___do_seektable_19;
};
// Native definition for COM marshalling of CUETools.Codecs.FLAKE.FlakeEncodeParams
struct FlakeEncodeParams_t609977151_marshaled_com
{
	int32_t ___compression_0;
	int32_t ___order_method_1;
	int32_t ___stereo_method_2;
	int32_t ___window_method_3;
	int32_t ___block_size_4;
	int32_t ___block_time_ms_5;
	int32_t ___padding_size_6;
	int32_t ___min_prediction_order_7;
	int32_t ___max_prediction_order_8;
	int32_t ___estimation_depth_9;
	int32_t ___min_fixed_order_10;
	int32_t ___max_fixed_order_11;
	int32_t ___prediction_type_12;
	int32_t ___min_partition_order_13;
	int32_t ___max_partition_order_14;
	int32_t ___variable_block_size_15;
	int32_t ___lpc_max_precision_search_16;
	int32_t ___lpc_min_precision_search_17;
	int32_t ___window_function_18;
	int32_t ___do_seektable_19;
};
