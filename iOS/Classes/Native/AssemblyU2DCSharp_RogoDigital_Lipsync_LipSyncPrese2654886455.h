#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.LipSyncPreset/BoneInfo
struct  BoneInfo_t2654886455 
{
public:
	// System.String RogoDigital.Lipsync.LipSyncPreset/BoneInfo::path
	String_t* ___path_0;
	// System.String RogoDigital.Lipsync.LipSyncPreset/BoneInfo::name
	String_t* ___name_1;
	// UnityEngine.Vector3 RogoDigital.Lipsync.LipSyncPreset/BoneInfo::localPosition
	Vector3_t2243707580  ___localPosition_2;
	// UnityEngine.Vector3 RogoDigital.Lipsync.LipSyncPreset/BoneInfo::localRotation
	Vector3_t2243707580  ___localRotation_3;
	// System.Boolean RogoDigital.Lipsync.LipSyncPreset/BoneInfo::lockPosition
	bool ___lockPosition_4;
	// System.Boolean RogoDigital.Lipsync.LipSyncPreset/BoneInfo::lockRotation
	bool ___lockRotation_5;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(BoneInfo_t2654886455, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier(&___path_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(BoneInfo_t2654886455, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_localPosition_2() { return static_cast<int32_t>(offsetof(BoneInfo_t2654886455, ___localPosition_2)); }
	inline Vector3_t2243707580  get_localPosition_2() const { return ___localPosition_2; }
	inline Vector3_t2243707580 * get_address_of_localPosition_2() { return &___localPosition_2; }
	inline void set_localPosition_2(Vector3_t2243707580  value)
	{
		___localPosition_2 = value;
	}

	inline static int32_t get_offset_of_localRotation_3() { return static_cast<int32_t>(offsetof(BoneInfo_t2654886455, ___localRotation_3)); }
	inline Vector3_t2243707580  get_localRotation_3() const { return ___localRotation_3; }
	inline Vector3_t2243707580 * get_address_of_localRotation_3() { return &___localRotation_3; }
	inline void set_localRotation_3(Vector3_t2243707580  value)
	{
		___localRotation_3 = value;
	}

	inline static int32_t get_offset_of_lockPosition_4() { return static_cast<int32_t>(offsetof(BoneInfo_t2654886455, ___lockPosition_4)); }
	inline bool get_lockPosition_4() const { return ___lockPosition_4; }
	inline bool* get_address_of_lockPosition_4() { return &___lockPosition_4; }
	inline void set_lockPosition_4(bool value)
	{
		___lockPosition_4 = value;
	}

	inline static int32_t get_offset_of_lockRotation_5() { return static_cast<int32_t>(offsetof(BoneInfo_t2654886455, ___lockRotation_5)); }
	inline bool get_lockRotation_5() const { return ___lockRotation_5; }
	inline bool* get_address_of_lockRotation_5() { return &___lockRotation_5; }
	inline void set_lockRotation_5(bool value)
	{
		___lockRotation_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of RogoDigital.Lipsync.LipSyncPreset/BoneInfo
struct BoneInfo_t2654886455_marshaled_pinvoke
{
	char* ___path_0;
	char* ___name_1;
	Vector3_t2243707580  ___localPosition_2;
	Vector3_t2243707580  ___localRotation_3;
	int32_t ___lockPosition_4;
	int32_t ___lockRotation_5;
};
// Native definition for COM marshalling of RogoDigital.Lipsync.LipSyncPreset/BoneInfo
struct BoneInfo_t2654886455_marshaled_com
{
	Il2CppChar* ___path_0;
	Il2CppChar* ___name_1;
	Vector3_t2243707580  ___localPosition_2;
	Vector3_t2243707580  ___localRotation_3;
	int32_t ___lockPosition_4;
	int32_t ___lockRotation_5;
};
