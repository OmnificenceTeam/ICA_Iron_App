#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// CUETools.Codecs.FLAKE.FlacSubframe
struct FlacSubframe_t57719381;
// CUETools.Codecs.LpcContext[]
struct LpcContextU5BU5D_t298815991;
// System.Int32
struct Int32_t2071877448;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.FLAKE.FlacSubframeInfo
struct  FlacSubframeInfo_t2174508455  : public Il2CppObject
{
public:
	// CUETools.Codecs.FLAKE.FlacSubframe CUETools.Codecs.FLAKE.FlacSubframeInfo::best
	FlacSubframe_t57719381 * ___best_0;
	// System.Int32 CUETools.Codecs.FLAKE.FlacSubframeInfo::obits
	int32_t ___obits_1;
	// System.Int32 CUETools.Codecs.FLAKE.FlacSubframeInfo::wbits
	int32_t ___wbits_2;
	// System.Int32* CUETools.Codecs.FLAKE.FlacSubframeInfo::samples
	int32_t* ___samples_3;
	// System.UInt32 CUETools.Codecs.FLAKE.FlacSubframeInfo::done_fixed
	uint32_t ___done_fixed_4;
	// CUETools.Codecs.LpcContext[] CUETools.Codecs.FLAKE.FlacSubframeInfo::lpc_ctx
	LpcContextU5BU5D_t298815991* ___lpc_ctx_5;

public:
	inline static int32_t get_offset_of_best_0() { return static_cast<int32_t>(offsetof(FlacSubframeInfo_t2174508455, ___best_0)); }
	inline FlacSubframe_t57719381 * get_best_0() const { return ___best_0; }
	inline FlacSubframe_t57719381 ** get_address_of_best_0() { return &___best_0; }
	inline void set_best_0(FlacSubframe_t57719381 * value)
	{
		___best_0 = value;
		Il2CppCodeGenWriteBarrier(&___best_0, value);
	}

	inline static int32_t get_offset_of_obits_1() { return static_cast<int32_t>(offsetof(FlacSubframeInfo_t2174508455, ___obits_1)); }
	inline int32_t get_obits_1() const { return ___obits_1; }
	inline int32_t* get_address_of_obits_1() { return &___obits_1; }
	inline void set_obits_1(int32_t value)
	{
		___obits_1 = value;
	}

	inline static int32_t get_offset_of_wbits_2() { return static_cast<int32_t>(offsetof(FlacSubframeInfo_t2174508455, ___wbits_2)); }
	inline int32_t get_wbits_2() const { return ___wbits_2; }
	inline int32_t* get_address_of_wbits_2() { return &___wbits_2; }
	inline void set_wbits_2(int32_t value)
	{
		___wbits_2 = value;
	}

	inline static int32_t get_offset_of_samples_3() { return static_cast<int32_t>(offsetof(FlacSubframeInfo_t2174508455, ___samples_3)); }
	inline int32_t* get_samples_3() const { return ___samples_3; }
	inline int32_t** get_address_of_samples_3() { return &___samples_3; }
	inline void set_samples_3(int32_t* value)
	{
		___samples_3 = value;
	}

	inline static int32_t get_offset_of_done_fixed_4() { return static_cast<int32_t>(offsetof(FlacSubframeInfo_t2174508455, ___done_fixed_4)); }
	inline uint32_t get_done_fixed_4() const { return ___done_fixed_4; }
	inline uint32_t* get_address_of_done_fixed_4() { return &___done_fixed_4; }
	inline void set_done_fixed_4(uint32_t value)
	{
		___done_fixed_4 = value;
	}

	inline static int32_t get_offset_of_lpc_ctx_5() { return static_cast<int32_t>(offsetof(FlacSubframeInfo_t2174508455, ___lpc_ctx_5)); }
	inline LpcContextU5BU5D_t298815991* get_lpc_ctx_5() const { return ___lpc_ctx_5; }
	inline LpcContextU5BU5D_t298815991** get_address_of_lpc_ctx_5() { return &___lpc_ctx_5; }
	inline void set_lpc_ctx_5(LpcContextU5BU5D_t298815991* value)
	{
		___lpc_ctx_5 = value;
		Il2CppCodeGenWriteBarrier(&___lpc_ctx_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
