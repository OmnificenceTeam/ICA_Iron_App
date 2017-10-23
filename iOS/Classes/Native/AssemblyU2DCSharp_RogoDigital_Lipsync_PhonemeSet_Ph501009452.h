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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.PhonemeSet/Phoneme
struct  Phoneme_t501009452 
{
public:
	union
	{
		struct
		{
			// System.String RogoDigital.Lipsync.PhonemeSet/Phoneme::<name>k__BackingField
			String_t* ___U3CnameU3Ek__BackingField_0;
			// System.Int32 RogoDigital.Lipsync.PhonemeSet/Phoneme::<number>k__BackingField
			int32_t ___U3CnumberU3Ek__BackingField_1;
			// System.Int32 RogoDigital.Lipsync.PhonemeSet/Phoneme::<flag>k__BackingField
			int32_t ___U3CflagU3Ek__BackingField_2;
		};
		uint8_t Phoneme_t501009452__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Phoneme_t501009452, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CnumberU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Phoneme_t501009452, ___U3CnumberU3Ek__BackingField_1)); }
	inline int32_t get_U3CnumberU3Ek__BackingField_1() const { return ___U3CnumberU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CnumberU3Ek__BackingField_1() { return &___U3CnumberU3Ek__BackingField_1; }
	inline void set_U3CnumberU3Ek__BackingField_1(int32_t value)
	{
		___U3CnumberU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CflagU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Phoneme_t501009452, ___U3CflagU3Ek__BackingField_2)); }
	inline int32_t get_U3CflagU3Ek__BackingField_2() const { return ___U3CflagU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CflagU3Ek__BackingField_2() { return &___U3CflagU3Ek__BackingField_2; }
	inline void set_U3CflagU3Ek__BackingField_2(int32_t value)
	{
		___U3CflagU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of RogoDigital.Lipsync.PhonemeSet/Phoneme
struct Phoneme_t501009452_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CnameU3Ek__BackingField_0;
			int32_t ___U3CnumberU3Ek__BackingField_1;
			int32_t ___U3CflagU3Ek__BackingField_2;
		};
		uint8_t Phoneme_t501009452__padding[1];
	};
};
// Native definition for COM marshalling of RogoDigital.Lipsync.PhonemeSet/Phoneme
struct Phoneme_t501009452_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CnameU3Ek__BackingField_0;
			int32_t ___U3CnumberU3Ek__BackingField_1;
			int32_t ___U3CflagU3Ek__BackingField_2;
		};
		uint8_t Phoneme_t501009452__padding[1];
	};
};
