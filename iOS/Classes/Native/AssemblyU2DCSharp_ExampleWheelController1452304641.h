#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleWheelController
struct  ExampleWheelController_t1452304641  : public MonoBehaviour_t1158329972
{
public:
	// System.Single ExampleWheelController::acceleration
	float ___acceleration_2;
	// UnityEngine.Renderer ExampleWheelController::motionVectorRenderer
	Renderer_t257310565 * ___motionVectorRenderer_3;
	// UnityEngine.Rigidbody ExampleWheelController::m_Rigidbody
	Rigidbody_t4233889191 * ___m_Rigidbody_4;

public:
	inline static int32_t get_offset_of_acceleration_2() { return static_cast<int32_t>(offsetof(ExampleWheelController_t1452304641, ___acceleration_2)); }
	inline float get_acceleration_2() const { return ___acceleration_2; }
	inline float* get_address_of_acceleration_2() { return &___acceleration_2; }
	inline void set_acceleration_2(float value)
	{
		___acceleration_2 = value;
	}

	inline static int32_t get_offset_of_motionVectorRenderer_3() { return static_cast<int32_t>(offsetof(ExampleWheelController_t1452304641, ___motionVectorRenderer_3)); }
	inline Renderer_t257310565 * get_motionVectorRenderer_3() const { return ___motionVectorRenderer_3; }
	inline Renderer_t257310565 ** get_address_of_motionVectorRenderer_3() { return &___motionVectorRenderer_3; }
	inline void set_motionVectorRenderer_3(Renderer_t257310565 * value)
	{
		___motionVectorRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___motionVectorRenderer_3, value);
	}

	inline static int32_t get_offset_of_m_Rigidbody_4() { return static_cast<int32_t>(offsetof(ExampleWheelController_t1452304641, ___m_Rigidbody_4)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_4() const { return ___m_Rigidbody_4; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_4() { return &___m_Rigidbody_4; }
	inline void set_m_Rigidbody_4(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Rigidbody_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
