#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_RogoDigital_Lipsync_Phoneme2901485674.h"

// System.String
struct String_t;
// RogoDigital.Lipsync.LipSyncPreset/BlendableInfo[]
struct BlendableInfoU5BU5D_t2117853061;
// RogoDigital.Lipsync.LipSyncPreset/BoneInfo[]
struct BoneInfoU5BU5D_t4062444302;
struct BlendableInfo_t2911837132_marshaled_pinvoke;
struct BoneInfo_t2654886455_marshaled_pinvoke;
struct BlendableInfo_t2911837132_marshaled_com;
struct BoneInfo_t2654886455_marshaled_com;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.LipSyncPreset/PhonemeShapeInfo
struct  PhonemeShapeInfo_t438845278 
{
public:
	// System.String RogoDigital.Lipsync.LipSyncPreset/PhonemeShapeInfo::phonemeName
	String_t* ___phonemeName_0;
	// RogoDigital.Lipsync.Phoneme RogoDigital.Lipsync.LipSyncPreset/PhonemeShapeInfo::phoneme
	int32_t ___phoneme_1;
	// RogoDigital.Lipsync.LipSyncPreset/BlendableInfo[] RogoDigital.Lipsync.LipSyncPreset/PhonemeShapeInfo::blendables
	BlendableInfoU5BU5D_t2117853061* ___blendables_2;
	// RogoDigital.Lipsync.LipSyncPreset/BoneInfo[] RogoDigital.Lipsync.LipSyncPreset/PhonemeShapeInfo::bones
	BoneInfoU5BU5D_t4062444302* ___bones_3;

public:
	inline static int32_t get_offset_of_phonemeName_0() { return static_cast<int32_t>(offsetof(PhonemeShapeInfo_t438845278, ___phonemeName_0)); }
	inline String_t* get_phonemeName_0() const { return ___phonemeName_0; }
	inline String_t** get_address_of_phonemeName_0() { return &___phonemeName_0; }
	inline void set_phonemeName_0(String_t* value)
	{
		___phonemeName_0 = value;
		Il2CppCodeGenWriteBarrier(&___phonemeName_0, value);
	}

	inline static int32_t get_offset_of_phoneme_1() { return static_cast<int32_t>(offsetof(PhonemeShapeInfo_t438845278, ___phoneme_1)); }
	inline int32_t get_phoneme_1() const { return ___phoneme_1; }
	inline int32_t* get_address_of_phoneme_1() { return &___phoneme_1; }
	inline void set_phoneme_1(int32_t value)
	{
		___phoneme_1 = value;
	}

	inline static int32_t get_offset_of_blendables_2() { return static_cast<int32_t>(offsetof(PhonemeShapeInfo_t438845278, ___blendables_2)); }
	inline BlendableInfoU5BU5D_t2117853061* get_blendables_2() const { return ___blendables_2; }
	inline BlendableInfoU5BU5D_t2117853061** get_address_of_blendables_2() { return &___blendables_2; }
	inline void set_blendables_2(BlendableInfoU5BU5D_t2117853061* value)
	{
		___blendables_2 = value;
		Il2CppCodeGenWriteBarrier(&___blendables_2, value);
	}

	inline static int32_t get_offset_of_bones_3() { return static_cast<int32_t>(offsetof(PhonemeShapeInfo_t438845278, ___bones_3)); }
	inline BoneInfoU5BU5D_t4062444302* get_bones_3() const { return ___bones_3; }
	inline BoneInfoU5BU5D_t4062444302** get_address_of_bones_3() { return &___bones_3; }
	inline void set_bones_3(BoneInfoU5BU5D_t4062444302* value)
	{
		___bones_3 = value;
		Il2CppCodeGenWriteBarrier(&___bones_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of RogoDigital.Lipsync.LipSyncPreset/PhonemeShapeInfo
struct PhonemeShapeInfo_t438845278_marshaled_pinvoke
{
	char* ___phonemeName_0;
	int32_t ___phoneme_1;
	BlendableInfo_t2911837132_marshaled_pinvoke* ___blendables_2;
	BoneInfo_t2654886455_marshaled_pinvoke* ___bones_3;
};
// Native definition for COM marshalling of RogoDigital.Lipsync.LipSyncPreset/PhonemeShapeInfo
struct PhonemeShapeInfo_t438845278_marshaled_com
{
	Il2CppChar* ___phonemeName_0;
	int32_t ___phoneme_1;
	BlendableInfo_t2911837132_marshaled_com* ___blendables_2;
	BoneInfo_t2654886455_marshaled_com* ___bones_3;
};
