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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.FLAKE.RiceContext
struct  RiceContext_t1715022854  : public Il2CppObject
{
public:
	// System.Int32 CUETools.Codecs.FLAKE.RiceContext::porder
	int32_t ___porder_0;
	// System.Int32 CUETools.Codecs.FLAKE.RiceContext::coding_method
	int32_t ___coding_method_1;
	// System.Int32[] CUETools.Codecs.FLAKE.RiceContext::rparams
	Int32U5BU5D_t3030399641* ___rparams_2;
	// System.Int32[] CUETools.Codecs.FLAKE.RiceContext::esc_bps
	Int32U5BU5D_t3030399641* ___esc_bps_3;

public:
	inline static int32_t get_offset_of_porder_0() { return static_cast<int32_t>(offsetof(RiceContext_t1715022854, ___porder_0)); }
	inline int32_t get_porder_0() const { return ___porder_0; }
	inline int32_t* get_address_of_porder_0() { return &___porder_0; }
	inline void set_porder_0(int32_t value)
	{
		___porder_0 = value;
	}

	inline static int32_t get_offset_of_coding_method_1() { return static_cast<int32_t>(offsetof(RiceContext_t1715022854, ___coding_method_1)); }
	inline int32_t get_coding_method_1() const { return ___coding_method_1; }
	inline int32_t* get_address_of_coding_method_1() { return &___coding_method_1; }
	inline void set_coding_method_1(int32_t value)
	{
		___coding_method_1 = value;
	}

	inline static int32_t get_offset_of_rparams_2() { return static_cast<int32_t>(offsetof(RiceContext_t1715022854, ___rparams_2)); }
	inline Int32U5BU5D_t3030399641* get_rparams_2() const { return ___rparams_2; }
	inline Int32U5BU5D_t3030399641** get_address_of_rparams_2() { return &___rparams_2; }
	inline void set_rparams_2(Int32U5BU5D_t3030399641* value)
	{
		___rparams_2 = value;
		Il2CppCodeGenWriteBarrier(&___rparams_2, value);
	}

	inline static int32_t get_offset_of_esc_bps_3() { return static_cast<int32_t>(offsetof(RiceContext_t1715022854, ___esc_bps_3)); }
	inline Int32U5BU5D_t3030399641* get_esc_bps_3() const { return ___esc_bps_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_esc_bps_3() { return &___esc_bps_3; }
	inline void set_esc_bps_3(Int32U5BU5D_t3030399641* value)
	{
		___esc_bps_3 = value;
		Il2CppCodeGenWriteBarrier(&___esc_bps_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
