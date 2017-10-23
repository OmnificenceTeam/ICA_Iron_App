#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Mesh
struct Mesh_t1356156583;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.GraphicsUtils
struct  GraphicsUtils_t1185290264  : public Il2CppObject
{
public:

public:
};

struct GraphicsUtils_t1185290264_StaticFields
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.GraphicsUtils::s_WhiteTexture
	Texture2D_t3542995729 * ___s_WhiteTexture_0;
	// UnityEngine.Mesh UnityEngine.PostProcessing.GraphicsUtils::s_Quad
	Mesh_t1356156583 * ___s_Quad_1;

public:
	inline static int32_t get_offset_of_s_WhiteTexture_0() { return static_cast<int32_t>(offsetof(GraphicsUtils_t1185290264_StaticFields, ___s_WhiteTexture_0)); }
	inline Texture2D_t3542995729 * get_s_WhiteTexture_0() const { return ___s_WhiteTexture_0; }
	inline Texture2D_t3542995729 ** get_address_of_s_WhiteTexture_0() { return &___s_WhiteTexture_0; }
	inline void set_s_WhiteTexture_0(Texture2D_t3542995729 * value)
	{
		___s_WhiteTexture_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_WhiteTexture_0, value);
	}

	inline static int32_t get_offset_of_s_Quad_1() { return static_cast<int32_t>(offsetof(GraphicsUtils_t1185290264_StaticFields, ___s_Quad_1)); }
	inline Mesh_t1356156583 * get_s_Quad_1() const { return ___s_Quad_1; }
	inline Mesh_t1356156583 ** get_address_of_s_Quad_1() { return &___s_Quad_1; }
	inline void set_s_Quad_1(Mesh_t1356156583 * value)
	{
		___s_Quad_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_Quad_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
