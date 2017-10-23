#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RogoDigital_Lipsync_Shape126115539.h"
#include "AssemblyU2DCSharp_RogoDigital_Lipsync_Phoneme2901485674.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.PhonemeShape
struct  PhonemeShape_t3048717687  : public Shape_t126115539
{
public:
	// System.String RogoDigital.Lipsync.PhonemeShape::phonemeName
	String_t* ___phonemeName_5;
	// RogoDigital.Lipsync.Phoneme RogoDigital.Lipsync.PhonemeShape::phoneme
	int32_t ___phoneme_6;

public:
	inline static int32_t get_offset_of_phonemeName_5() { return static_cast<int32_t>(offsetof(PhonemeShape_t3048717687, ___phonemeName_5)); }
	inline String_t* get_phonemeName_5() const { return ___phonemeName_5; }
	inline String_t** get_address_of_phonemeName_5() { return &___phonemeName_5; }
	inline void set_phonemeName_5(String_t* value)
	{
		___phonemeName_5 = value;
		Il2CppCodeGenWriteBarrier(&___phonemeName_5, value);
	}

	inline static int32_t get_offset_of_phoneme_6() { return static_cast<int32_t>(offsetof(PhonemeShape_t3048717687, ___phoneme_6)); }
	inline int32_t get_phoneme_6() const { return ___phoneme_6; }
	inline int32_t* get_address_of_phoneme_6() { return &___phoneme_6; }
	inline void set_phoneme_6(int32_t value)
	{
		___phoneme_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
