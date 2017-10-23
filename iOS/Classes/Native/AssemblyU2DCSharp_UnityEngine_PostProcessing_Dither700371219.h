#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP4174662870.h"

// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DitheringComponent
struct  DitheringComponent_t700371219  : public PostProcessingComponentRenderTexture_1_t4174662870
{
public:
	// UnityEngine.Texture2D[] UnityEngine.PostProcessing.DitheringComponent::noiseTextures
	Texture2DU5BU5D_t2724090252* ___noiseTextures_2;
	// System.Int32 UnityEngine.PostProcessing.DitheringComponent::textureIndex
	int32_t ___textureIndex_3;

public:
	inline static int32_t get_offset_of_noiseTextures_2() { return static_cast<int32_t>(offsetof(DitheringComponent_t700371219, ___noiseTextures_2)); }
	inline Texture2DU5BU5D_t2724090252* get_noiseTextures_2() const { return ___noiseTextures_2; }
	inline Texture2DU5BU5D_t2724090252** get_address_of_noiseTextures_2() { return &___noiseTextures_2; }
	inline void set_noiseTextures_2(Texture2DU5BU5D_t2724090252* value)
	{
		___noiseTextures_2 = value;
		Il2CppCodeGenWriteBarrier(&___noiseTextures_2, value);
	}

	inline static int32_t get_offset_of_textureIndex_3() { return static_cast<int32_t>(offsetof(DitheringComponent_t700371219, ___textureIndex_3)); }
	inline int32_t get_textureIndex_3() const { return ___textureIndex_3; }
	inline int32_t* get_address_of_textureIndex_3() { return &___textureIndex_3; }
	inline void set_textureIndex_3(int32_t value)
	{
		___textureIndex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
