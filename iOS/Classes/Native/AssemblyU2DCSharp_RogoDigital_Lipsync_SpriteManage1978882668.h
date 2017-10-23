#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t3973682211;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.SpriteManager/SpriteGroup>
struct List_1_t3988826666;
// RogoDigital.Lipsync.SpriteBlendSystem
struct SpriteBlendSystem_t2954399011;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.SpriteManager
struct  SpriteManager_t1978882668  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Sprite> RogoDigital.Lipsync.SpriteManager::availableSprites
	List_1_t3973682211 * ___availableSprites_2;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.SpriteManager/SpriteGroup> RogoDigital.Lipsync.SpriteManager::groups
	List_1_t3988826666 * ___groups_3;
	// RogoDigital.Lipsync.SpriteBlendSystem RogoDigital.Lipsync.SpriteManager::blendSystem
	SpriteBlendSystem_t2954399011 * ___blendSystem_4;

public:
	inline static int32_t get_offset_of_availableSprites_2() { return static_cast<int32_t>(offsetof(SpriteManager_t1978882668, ___availableSprites_2)); }
	inline List_1_t3973682211 * get_availableSprites_2() const { return ___availableSprites_2; }
	inline List_1_t3973682211 ** get_address_of_availableSprites_2() { return &___availableSprites_2; }
	inline void set_availableSprites_2(List_1_t3973682211 * value)
	{
		___availableSprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___availableSprites_2, value);
	}

	inline static int32_t get_offset_of_groups_3() { return static_cast<int32_t>(offsetof(SpriteManager_t1978882668, ___groups_3)); }
	inline List_1_t3988826666 * get_groups_3() const { return ___groups_3; }
	inline List_1_t3988826666 ** get_address_of_groups_3() { return &___groups_3; }
	inline void set_groups_3(List_1_t3988826666 * value)
	{
		___groups_3 = value;
		Il2CppCodeGenWriteBarrier(&___groups_3, value);
	}

	inline static int32_t get_offset_of_blendSystem_4() { return static_cast<int32_t>(offsetof(SpriteManager_t1978882668, ___blendSystem_4)); }
	inline SpriteBlendSystem_t2954399011 * get_blendSystem_4() const { return ___blendSystem_4; }
	inline SpriteBlendSystem_t2954399011 ** get_address_of_blendSystem_4() { return &___blendSystem_4; }
	inline void set_blendSystem_4(SpriteBlendSystem_t2954399011 * value)
	{
		___blendSystem_4 = value;
		Il2CppCodeGenWriteBarrier(&___blendSystem_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
