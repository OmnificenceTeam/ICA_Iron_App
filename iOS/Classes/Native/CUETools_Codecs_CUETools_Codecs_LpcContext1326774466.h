#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Double[]
struct DoubleU5BU5D_t1889952540;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.LpcContext
struct  LpcContext_t1326774466  : public Il2CppObject
{
public:
	// System.Double[] CUETools.Codecs.LpcContext::autocorr_values
	DoubleU5BU5D_t1889952540* ___autocorr_values_0;
	// System.Double[] CUETools.Codecs.LpcContext::reflection_coeffs
	DoubleU5BU5D_t1889952540* ___reflection_coeffs_1;
	// System.Double[] CUETools.Codecs.LpcContext::prediction_error
	DoubleU5BU5D_t1889952540* ___prediction_error_2;
	// System.Int32[] CUETools.Codecs.LpcContext::best_orders
	Int32U5BU5D_t3030399641* ___best_orders_3;
	// System.Int32[] CUETools.Codecs.LpcContext::coefs
	Int32U5BU5D_t3030399641* ___coefs_4;
	// System.Int32 CUETools.Codecs.LpcContext::autocorr_order
	int32_t ___autocorr_order_5;
	// System.UInt32[] CUETools.Codecs.LpcContext::done_lpcs
	UInt32U5BU5D_t59386216* ___done_lpcs_6;

public:
	inline static int32_t get_offset_of_autocorr_values_0() { return static_cast<int32_t>(offsetof(LpcContext_t1326774466, ___autocorr_values_0)); }
	inline DoubleU5BU5D_t1889952540* get_autocorr_values_0() const { return ___autocorr_values_0; }
	inline DoubleU5BU5D_t1889952540** get_address_of_autocorr_values_0() { return &___autocorr_values_0; }
	inline void set_autocorr_values_0(DoubleU5BU5D_t1889952540* value)
	{
		___autocorr_values_0 = value;
		Il2CppCodeGenWriteBarrier(&___autocorr_values_0, value);
	}

	inline static int32_t get_offset_of_reflection_coeffs_1() { return static_cast<int32_t>(offsetof(LpcContext_t1326774466, ___reflection_coeffs_1)); }
	inline DoubleU5BU5D_t1889952540* get_reflection_coeffs_1() const { return ___reflection_coeffs_1; }
	inline DoubleU5BU5D_t1889952540** get_address_of_reflection_coeffs_1() { return &___reflection_coeffs_1; }
	inline void set_reflection_coeffs_1(DoubleU5BU5D_t1889952540* value)
	{
		___reflection_coeffs_1 = value;
		Il2CppCodeGenWriteBarrier(&___reflection_coeffs_1, value);
	}

	inline static int32_t get_offset_of_prediction_error_2() { return static_cast<int32_t>(offsetof(LpcContext_t1326774466, ___prediction_error_2)); }
	inline DoubleU5BU5D_t1889952540* get_prediction_error_2() const { return ___prediction_error_2; }
	inline DoubleU5BU5D_t1889952540** get_address_of_prediction_error_2() { return &___prediction_error_2; }
	inline void set_prediction_error_2(DoubleU5BU5D_t1889952540* value)
	{
		___prediction_error_2 = value;
		Il2CppCodeGenWriteBarrier(&___prediction_error_2, value);
	}

	inline static int32_t get_offset_of_best_orders_3() { return static_cast<int32_t>(offsetof(LpcContext_t1326774466, ___best_orders_3)); }
	inline Int32U5BU5D_t3030399641* get_best_orders_3() const { return ___best_orders_3; }
	inline Int32U5BU5D_t3030399641** get_address_of_best_orders_3() { return &___best_orders_3; }
	inline void set_best_orders_3(Int32U5BU5D_t3030399641* value)
	{
		___best_orders_3 = value;
		Il2CppCodeGenWriteBarrier(&___best_orders_3, value);
	}

	inline static int32_t get_offset_of_coefs_4() { return static_cast<int32_t>(offsetof(LpcContext_t1326774466, ___coefs_4)); }
	inline Int32U5BU5D_t3030399641* get_coefs_4() const { return ___coefs_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_coefs_4() { return &___coefs_4; }
	inline void set_coefs_4(Int32U5BU5D_t3030399641* value)
	{
		___coefs_4 = value;
		Il2CppCodeGenWriteBarrier(&___coefs_4, value);
	}

	inline static int32_t get_offset_of_autocorr_order_5() { return static_cast<int32_t>(offsetof(LpcContext_t1326774466, ___autocorr_order_5)); }
	inline int32_t get_autocorr_order_5() const { return ___autocorr_order_5; }
	inline int32_t* get_address_of_autocorr_order_5() { return &___autocorr_order_5; }
	inline void set_autocorr_order_5(int32_t value)
	{
		___autocorr_order_5 = value;
	}

	inline static int32_t get_offset_of_done_lpcs_6() { return static_cast<int32_t>(offsetof(LpcContext_t1326774466, ___done_lpcs_6)); }
	inline UInt32U5BU5D_t59386216* get_done_lpcs_6() const { return ___done_lpcs_6; }
	inline UInt32U5BU5D_t59386216** get_address_of_done_lpcs_6() { return &___done_lpcs_6; }
	inline void set_done_lpcs_6(UInt32U5BU5D_t59386216* value)
	{
		___done_lpcs_6 = value;
		Il2CppCodeGenWriteBarrier(&___done_lpcs_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
