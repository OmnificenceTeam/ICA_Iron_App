#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.PostProcessing.PostProcessingProfile
struct PostProcessingProfile_t798645344;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.PostProcessing.MaterialFactory
struct MaterialFactory_t857263061;
// UnityEngine.PostProcessing.RenderTextureFactory
struct RenderTextureFactory_t1633211227;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingContext
struct  PostProcessingContext_t754893438  : public Il2CppObject
{
public:
	// UnityEngine.PostProcessing.PostProcessingProfile UnityEngine.PostProcessing.PostProcessingContext::profile
	PostProcessingProfile_t798645344 * ___profile_0;
	// UnityEngine.Camera UnityEngine.PostProcessing.PostProcessingContext::camera
	Camera_t189460977 * ___camera_1;
	// UnityEngine.PostProcessing.MaterialFactory UnityEngine.PostProcessing.PostProcessingContext::materialFactory
	MaterialFactory_t857263061 * ___materialFactory_2;
	// UnityEngine.PostProcessing.RenderTextureFactory UnityEngine.PostProcessing.PostProcessingContext::renderTextureFactory
	RenderTextureFactory_t1633211227 * ___renderTextureFactory_3;
	// System.Boolean UnityEngine.PostProcessing.PostProcessingContext::<interrupted>k__BackingField
	bool ___U3CinterruptedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_profile_0() { return static_cast<int32_t>(offsetof(PostProcessingContext_t754893438, ___profile_0)); }
	inline PostProcessingProfile_t798645344 * get_profile_0() const { return ___profile_0; }
	inline PostProcessingProfile_t798645344 ** get_address_of_profile_0() { return &___profile_0; }
	inline void set_profile_0(PostProcessingProfile_t798645344 * value)
	{
		___profile_0 = value;
		Il2CppCodeGenWriteBarrier(&___profile_0, value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(PostProcessingContext_t754893438, ___camera_1)); }
	inline Camera_t189460977 * get_camera_1() const { return ___camera_1; }
	inline Camera_t189460977 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t189460977 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier(&___camera_1, value);
	}

	inline static int32_t get_offset_of_materialFactory_2() { return static_cast<int32_t>(offsetof(PostProcessingContext_t754893438, ___materialFactory_2)); }
	inline MaterialFactory_t857263061 * get_materialFactory_2() const { return ___materialFactory_2; }
	inline MaterialFactory_t857263061 ** get_address_of_materialFactory_2() { return &___materialFactory_2; }
	inline void set_materialFactory_2(MaterialFactory_t857263061 * value)
	{
		___materialFactory_2 = value;
		Il2CppCodeGenWriteBarrier(&___materialFactory_2, value);
	}

	inline static int32_t get_offset_of_renderTextureFactory_3() { return static_cast<int32_t>(offsetof(PostProcessingContext_t754893438, ___renderTextureFactory_3)); }
	inline RenderTextureFactory_t1633211227 * get_renderTextureFactory_3() const { return ___renderTextureFactory_3; }
	inline RenderTextureFactory_t1633211227 ** get_address_of_renderTextureFactory_3() { return &___renderTextureFactory_3; }
	inline void set_renderTextureFactory_3(RenderTextureFactory_t1633211227 * value)
	{
		___renderTextureFactory_3 = value;
		Il2CppCodeGenWriteBarrier(&___renderTextureFactory_3, value);
	}

	inline static int32_t get_offset_of_U3CinterruptedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PostProcessingContext_t754893438, ___U3CinterruptedU3Ek__BackingField_4)); }
	inline bool get_U3CinterruptedU3Ek__BackingField_4() const { return ___U3CinterruptedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CinterruptedU3Ek__BackingField_4() { return &___U3CinterruptedU3Ek__BackingField_4; }
	inline void set_U3CinterruptedU3Ek__BackingField_4(bool value)
	{
		___U3CinterruptedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
