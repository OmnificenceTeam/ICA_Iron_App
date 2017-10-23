#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RogoDigital_Lipsync_BlendSystem4120056306.h"

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t4220419316;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_t339692733;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.BlendshapeBlendSystem
struct  BlendshapeBlendSystem_t4041972624  : public BlendSystem_t4120056306
{
public:
	// UnityEngine.SkinnedMeshRenderer RogoDigital.Lipsync.BlendshapeBlendSystem::characterMesh
	SkinnedMeshRenderer_t4220419316 * ___characterMesh_13;
	// UnityEngine.SkinnedMeshRenderer[] RogoDigital.Lipsync.BlendshapeBlendSystem::optionalOtherMeshes
	SkinnedMeshRendererU5BU5D_t339692733* ___optionalOtherMeshes_14;
	// System.Boolean RogoDigital.Lipsync.BlendshapeBlendSystem::wireframeVisible
	bool ___wireframeVisible_15;

public:
	inline static int32_t get_offset_of_characterMesh_13() { return static_cast<int32_t>(offsetof(BlendshapeBlendSystem_t4041972624, ___characterMesh_13)); }
	inline SkinnedMeshRenderer_t4220419316 * get_characterMesh_13() const { return ___characterMesh_13; }
	inline SkinnedMeshRenderer_t4220419316 ** get_address_of_characterMesh_13() { return &___characterMesh_13; }
	inline void set_characterMesh_13(SkinnedMeshRenderer_t4220419316 * value)
	{
		___characterMesh_13 = value;
		Il2CppCodeGenWriteBarrier(&___characterMesh_13, value);
	}

	inline static int32_t get_offset_of_optionalOtherMeshes_14() { return static_cast<int32_t>(offsetof(BlendshapeBlendSystem_t4041972624, ___optionalOtherMeshes_14)); }
	inline SkinnedMeshRendererU5BU5D_t339692733* get_optionalOtherMeshes_14() const { return ___optionalOtherMeshes_14; }
	inline SkinnedMeshRendererU5BU5D_t339692733** get_address_of_optionalOtherMeshes_14() { return &___optionalOtherMeshes_14; }
	inline void set_optionalOtherMeshes_14(SkinnedMeshRendererU5BU5D_t339692733* value)
	{
		___optionalOtherMeshes_14 = value;
		Il2CppCodeGenWriteBarrier(&___optionalOtherMeshes_14, value);
	}

	inline static int32_t get_offset_of_wireframeVisible_15() { return static_cast<int32_t>(offsetof(BlendshapeBlendSystem_t4041972624, ___wireframeVisible_15)); }
	inline bool get_wireframeVisible_15() const { return ___wireframeVisible_15; }
	inline bool* get_address_of_wireframeVisible_15() { return &___wireframeVisible_15; }
	inline void set_wireframeVisible_15(bool value)
	{
		___wireframeVisible_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
