#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.BoneShape>
struct List_1_t3890399773;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.Shape
struct  Shape_t126115539  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> RogoDigital.Lipsync.Shape::blendShapes
	List_1_t1440998580 * ___blendShapes_0;
	// System.Collections.Generic.List`1<System.String> RogoDigital.Lipsync.Shape::blendableNames
	List_1_t1398341365 * ___blendableNames_1;
	// System.Collections.Generic.List`1<System.Single> RogoDigital.Lipsync.Shape::weights
	List_1_t1445631064 * ___weights_2;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.BoneShape> RogoDigital.Lipsync.Shape::bones
	List_1_t3890399773 * ___bones_3;
	// System.Boolean RogoDigital.Lipsync.Shape::verified
	bool ___verified_4;

public:
	inline static int32_t get_offset_of_blendShapes_0() { return static_cast<int32_t>(offsetof(Shape_t126115539, ___blendShapes_0)); }
	inline List_1_t1440998580 * get_blendShapes_0() const { return ___blendShapes_0; }
	inline List_1_t1440998580 ** get_address_of_blendShapes_0() { return &___blendShapes_0; }
	inline void set_blendShapes_0(List_1_t1440998580 * value)
	{
		___blendShapes_0 = value;
		Il2CppCodeGenWriteBarrier(&___blendShapes_0, value);
	}

	inline static int32_t get_offset_of_blendableNames_1() { return static_cast<int32_t>(offsetof(Shape_t126115539, ___blendableNames_1)); }
	inline List_1_t1398341365 * get_blendableNames_1() const { return ___blendableNames_1; }
	inline List_1_t1398341365 ** get_address_of_blendableNames_1() { return &___blendableNames_1; }
	inline void set_blendableNames_1(List_1_t1398341365 * value)
	{
		___blendableNames_1 = value;
		Il2CppCodeGenWriteBarrier(&___blendableNames_1, value);
	}

	inline static int32_t get_offset_of_weights_2() { return static_cast<int32_t>(offsetof(Shape_t126115539, ___weights_2)); }
	inline List_1_t1445631064 * get_weights_2() const { return ___weights_2; }
	inline List_1_t1445631064 ** get_address_of_weights_2() { return &___weights_2; }
	inline void set_weights_2(List_1_t1445631064 * value)
	{
		___weights_2 = value;
		Il2CppCodeGenWriteBarrier(&___weights_2, value);
	}

	inline static int32_t get_offset_of_bones_3() { return static_cast<int32_t>(offsetof(Shape_t126115539, ___bones_3)); }
	inline List_1_t3890399773 * get_bones_3() const { return ___bones_3; }
	inline List_1_t3890399773 ** get_address_of_bones_3() { return &___bones_3; }
	inline void set_bones_3(List_1_t3890399773 * value)
	{
		___bones_3 = value;
		Il2CppCodeGenWriteBarrier(&___bones_3, value);
	}

	inline static int32_t get_offset_of_verified_4() { return static_cast<int32_t>(offsetof(Shape_t126115539, ___verified_4)); }
	inline bool get_verified_4() const { return ___verified_4; }
	inline bool* get_address_of_verified_4() { return &___verified_4; }
	inline void set_verified_4(bool value)
	{
		___verified_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
