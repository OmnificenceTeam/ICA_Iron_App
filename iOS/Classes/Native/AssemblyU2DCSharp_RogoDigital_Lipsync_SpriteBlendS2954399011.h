#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RogoDigital_Lipsync_BlendSystem4120056306.h"

// UnityEngine.Sprite
struct Sprite_t309593783;
// RogoDigital.Lipsync.SpriteManager
struct SpriteManager_t1978882668;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.SpriteBlendSystem
struct  SpriteBlendSystem_t2954399011  : public BlendSystem_t4120056306
{
public:
	// UnityEngine.Sprite RogoDigital.Lipsync.SpriteBlendSystem::defaultSprite
	Sprite_t309593783 * ___defaultSprite_13;
	// RogoDigital.Lipsync.SpriteManager RogoDigital.Lipsync.SpriteBlendSystem::manager
	SpriteManager_t1978882668 * ___manager_14;

public:
	inline static int32_t get_offset_of_defaultSprite_13() { return static_cast<int32_t>(offsetof(SpriteBlendSystem_t2954399011, ___defaultSprite_13)); }
	inline Sprite_t309593783 * get_defaultSprite_13() const { return ___defaultSprite_13; }
	inline Sprite_t309593783 ** get_address_of_defaultSprite_13() { return &___defaultSprite_13; }
	inline void set_defaultSprite_13(Sprite_t309593783 * value)
	{
		___defaultSprite_13 = value;
		Il2CppCodeGenWriteBarrier(&___defaultSprite_13, value);
	}

	inline static int32_t get_offset_of_manager_14() { return static_cast<int32_t>(offsetof(SpriteBlendSystem_t2954399011, ___manager_14)); }
	inline SpriteManager_t1978882668 * get_manager_14() const { return ___manager_14; }
	inline SpriteManager_t1978882668 ** get_address_of_manager_14() { return &___manager_14; }
	inline void set_manager_14(SpriteManager_t1978882668 * value)
	{
		___manager_14 = value;
		Il2CppCodeGenWriteBarrier(&___manager_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
