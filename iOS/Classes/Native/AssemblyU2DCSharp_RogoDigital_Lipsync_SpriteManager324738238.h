#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.SpriteManager/SpriteGroup
struct  SpriteGroup_t324738238  : public Il2CppObject
{
public:
	// System.String RogoDigital.Lipsync.SpriteManager/SpriteGroup::groupName
	String_t* ___groupName_0;
	// UnityEngine.SpriteRenderer RogoDigital.Lipsync.SpriteManager/SpriteGroup::spriteRenderer
	SpriteRenderer_t1209076198 * ___spriteRenderer_1;

public:
	inline static int32_t get_offset_of_groupName_0() { return static_cast<int32_t>(offsetof(SpriteGroup_t324738238, ___groupName_0)); }
	inline String_t* get_groupName_0() const { return ___groupName_0; }
	inline String_t** get_address_of_groupName_0() { return &___groupName_0; }
	inline void set_groupName_0(String_t* value)
	{
		___groupName_0 = value;
		Il2CppCodeGenWriteBarrier(&___groupName_0, value);
	}

	inline static int32_t get_offset_of_spriteRenderer_1() { return static_cast<int32_t>(offsetof(SpriteGroup_t324738238, ___spriteRenderer_1)); }
	inline SpriteRenderer_t1209076198 * get_spriteRenderer_1() const { return ___spriteRenderer_1; }
	inline SpriteRenderer_t1209076198 ** get_address_of_spriteRenderer_1() { return &___spriteRenderer_1; }
	inline void set_spriteRenderer_1(SpriteRenderer_t1209076198 * value)
	{
		___spriteRenderer_1 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
