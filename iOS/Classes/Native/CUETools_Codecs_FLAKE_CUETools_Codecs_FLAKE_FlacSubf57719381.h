#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "CUETools_Codecs_FLAKE_CUETools_Codecs_FLAKE_Subfra1198717657.h"

// CUETools.Codecs.FLAKE.RiceContext
struct RiceContext_t1715022854;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Int32
struct Int32_t2071877448;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.FLAKE.FlacSubframe
struct  FlacSubframe_t57719381  : public Il2CppObject
{
public:
	// CUETools.Codecs.FLAKE.SubframeType CUETools.Codecs.FLAKE.FlacSubframe::type
	int32_t ___type_0;
	// System.Int32 CUETools.Codecs.FLAKE.FlacSubframe::order
	int32_t ___order_1;
	// System.Int32* CUETools.Codecs.FLAKE.FlacSubframe::residual
	int32_t* ___residual_2;
	// CUETools.Codecs.FLAKE.RiceContext CUETools.Codecs.FLAKE.FlacSubframe::rc
	RiceContext_t1715022854 * ___rc_3;
	// System.UInt32 CUETools.Codecs.FLAKE.FlacSubframe::size
	uint32_t ___size_4;
	// System.Int32 CUETools.Codecs.FLAKE.FlacSubframe::cbits
	int32_t ___cbits_5;
	// System.Int32 CUETools.Codecs.FLAKE.FlacSubframe::shift
	int32_t ___shift_6;
	// System.Int32[] CUETools.Codecs.FLAKE.FlacSubframe::coefs
	Int32U5BU5D_t3030399641* ___coefs_7;
	// System.Int32 CUETools.Codecs.FLAKE.FlacSubframe::window
	int32_t ___window_8;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(FlacSubframe_t57719381, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_order_1() { return static_cast<int32_t>(offsetof(FlacSubframe_t57719381, ___order_1)); }
	inline int32_t get_order_1() const { return ___order_1; }
	inline int32_t* get_address_of_order_1() { return &___order_1; }
	inline void set_order_1(int32_t value)
	{
		___order_1 = value;
	}

	inline static int32_t get_offset_of_residual_2() { return static_cast<int32_t>(offsetof(FlacSubframe_t57719381, ___residual_2)); }
	inline int32_t* get_residual_2() const { return ___residual_2; }
	inline int32_t** get_address_of_residual_2() { return &___residual_2; }
	inline void set_residual_2(int32_t* value)
	{
		___residual_2 = value;
	}

	inline static int32_t get_offset_of_rc_3() { return static_cast<int32_t>(offsetof(FlacSubframe_t57719381, ___rc_3)); }
	inline RiceContext_t1715022854 * get_rc_3() const { return ___rc_3; }
	inline RiceContext_t1715022854 ** get_address_of_rc_3() { return &___rc_3; }
	inline void set_rc_3(RiceContext_t1715022854 * value)
	{
		___rc_3 = value;
		Il2CppCodeGenWriteBarrier(&___rc_3, value);
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(FlacSubframe_t57719381, ___size_4)); }
	inline uint32_t get_size_4() const { return ___size_4; }
	inline uint32_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(uint32_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_cbits_5() { return static_cast<int32_t>(offsetof(FlacSubframe_t57719381, ___cbits_5)); }
	inline int32_t get_cbits_5() const { return ___cbits_5; }
	inline int32_t* get_address_of_cbits_5() { return &___cbits_5; }
	inline void set_cbits_5(int32_t value)
	{
		___cbits_5 = value;
	}

	inline static int32_t get_offset_of_shift_6() { return static_cast<int32_t>(offsetof(FlacSubframe_t57719381, ___shift_6)); }
	inline int32_t get_shift_6() const { return ___shift_6; }
	inline int32_t* get_address_of_shift_6() { return &___shift_6; }
	inline void set_shift_6(int32_t value)
	{
		___shift_6 = value;
	}

	inline static int32_t get_offset_of_coefs_7() { return static_cast<int32_t>(offsetof(FlacSubframe_t57719381, ___coefs_7)); }
	inline Int32U5BU5D_t3030399641* get_coefs_7() const { return ___coefs_7; }
	inline Int32U5BU5D_t3030399641** get_address_of_coefs_7() { return &___coefs_7; }
	inline void set_coefs_7(Int32U5BU5D_t3030399641* value)
	{
		___coefs_7 = value;
		Il2CppCodeGenWriteBarrier(&___coefs_7, value);
	}

	inline static int32_t get_offset_of_window_8() { return static_cast<int32_t>(offsetof(FlacSubframe_t57719381, ___window_8)); }
	inline int32_t get_window_8() const { return ___window_8; }
	inline int32_t* get_address_of_window_8() { return &___window_8; }
	inline void set_window_8(int32_t value)
	{
		___window_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
