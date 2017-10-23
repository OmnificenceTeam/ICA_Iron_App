#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Int32[0...,0...]
struct Int32U5BU2CU5D_t3030399642;
// System.Single[0...,0...]
struct SingleU5BU2CU5D_t577127398;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// CUETools.Codecs.AudioPCMConfig
struct AudioPCMConfig_t1288270972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.AudioBuffer
struct  AudioBuffer_t1527014744  : public Il2CppObject
{
public:
	// System.Int32[0...,0...] CUETools.Codecs.AudioBuffer::samples
	Int32U5BU2CU5D_t3030399642* ___samples_0;
	// System.Single[0...,0...] CUETools.Codecs.AudioBuffer::fsamples
	SingleU5BU2CU5D_t577127398* ___fsamples_1;
	// System.Byte[] CUETools.Codecs.AudioBuffer::bytes
	ByteU5BU5D_t3397334013* ___bytes_2;
	// System.Int32 CUETools.Codecs.AudioBuffer::length
	int32_t ___length_3;
	// System.Int32 CUETools.Codecs.AudioBuffer::size
	int32_t ___size_4;
	// CUETools.Codecs.AudioPCMConfig CUETools.Codecs.AudioBuffer::pcm
	AudioPCMConfig_t1288270972 * ___pcm_5;
	// System.Boolean CUETools.Codecs.AudioBuffer::dataInSamples
	bool ___dataInSamples_6;
	// System.Boolean CUETools.Codecs.AudioBuffer::dataInBytes
	bool ___dataInBytes_7;
	// System.Boolean CUETools.Codecs.AudioBuffer::dataInFloat
	bool ___dataInFloat_8;

public:
	inline static int32_t get_offset_of_samples_0() { return static_cast<int32_t>(offsetof(AudioBuffer_t1527014744, ___samples_0)); }
	inline Int32U5BU2CU5D_t3030399642* get_samples_0() const { return ___samples_0; }
	inline Int32U5BU2CU5D_t3030399642** get_address_of_samples_0() { return &___samples_0; }
	inline void set_samples_0(Int32U5BU2CU5D_t3030399642* value)
	{
		___samples_0 = value;
		Il2CppCodeGenWriteBarrier(&___samples_0, value);
	}

	inline static int32_t get_offset_of_fsamples_1() { return static_cast<int32_t>(offsetof(AudioBuffer_t1527014744, ___fsamples_1)); }
	inline SingleU5BU2CU5D_t577127398* get_fsamples_1() const { return ___fsamples_1; }
	inline SingleU5BU2CU5D_t577127398** get_address_of_fsamples_1() { return &___fsamples_1; }
	inline void set_fsamples_1(SingleU5BU2CU5D_t577127398* value)
	{
		___fsamples_1 = value;
		Il2CppCodeGenWriteBarrier(&___fsamples_1, value);
	}

	inline static int32_t get_offset_of_bytes_2() { return static_cast<int32_t>(offsetof(AudioBuffer_t1527014744, ___bytes_2)); }
	inline ByteU5BU5D_t3397334013* get_bytes_2() const { return ___bytes_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_bytes_2() { return &___bytes_2; }
	inline void set_bytes_2(ByteU5BU5D_t3397334013* value)
	{
		___bytes_2 = value;
		Il2CppCodeGenWriteBarrier(&___bytes_2, value);
	}

	inline static int32_t get_offset_of_length_3() { return static_cast<int32_t>(offsetof(AudioBuffer_t1527014744, ___length_3)); }
	inline int32_t get_length_3() const { return ___length_3; }
	inline int32_t* get_address_of_length_3() { return &___length_3; }
	inline void set_length_3(int32_t value)
	{
		___length_3 = value;
	}

	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(AudioBuffer_t1527014744, ___size_4)); }
	inline int32_t get_size_4() const { return ___size_4; }
	inline int32_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(int32_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_pcm_5() { return static_cast<int32_t>(offsetof(AudioBuffer_t1527014744, ___pcm_5)); }
	inline AudioPCMConfig_t1288270972 * get_pcm_5() const { return ___pcm_5; }
	inline AudioPCMConfig_t1288270972 ** get_address_of_pcm_5() { return &___pcm_5; }
	inline void set_pcm_5(AudioPCMConfig_t1288270972 * value)
	{
		___pcm_5 = value;
		Il2CppCodeGenWriteBarrier(&___pcm_5, value);
	}

	inline static int32_t get_offset_of_dataInSamples_6() { return static_cast<int32_t>(offsetof(AudioBuffer_t1527014744, ___dataInSamples_6)); }
	inline bool get_dataInSamples_6() const { return ___dataInSamples_6; }
	inline bool* get_address_of_dataInSamples_6() { return &___dataInSamples_6; }
	inline void set_dataInSamples_6(bool value)
	{
		___dataInSamples_6 = value;
	}

	inline static int32_t get_offset_of_dataInBytes_7() { return static_cast<int32_t>(offsetof(AudioBuffer_t1527014744, ___dataInBytes_7)); }
	inline bool get_dataInBytes_7() const { return ___dataInBytes_7; }
	inline bool* get_address_of_dataInBytes_7() { return &___dataInBytes_7; }
	inline void set_dataInBytes_7(bool value)
	{
		___dataInBytes_7 = value;
	}

	inline static int32_t get_offset_of_dataInFloat_8() { return static_cast<int32_t>(offsetof(AudioBuffer_t1527014744, ___dataInFloat_8)); }
	inline bool get_dataInFloat_8() const { return ___dataInFloat_8; }
	inline bool* get_address_of_dataInFloat_8() { return &___dataInFloat_8; }
	inline void set_dataInFloat_8(bool value)
	{
		___dataInFloat_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
