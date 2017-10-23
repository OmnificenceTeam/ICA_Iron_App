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

// RogoDigital.Lipsync.LipSyncPreset/EmotionShapeInfo
struct  EmotionShapeInfo_t1639378581 
{
public:
	// System.String RogoDigital.Lipsync.LipSyncPreset/EmotionShapeInfo::emotion
	String_t* ___emotion_0;
	// RogoDigital.Lipsync.LipSyncPreset/BlendableInfo[] RogoDigital.Lipsync.LipSyncPreset/EmotionShapeInfo::blendables
	BlendableInfoU5BU5D_t2117853061* ___blendables_1;
	// RogoDigital.Lipsync.LipSyncPreset/BoneInfo[] RogoDigital.Lipsync.LipSyncPreset/EmotionShapeInfo::bones
	BoneInfoU5BU5D_t4062444302* ___bones_2;

public:
	inline static int32_t get_offset_of_emotion_0() { return static_cast<int32_t>(offsetof(EmotionShapeInfo_t1639378581, ___emotion_0)); }
	inline String_t* get_emotion_0() const { return ___emotion_0; }
	inline String_t** get_address_of_emotion_0() { return &___emotion_0; }
	inline void set_emotion_0(String_t* value)
	{
		___emotion_0 = value;
		Il2CppCodeGenWriteBarrier(&___emotion_0, value);
	}

	inline static int32_t get_offset_of_blendables_1() { return static_cast<int32_t>(offsetof(EmotionShapeInfo_t1639378581, ___blendables_1)); }
	inline BlendableInfoU5BU5D_t2117853061* get_blendables_1() const { return ___blendables_1; }
	inline BlendableInfoU5BU5D_t2117853061** get_address_of_blendables_1() { return &___blendables_1; }
	inline void set_blendables_1(BlendableInfoU5BU5D_t2117853061* value)
	{
		___blendables_1 = value;
		Il2CppCodeGenWriteBarrier(&___blendables_1, value);
	}

	inline static int32_t get_offset_of_bones_2() { return static_cast<int32_t>(offsetof(EmotionShapeInfo_t1639378581, ___bones_2)); }
	inline BoneInfoU5BU5D_t4062444302* get_bones_2() const { return ___bones_2; }
	inline BoneInfoU5BU5D_t4062444302** get_address_of_bones_2() { return &___bones_2; }
	inline void set_bones_2(BoneInfoU5BU5D_t4062444302* value)
	{
		___bones_2 = value;
		Il2CppCodeGenWriteBarrier(&___bones_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of RogoDigital.Lipsync.LipSyncPreset/EmotionShapeInfo
struct EmotionShapeInfo_t1639378581_marshaled_pinvoke
{
	char* ___emotion_0;
	BlendableInfo_t2911837132_marshaled_pinvoke* ___blendables_1;
	BoneInfo_t2654886455_marshaled_pinvoke* ___bones_2;
};
// Native definition for COM marshalling of RogoDigital.Lipsync.LipSyncPreset/EmotionShapeInfo
struct EmotionShapeInfo_t1639378581_marshaled_com
{
	Il2CppChar* ___emotion_0;
	BlendableInfo_t2911837132_marshaled_com* ___blendables_1;
	BoneInfo_t2654886455_marshaled_com* ___bones_2;
};
