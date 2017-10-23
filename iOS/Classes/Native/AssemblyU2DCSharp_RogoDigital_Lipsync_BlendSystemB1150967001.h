#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.BlendSystemButton/Reference
struct  Reference_t1150967001 
{
public:
	// System.String RogoDigital.Lipsync.BlendSystemButton/Reference::displayName
	String_t* ___displayName_0;
	// System.Reflection.MethodInfo RogoDigital.Lipsync.BlendSystemButton/Reference::method
	MethodInfo_t * ___method_1;

public:
	inline static int32_t get_offset_of_displayName_0() { return static_cast<int32_t>(offsetof(Reference_t1150967001, ___displayName_0)); }
	inline String_t* get_displayName_0() const { return ___displayName_0; }
	inline String_t** get_address_of_displayName_0() { return &___displayName_0; }
	inline void set_displayName_0(String_t* value)
	{
		___displayName_0 = value;
		Il2CppCodeGenWriteBarrier(&___displayName_0, value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(Reference_t1150967001, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier(&___method_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of RogoDigital.Lipsync.BlendSystemButton/Reference
struct Reference_t1150967001_marshaled_pinvoke
{
	char* ___displayName_0;
	MethodInfo_t * ___method_1;
};
// Native definition for COM marshalling of RogoDigital.Lipsync.BlendSystemButton/Reference
struct Reference_t1150967001_marshaled_com
{
	Il2CppChar* ___displayName_0;
	MethodInfo_t * ___method_1;
};
