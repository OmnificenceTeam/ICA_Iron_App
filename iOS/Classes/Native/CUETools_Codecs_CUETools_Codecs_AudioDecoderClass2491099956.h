#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.AudioDecoderClass
struct  AudioDecoderClass_t2491099956  : public Attribute_t542643598
{
public:
	// System.String CUETools.Codecs.AudioDecoderClass::_decoderName
	String_t* ____decoderName_0;
	// System.String CUETools.Codecs.AudioDecoderClass::_extension
	String_t* ____extension_1;

public:
	inline static int32_t get_offset_of__decoderName_0() { return static_cast<int32_t>(offsetof(AudioDecoderClass_t2491099956, ____decoderName_0)); }
	inline String_t* get__decoderName_0() const { return ____decoderName_0; }
	inline String_t** get_address_of__decoderName_0() { return &____decoderName_0; }
	inline void set__decoderName_0(String_t* value)
	{
		____decoderName_0 = value;
		Il2CppCodeGenWriteBarrier(&____decoderName_0, value);
	}

	inline static int32_t get_offset_of__extension_1() { return static_cast<int32_t>(offsetof(AudioDecoderClass_t2491099956, ____extension_1)); }
	inline String_t* get__extension_1() const { return ____extension_1; }
	inline String_t** get_address_of__extension_1() { return &____extension_1; }
	inline void set__extension_1(String_t* value)
	{
		____extension_1 = value;
		Il2CppCodeGenWriteBarrier(&____extension_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
