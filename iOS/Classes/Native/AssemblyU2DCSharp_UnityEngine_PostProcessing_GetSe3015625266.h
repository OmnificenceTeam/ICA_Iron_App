#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_PropertyAttribute2606999759.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GetSetAttribute
struct  GetSetAttribute_t3015625266  : public PropertyAttribute_t2606999759
{
public:
	// System.String UnityEngine.PostProcessing.GetSetAttribute::name
	String_t* ___name_0;
	// System.Boolean UnityEngine.PostProcessing.GetSetAttribute::dirty
	bool ___dirty_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(GetSetAttribute_t3015625266, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_dirty_1() { return static_cast<int32_t>(offsetof(GetSetAttribute_t3015625266, ___dirty_1)); }
	inline bool get_dirty_1() const { return ___dirty_1; }
	inline bool* get_address_of_dirty_1() { return &___dirty_1; }
	inline void set_dirty_1(bool value)
	{
		___dirty_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
