#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.BoneShape
struct  BoneShape_t226311345  : public Il2CppObject
{
public:
	// UnityEngine.Transform RogoDigital.Lipsync.BoneShape::bone
	Transform_t3275118058 * ___bone_0;
	// UnityEngine.Vector3 RogoDigital.Lipsync.BoneShape::endPosition
	Vector3_t2243707580  ___endPosition_1;
	// UnityEngine.Vector3 RogoDigital.Lipsync.BoneShape::endRotation
	Vector3_t2243707580  ___endRotation_2;
	// System.Boolean RogoDigital.Lipsync.BoneShape::lockPosition
	bool ___lockPosition_3;
	// System.Boolean RogoDigital.Lipsync.BoneShape::lockRotation
	bool ___lockRotation_4;
	// UnityEngine.Vector3 RogoDigital.Lipsync.BoneShape::neutralPosition
	Vector3_t2243707580  ___neutralPosition_5;
	// UnityEngine.Vector3 RogoDigital.Lipsync.BoneShape::neutralRotation
	Vector3_t2243707580  ___neutralRotation_6;

public:
	inline static int32_t get_offset_of_bone_0() { return static_cast<int32_t>(offsetof(BoneShape_t226311345, ___bone_0)); }
	inline Transform_t3275118058 * get_bone_0() const { return ___bone_0; }
	inline Transform_t3275118058 ** get_address_of_bone_0() { return &___bone_0; }
	inline void set_bone_0(Transform_t3275118058 * value)
	{
		___bone_0 = value;
		Il2CppCodeGenWriteBarrier(&___bone_0, value);
	}

	inline static int32_t get_offset_of_endPosition_1() { return static_cast<int32_t>(offsetof(BoneShape_t226311345, ___endPosition_1)); }
	inline Vector3_t2243707580  get_endPosition_1() const { return ___endPosition_1; }
	inline Vector3_t2243707580 * get_address_of_endPosition_1() { return &___endPosition_1; }
	inline void set_endPosition_1(Vector3_t2243707580  value)
	{
		___endPosition_1 = value;
	}

	inline static int32_t get_offset_of_endRotation_2() { return static_cast<int32_t>(offsetof(BoneShape_t226311345, ___endRotation_2)); }
	inline Vector3_t2243707580  get_endRotation_2() const { return ___endRotation_2; }
	inline Vector3_t2243707580 * get_address_of_endRotation_2() { return &___endRotation_2; }
	inline void set_endRotation_2(Vector3_t2243707580  value)
	{
		___endRotation_2 = value;
	}

	inline static int32_t get_offset_of_lockPosition_3() { return static_cast<int32_t>(offsetof(BoneShape_t226311345, ___lockPosition_3)); }
	inline bool get_lockPosition_3() const { return ___lockPosition_3; }
	inline bool* get_address_of_lockPosition_3() { return &___lockPosition_3; }
	inline void set_lockPosition_3(bool value)
	{
		___lockPosition_3 = value;
	}

	inline static int32_t get_offset_of_lockRotation_4() { return static_cast<int32_t>(offsetof(BoneShape_t226311345, ___lockRotation_4)); }
	inline bool get_lockRotation_4() const { return ___lockRotation_4; }
	inline bool* get_address_of_lockRotation_4() { return &___lockRotation_4; }
	inline void set_lockRotation_4(bool value)
	{
		___lockRotation_4 = value;
	}

	inline static int32_t get_offset_of_neutralPosition_5() { return static_cast<int32_t>(offsetof(BoneShape_t226311345, ___neutralPosition_5)); }
	inline Vector3_t2243707580  get_neutralPosition_5() const { return ___neutralPosition_5; }
	inline Vector3_t2243707580 * get_address_of_neutralPosition_5() { return &___neutralPosition_5; }
	inline void set_neutralPosition_5(Vector3_t2243707580  value)
	{
		___neutralPosition_5 = value;
	}

	inline static int32_t get_offset_of_neutralRotation_6() { return static_cast<int32_t>(offsetof(BoneShape_t226311345, ___neutralRotation_6)); }
	inline Vector3_t2243707580  get_neutralRotation_6() const { return ___neutralRotation_6; }
	inline Vector3_t2243707580 * get_address_of_neutralRotation_6() { return &___neutralRotation_6; }
	inline void set_neutralRotation_6(Vector3_t2243707580  value)
	{
		___neutralRotation_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
