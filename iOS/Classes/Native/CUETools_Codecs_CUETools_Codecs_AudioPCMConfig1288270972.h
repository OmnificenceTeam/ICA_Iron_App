#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// CUETools.Codecs.AudioPCMConfig
struct AudioPCMConfig_t1288270972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.AudioPCMConfig
struct  AudioPCMConfig_t1288270972  : public Il2CppObject
{
public:
	// System.Int32 CUETools.Codecs.AudioPCMConfig::_bitsPerSample
	int32_t ____bitsPerSample_1;
	// System.Int32 CUETools.Codecs.AudioPCMConfig::_channelCount
	int32_t ____channelCount_2;
	// System.Int32 CUETools.Codecs.AudioPCMConfig::_sampleRate
	int32_t ____sampleRate_3;

public:
	inline static int32_t get_offset_of__bitsPerSample_1() { return static_cast<int32_t>(offsetof(AudioPCMConfig_t1288270972, ____bitsPerSample_1)); }
	inline int32_t get__bitsPerSample_1() const { return ____bitsPerSample_1; }
	inline int32_t* get_address_of__bitsPerSample_1() { return &____bitsPerSample_1; }
	inline void set__bitsPerSample_1(int32_t value)
	{
		____bitsPerSample_1 = value;
	}

	inline static int32_t get_offset_of__channelCount_2() { return static_cast<int32_t>(offsetof(AudioPCMConfig_t1288270972, ____channelCount_2)); }
	inline int32_t get__channelCount_2() const { return ____channelCount_2; }
	inline int32_t* get_address_of__channelCount_2() { return &____channelCount_2; }
	inline void set__channelCount_2(int32_t value)
	{
		____channelCount_2 = value;
	}

	inline static int32_t get_offset_of__sampleRate_3() { return static_cast<int32_t>(offsetof(AudioPCMConfig_t1288270972, ____sampleRate_3)); }
	inline int32_t get__sampleRate_3() const { return ____sampleRate_3; }
	inline int32_t* get_address_of__sampleRate_3() { return &____sampleRate_3; }
	inline void set__sampleRate_3(int32_t value)
	{
		____sampleRate_3 = value;
	}
};

struct AudioPCMConfig_t1288270972_StaticFields
{
public:
	// CUETools.Codecs.AudioPCMConfig CUETools.Codecs.AudioPCMConfig::RedBook
	AudioPCMConfig_t1288270972 * ___RedBook_0;

public:
	inline static int32_t get_offset_of_RedBook_0() { return static_cast<int32_t>(offsetof(AudioPCMConfig_t1288270972_StaticFields, ___RedBook_0)); }
	inline AudioPCMConfig_t1288270972 * get_RedBook_0() const { return ___RedBook_0; }
	inline AudioPCMConfig_t1288270972 ** get_address_of_RedBook_0() { return &___RedBook_0; }
	inline void set_RedBook_0(AudioPCMConfig_t1288270972 * value)
	{
		___RedBook_0 = value;
		Il2CppCodeGenWriteBarrier(&___RedBook_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
