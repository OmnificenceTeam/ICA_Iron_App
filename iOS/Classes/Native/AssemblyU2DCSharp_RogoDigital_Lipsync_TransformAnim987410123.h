#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.TransformAnimationCurve/TransformKeyframe
struct  TransformKeyframe_t987410123 
{
public:
	// System.Single RogoDigital.Lipsync.TransformAnimationCurve/TransformKeyframe::time
	float ___time_0;
	// UnityEngine.Quaternion RogoDigital.Lipsync.TransformAnimationCurve/TransformKeyframe::rotation
	Quaternion_t4030073918  ___rotation_1;
	// UnityEngine.Vector3 RogoDigital.Lipsync.TransformAnimationCurve/TransformKeyframe::position
	Vector3_t2243707580  ___position_2;
	// System.Single RogoDigital.Lipsync.TransformAnimationCurve/TransformKeyframe::inTangent
	float ___inTangent_3;
	// System.Single RogoDigital.Lipsync.TransformAnimationCurve/TransformKeyframe::outTangent
	float ___outTangent_4;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(TransformKeyframe_t987410123, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(TransformKeyframe_t987410123, ___rotation_1)); }
	inline Quaternion_t4030073918  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t4030073918 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t4030073918  value)
	{
		___rotation_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(TransformKeyframe_t987410123, ___position_2)); }
	inline Vector3_t2243707580  get_position_2() const { return ___position_2; }
	inline Vector3_t2243707580 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t2243707580  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_inTangent_3() { return static_cast<int32_t>(offsetof(TransformKeyframe_t987410123, ___inTangent_3)); }
	inline float get_inTangent_3() const { return ___inTangent_3; }
	inline float* get_address_of_inTangent_3() { return &___inTangent_3; }
	inline void set_inTangent_3(float value)
	{
		___inTangent_3 = value;
	}

	inline static int32_t get_offset_of_outTangent_4() { return static_cast<int32_t>(offsetof(TransformKeyframe_t987410123, ___outTangent_4)); }
	inline float get_outTangent_4() const { return ___outTangent_4; }
	inline float* get_address_of_outTangent_4() { return &___outTangent_4; }
	inline void set_outTangent_4(float value)
	{
		___outTangent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
