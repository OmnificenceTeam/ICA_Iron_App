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

// RogoDigital.Lipsync.LipSyncPreset/BlendableInfo
struct  BlendableInfo_t2911837132 
{
public:
	// System.Int32 RogoDigital.Lipsync.LipSyncPreset/BlendableInfo::blendableNumber
	int32_t ___blendableNumber_0;
	// System.String RogoDigital.Lipsync.LipSyncPreset/BlendableInfo::blendableName
	String_t* ___blendableName_1;
	// System.Single RogoDigital.Lipsync.LipSyncPreset/BlendableInfo::weight
	float ___weight_2;

public:
	inline static int32_t get_offset_of_blendableNumber_0() { return static_cast<int32_t>(offsetof(BlendableInfo_t2911837132, ___blendableNumber_0)); }
	inline int32_t get_blendableNumber_0() const { return ___blendableNumber_0; }
	inline int32_t* get_address_of_blendableNumber_0() { return &___blendableNumber_0; }
	inline void set_blendableNumber_0(int32_t value)
	{
		___blendableNumber_0 = value;
	}

	inline static int32_t get_offset_of_blendableName_1() { return static_cast<int32_t>(offsetof(BlendableInfo_t2911837132, ___blendableName_1)); }
	inline String_t* get_blendableName_1() const { return ___blendableName_1; }
	inline String_t** get_address_of_blendableName_1() { return &___blendableName_1; }
	inline void set_blendableName_1(String_t* value)
	{
		___blendableName_1 = value;
		Il2CppCodeGenWriteBarrier(&___blendableName_1, value);
	}

	inline static int32_t get_offset_of_weight_2() { return static_cast<int32_t>(offsetof(BlendableInfo_t2911837132, ___weight_2)); }
	inline float get_weight_2() const { return ___weight_2; }
	inline float* get_address_of_weight_2() { return &___weight_2; }
	inline void set_weight_2(float value)
	{
		___weight_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of RogoDigital.Lipsync.LipSyncPreset/BlendableInfo
struct BlendableInfo_t2911837132_marshaled_pinvoke
{
	int32_t ___blendableNumber_0;
	char* ___blendableName_1;
	float ___weight_2;
};
// Native definition for COM marshalling of RogoDigital.Lipsync.LipSyncPreset/BlendableInfo
struct BlendableInfo_t2911837132_marshaled_com
{
	int32_t ___blendableNumber_0;
	Il2CppChar* ___blendableName_1;
	float ___weight_2;
};
