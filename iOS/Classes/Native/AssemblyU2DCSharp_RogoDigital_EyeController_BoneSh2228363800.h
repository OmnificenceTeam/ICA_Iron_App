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
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.EyeController/BoneShapeInfo
struct  BoneShapeInfo_t2228363800  : public Il2CppObject
{
public:
	// UnityEngine.Transform RogoDigital.EyeController/BoneShapeInfo::bone
	Transform_t3275118058 * ___bone_0;
	// UnityEngine.Vector3 RogoDigital.EyeController/BoneShapeInfo::m_storedPosition
	Vector3_t2243707580  ___m_storedPosition_1;
	// UnityEngine.Quaternion RogoDigital.EyeController/BoneShapeInfo::m_storedRotation
	Quaternion_t4030073918  ___m_storedRotation_2;
	// UnityEngine.Vector3 RogoDigital.EyeController/BoneShapeInfo::targetPosition
	Vector3_t2243707580  ___targetPosition_3;
	// UnityEngine.Quaternion RogoDigital.EyeController/BoneShapeInfo::targetRotation
	Quaternion_t4030073918  ___targetRotation_4;

public:
	inline static int32_t get_offset_of_bone_0() { return static_cast<int32_t>(offsetof(BoneShapeInfo_t2228363800, ___bone_0)); }
	inline Transform_t3275118058 * get_bone_0() const { return ___bone_0; }
	inline Transform_t3275118058 ** get_address_of_bone_0() { return &___bone_0; }
	inline void set_bone_0(Transform_t3275118058 * value)
	{
		___bone_0 = value;
		Il2CppCodeGenWriteBarrier(&___bone_0, value);
	}

	inline static int32_t get_offset_of_m_storedPosition_1() { return static_cast<int32_t>(offsetof(BoneShapeInfo_t2228363800, ___m_storedPosition_1)); }
	inline Vector3_t2243707580  get_m_storedPosition_1() const { return ___m_storedPosition_1; }
	inline Vector3_t2243707580 * get_address_of_m_storedPosition_1() { return &___m_storedPosition_1; }
	inline void set_m_storedPosition_1(Vector3_t2243707580  value)
	{
		___m_storedPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_storedRotation_2() { return static_cast<int32_t>(offsetof(BoneShapeInfo_t2228363800, ___m_storedRotation_2)); }
	inline Quaternion_t4030073918  get_m_storedRotation_2() const { return ___m_storedRotation_2; }
	inline Quaternion_t4030073918 * get_address_of_m_storedRotation_2() { return &___m_storedRotation_2; }
	inline void set_m_storedRotation_2(Quaternion_t4030073918  value)
	{
		___m_storedRotation_2 = value;
	}

	inline static int32_t get_offset_of_targetPosition_3() { return static_cast<int32_t>(offsetof(BoneShapeInfo_t2228363800, ___targetPosition_3)); }
	inline Vector3_t2243707580  get_targetPosition_3() const { return ___targetPosition_3; }
	inline Vector3_t2243707580 * get_address_of_targetPosition_3() { return &___targetPosition_3; }
	inline void set_targetPosition_3(Vector3_t2243707580  value)
	{
		___targetPosition_3 = value;
	}

	inline static int32_t get_offset_of_targetRotation_4() { return static_cast<int32_t>(offsetof(BoneShapeInfo_t2228363800, ___targetRotation_4)); }
	inline Quaternion_t4030073918  get_targetRotation_4() const { return ___targetRotation_4; }
	inline Quaternion_t4030073918 * get_address_of_targetRotation_4() { return &___targetRotation_4; }
	inline void set_targetRotation_4(Quaternion_t4030073918  value)
	{
		___targetRotation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
