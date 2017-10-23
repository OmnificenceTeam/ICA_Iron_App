#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// RogoDigital.Lipsync.BlendSystem
struct BlendSystem_t4120056306;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.BlendSystemUser
struct  BlendSystemUser_t526961539  : public MonoBehaviour_t1158329972
{
public:
	// RogoDigital.Lipsync.BlendSystem RogoDigital.Lipsync.BlendSystemUser::blendSystem
	BlendSystem_t4120056306 * ___blendSystem_2;

public:
	inline static int32_t get_offset_of_blendSystem_2() { return static_cast<int32_t>(offsetof(BlendSystemUser_t526961539, ___blendSystem_2)); }
	inline BlendSystem_t4120056306 * get_blendSystem_2() const { return ___blendSystem_2; }
	inline BlendSystem_t4120056306 ** get_address_of_blendSystem_2() { return &___blendSystem_2; }
	inline void set_blendSystem_2(BlendSystem_t4120056306 * value)
	{
		___blendSystem_2 = value;
		Il2CppCodeGenWriteBarrier(&___blendSystem_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
