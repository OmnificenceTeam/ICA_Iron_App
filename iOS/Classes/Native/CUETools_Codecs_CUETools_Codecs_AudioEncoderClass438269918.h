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
// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.AudioEncoderClass
struct  AudioEncoderClass_t438269918  : public Attribute_t542643598
{
public:
	// System.String CUETools.Codecs.AudioEncoderClass::_encoderName
	String_t* ____encoderName_0;
	// System.String CUETools.Codecs.AudioEncoderClass::_extension
	String_t* ____extension_1;
	// System.String CUETools.Codecs.AudioEncoderClass::_supportedModes
	String_t* ____supportedModes_2;
	// System.String CUETools.Codecs.AudioEncoderClass::_defaultMode
	String_t* ____defaultMode_3;
	// System.Boolean CUETools.Codecs.AudioEncoderClass::_lossless
	bool ____lossless_4;
	// System.Int32 CUETools.Codecs.AudioEncoderClass::_priority
	int32_t ____priority_5;
	// System.Type CUETools.Codecs.AudioEncoderClass::_settings
	Type_t * ____settings_6;

public:
	inline static int32_t get_offset_of__encoderName_0() { return static_cast<int32_t>(offsetof(AudioEncoderClass_t438269918, ____encoderName_0)); }
	inline String_t* get__encoderName_0() const { return ____encoderName_0; }
	inline String_t** get_address_of__encoderName_0() { return &____encoderName_0; }
	inline void set__encoderName_0(String_t* value)
	{
		____encoderName_0 = value;
		Il2CppCodeGenWriteBarrier(&____encoderName_0, value);
	}

	inline static int32_t get_offset_of__extension_1() { return static_cast<int32_t>(offsetof(AudioEncoderClass_t438269918, ____extension_1)); }
	inline String_t* get__extension_1() const { return ____extension_1; }
	inline String_t** get_address_of__extension_1() { return &____extension_1; }
	inline void set__extension_1(String_t* value)
	{
		____extension_1 = value;
		Il2CppCodeGenWriteBarrier(&____extension_1, value);
	}

	inline static int32_t get_offset_of__supportedModes_2() { return static_cast<int32_t>(offsetof(AudioEncoderClass_t438269918, ____supportedModes_2)); }
	inline String_t* get__supportedModes_2() const { return ____supportedModes_2; }
	inline String_t** get_address_of__supportedModes_2() { return &____supportedModes_2; }
	inline void set__supportedModes_2(String_t* value)
	{
		____supportedModes_2 = value;
		Il2CppCodeGenWriteBarrier(&____supportedModes_2, value);
	}

	inline static int32_t get_offset_of__defaultMode_3() { return static_cast<int32_t>(offsetof(AudioEncoderClass_t438269918, ____defaultMode_3)); }
	inline String_t* get__defaultMode_3() const { return ____defaultMode_3; }
	inline String_t** get_address_of__defaultMode_3() { return &____defaultMode_3; }
	inline void set__defaultMode_3(String_t* value)
	{
		____defaultMode_3 = value;
		Il2CppCodeGenWriteBarrier(&____defaultMode_3, value);
	}

	inline static int32_t get_offset_of__lossless_4() { return static_cast<int32_t>(offsetof(AudioEncoderClass_t438269918, ____lossless_4)); }
	inline bool get__lossless_4() const { return ____lossless_4; }
	inline bool* get_address_of__lossless_4() { return &____lossless_4; }
	inline void set__lossless_4(bool value)
	{
		____lossless_4 = value;
	}

	inline static int32_t get_offset_of__priority_5() { return static_cast<int32_t>(offsetof(AudioEncoderClass_t438269918, ____priority_5)); }
	inline int32_t get__priority_5() const { return ____priority_5; }
	inline int32_t* get_address_of__priority_5() { return &____priority_5; }
	inline void set__priority_5(int32_t value)
	{
		____priority_5 = value;
	}

	inline static int32_t get_offset_of__settings_6() { return static_cast<int32_t>(offsetof(AudioEncoderClass_t438269918, ____settings_6)); }
	inline Type_t * get__settings_6() const { return ____settings_6; }
	inline Type_t ** get_address_of__settings_6() { return &____settings_6; }
	inline void set__settings_6(Type_t * value)
	{
		____settings_6 = value;
		Il2CppCodeGenWriteBarrier(&____settings_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
