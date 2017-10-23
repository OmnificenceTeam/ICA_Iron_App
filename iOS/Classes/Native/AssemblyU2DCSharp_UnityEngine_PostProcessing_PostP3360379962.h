#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.PostProcessing.PostProcessingProfile
struct PostProcessingProfile_t798645344;
// System.Func`2<UnityEngine.Vector2,UnityEngine.Matrix4x4>
struct Func_2_t140778781;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer>>
struct Dictionary_2_t3547995360;
// System.Collections.Generic.List`1<UnityEngine.PostProcessing.PostProcessingComponentBase>
struct List_1_t3237831559;
// System.Collections.Generic.Dictionary`2<UnityEngine.PostProcessing.PostProcessingComponentBase,System.Boolean>
struct Dictionary_2_t1476478626;
// UnityEngine.PostProcessing.MaterialFactory
struct MaterialFactory_t857263061;
// UnityEngine.PostProcessing.RenderTextureFactory
struct RenderTextureFactory_t1633211227;
// UnityEngine.PostProcessing.PostProcessingContext
struct PostProcessingContext_t754893438;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.PostProcessing.BuiltinDebugViewsComponent
struct BuiltinDebugViewsComponent_t4032585091;
// UnityEngine.PostProcessing.AmbientOcclusionComponent
struct AmbientOcclusionComponent_t3967716690;
// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent
struct ScreenSpaceReflectionComponent_t2571322632;
// UnityEngine.PostProcessing.FogComponent
struct FogComponent_t3271020547;
// UnityEngine.PostProcessing.MotionBlurComponent
struct MotionBlurComponent_t3753513360;
// UnityEngine.PostProcessing.TaaComponent
struct TaaComponent_t3918545825;
// UnityEngine.PostProcessing.EyeAdaptationComponent
struct EyeAdaptationComponent_t97759513;
// UnityEngine.PostProcessing.DepthOfFieldComponent
struct DepthOfFieldComponent_t2490301935;
// UnityEngine.PostProcessing.BloomComponent
struct BloomComponent_t1622424908;
// UnityEngine.PostProcessing.ChromaticAberrationComponent
struct ChromaticAberrationComponent_t1705178474;
// UnityEngine.PostProcessing.ColorGradingComponent
struct ColorGradingComponent_t1809510370;
// UnityEngine.PostProcessing.UserLutComponent
struct UserLutComponent_t1046924005;
// UnityEngine.PostProcessing.GrainComponent
struct GrainComponent_t448736540;
// UnityEngine.PostProcessing.VignetteComponent
struct VignetteComponent_t625460043;
// UnityEngine.PostProcessing.DitheringComponent
struct DitheringComponent_t700371219;
// UnityEngine.PostProcessing.FxaaComponent
struct FxaaComponent_t2311902503;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.PostProcessingBehaviour
struct  PostProcessingBehaviour_t3360379962  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.PostProcessing.PostProcessingProfile UnityEngine.PostProcessing.PostProcessingBehaviour::profile
	PostProcessingProfile_t798645344 * ___profile_2;
	// System.Func`2<UnityEngine.Vector2,UnityEngine.Matrix4x4> UnityEngine.PostProcessing.PostProcessingBehaviour::jitteredMatrixFunc
	Func_2_t140778781 * ___jitteredMatrixFunc_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.KeyValuePair`2<UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer>> UnityEngine.PostProcessing.PostProcessingBehaviour::m_CommandBuffers
	Dictionary_2_t3547995360 * ___m_CommandBuffers_4;
	// System.Collections.Generic.List`1<UnityEngine.PostProcessing.PostProcessingComponentBase> UnityEngine.PostProcessing.PostProcessingBehaviour::m_Components
	List_1_t3237831559 * ___m_Components_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.PostProcessing.PostProcessingComponentBase,System.Boolean> UnityEngine.PostProcessing.PostProcessingBehaviour::m_ComponentStates
	Dictionary_2_t1476478626 * ___m_ComponentStates_6;
	// UnityEngine.PostProcessing.MaterialFactory UnityEngine.PostProcessing.PostProcessingBehaviour::m_MaterialFactory
	MaterialFactory_t857263061 * ___m_MaterialFactory_7;
	// UnityEngine.PostProcessing.RenderTextureFactory UnityEngine.PostProcessing.PostProcessingBehaviour::m_RenderTextureFactory
	RenderTextureFactory_t1633211227 * ___m_RenderTextureFactory_8;
	// UnityEngine.PostProcessing.PostProcessingContext UnityEngine.PostProcessing.PostProcessingBehaviour::m_Context
	PostProcessingContext_t754893438 * ___m_Context_9;
	// UnityEngine.Camera UnityEngine.PostProcessing.PostProcessingBehaviour::m_Camera
	Camera_t189460977 * ___m_Camera_10;
	// UnityEngine.PostProcessing.PostProcessingProfile UnityEngine.PostProcessing.PostProcessingBehaviour::m_PreviousProfile
	PostProcessingProfile_t798645344 * ___m_PreviousProfile_11;
	// System.Boolean UnityEngine.PostProcessing.PostProcessingBehaviour::m_RenderingInSceneView
	bool ___m_RenderingInSceneView_12;
	// UnityEngine.PostProcessing.BuiltinDebugViewsComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_DebugViews
	BuiltinDebugViewsComponent_t4032585091 * ___m_DebugViews_13;
	// UnityEngine.PostProcessing.AmbientOcclusionComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_AmbientOcclusion
	AmbientOcclusionComponent_t3967716690 * ___m_AmbientOcclusion_14;
	// UnityEngine.PostProcessing.ScreenSpaceReflectionComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_ScreenSpaceReflection
	ScreenSpaceReflectionComponent_t2571322632 * ___m_ScreenSpaceReflection_15;
	// UnityEngine.PostProcessing.FogComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_FogComponent
	FogComponent_t3271020547 * ___m_FogComponent_16;
	// UnityEngine.PostProcessing.MotionBlurComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_MotionBlur
	MotionBlurComponent_t3753513360 * ___m_MotionBlur_17;
	// UnityEngine.PostProcessing.TaaComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_Taa
	TaaComponent_t3918545825 * ___m_Taa_18;
	// UnityEngine.PostProcessing.EyeAdaptationComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_EyeAdaptation
	EyeAdaptationComponent_t97759513 * ___m_EyeAdaptation_19;
	// UnityEngine.PostProcessing.DepthOfFieldComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_DepthOfField
	DepthOfFieldComponent_t2490301935 * ___m_DepthOfField_20;
	// UnityEngine.PostProcessing.BloomComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_Bloom
	BloomComponent_t1622424908 * ___m_Bloom_21;
	// UnityEngine.PostProcessing.ChromaticAberrationComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_ChromaticAberration
	ChromaticAberrationComponent_t1705178474 * ___m_ChromaticAberration_22;
	// UnityEngine.PostProcessing.ColorGradingComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_ColorGrading
	ColorGradingComponent_t1809510370 * ___m_ColorGrading_23;
	// UnityEngine.PostProcessing.UserLutComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_UserLut
	UserLutComponent_t1046924005 * ___m_UserLut_24;
	// UnityEngine.PostProcessing.GrainComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_Grain
	GrainComponent_t448736540 * ___m_Grain_25;
	// UnityEngine.PostProcessing.VignetteComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_Vignette
	VignetteComponent_t625460043 * ___m_Vignette_26;
	// UnityEngine.PostProcessing.DitheringComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_Dithering
	DitheringComponent_t700371219 * ___m_Dithering_27;
	// UnityEngine.PostProcessing.FxaaComponent UnityEngine.PostProcessing.PostProcessingBehaviour::m_Fxaa
	FxaaComponent_t2311902503 * ___m_Fxaa_28;
	// System.Collections.Generic.List`1<UnityEngine.PostProcessing.PostProcessingComponentBase> UnityEngine.PostProcessing.PostProcessingBehaviour::m_ComponentsToEnable
	List_1_t3237831559 * ___m_ComponentsToEnable_29;
	// System.Collections.Generic.List`1<UnityEngine.PostProcessing.PostProcessingComponentBase> UnityEngine.PostProcessing.PostProcessingBehaviour::m_ComponentsToDisable
	List_1_t3237831559 * ___m_ComponentsToDisable_30;

public:
	inline static int32_t get_offset_of_profile_2() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___profile_2)); }
	inline PostProcessingProfile_t798645344 * get_profile_2() const { return ___profile_2; }
	inline PostProcessingProfile_t798645344 ** get_address_of_profile_2() { return &___profile_2; }
	inline void set_profile_2(PostProcessingProfile_t798645344 * value)
	{
		___profile_2 = value;
		Il2CppCodeGenWriteBarrier(&___profile_2, value);
	}

	inline static int32_t get_offset_of_jitteredMatrixFunc_3() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___jitteredMatrixFunc_3)); }
	inline Func_2_t140778781 * get_jitteredMatrixFunc_3() const { return ___jitteredMatrixFunc_3; }
	inline Func_2_t140778781 ** get_address_of_jitteredMatrixFunc_3() { return &___jitteredMatrixFunc_3; }
	inline void set_jitteredMatrixFunc_3(Func_2_t140778781 * value)
	{
		___jitteredMatrixFunc_3 = value;
		Il2CppCodeGenWriteBarrier(&___jitteredMatrixFunc_3, value);
	}

	inline static int32_t get_offset_of_m_CommandBuffers_4() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_CommandBuffers_4)); }
	inline Dictionary_2_t3547995360 * get_m_CommandBuffers_4() const { return ___m_CommandBuffers_4; }
	inline Dictionary_2_t3547995360 ** get_address_of_m_CommandBuffers_4() { return &___m_CommandBuffers_4; }
	inline void set_m_CommandBuffers_4(Dictionary_2_t3547995360 * value)
	{
		___m_CommandBuffers_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_CommandBuffers_4, value);
	}

	inline static int32_t get_offset_of_m_Components_5() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_Components_5)); }
	inline List_1_t3237831559 * get_m_Components_5() const { return ___m_Components_5; }
	inline List_1_t3237831559 ** get_address_of_m_Components_5() { return &___m_Components_5; }
	inline void set_m_Components_5(List_1_t3237831559 * value)
	{
		___m_Components_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_Components_5, value);
	}

	inline static int32_t get_offset_of_m_ComponentStates_6() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_ComponentStates_6)); }
	inline Dictionary_2_t1476478626 * get_m_ComponentStates_6() const { return ___m_ComponentStates_6; }
	inline Dictionary_2_t1476478626 ** get_address_of_m_ComponentStates_6() { return &___m_ComponentStates_6; }
	inline void set_m_ComponentStates_6(Dictionary_2_t1476478626 * value)
	{
		___m_ComponentStates_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_ComponentStates_6, value);
	}

	inline static int32_t get_offset_of_m_MaterialFactory_7() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_MaterialFactory_7)); }
	inline MaterialFactory_t857263061 * get_m_MaterialFactory_7() const { return ___m_MaterialFactory_7; }
	inline MaterialFactory_t857263061 ** get_address_of_m_MaterialFactory_7() { return &___m_MaterialFactory_7; }
	inline void set_m_MaterialFactory_7(MaterialFactory_t857263061 * value)
	{
		___m_MaterialFactory_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_MaterialFactory_7, value);
	}

	inline static int32_t get_offset_of_m_RenderTextureFactory_8() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_RenderTextureFactory_8)); }
	inline RenderTextureFactory_t1633211227 * get_m_RenderTextureFactory_8() const { return ___m_RenderTextureFactory_8; }
	inline RenderTextureFactory_t1633211227 ** get_address_of_m_RenderTextureFactory_8() { return &___m_RenderTextureFactory_8; }
	inline void set_m_RenderTextureFactory_8(RenderTextureFactory_t1633211227 * value)
	{
		___m_RenderTextureFactory_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_RenderTextureFactory_8, value);
	}

	inline static int32_t get_offset_of_m_Context_9() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_Context_9)); }
	inline PostProcessingContext_t754893438 * get_m_Context_9() const { return ___m_Context_9; }
	inline PostProcessingContext_t754893438 ** get_address_of_m_Context_9() { return &___m_Context_9; }
	inline void set_m_Context_9(PostProcessingContext_t754893438 * value)
	{
		___m_Context_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Context_9, value);
	}

	inline static int32_t get_offset_of_m_Camera_10() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_Camera_10)); }
	inline Camera_t189460977 * get_m_Camera_10() const { return ___m_Camera_10; }
	inline Camera_t189460977 ** get_address_of_m_Camera_10() { return &___m_Camera_10; }
	inline void set_m_Camera_10(Camera_t189460977 * value)
	{
		___m_Camera_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_10, value);
	}

	inline static int32_t get_offset_of_m_PreviousProfile_11() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_PreviousProfile_11)); }
	inline PostProcessingProfile_t798645344 * get_m_PreviousProfile_11() const { return ___m_PreviousProfile_11; }
	inline PostProcessingProfile_t798645344 ** get_address_of_m_PreviousProfile_11() { return &___m_PreviousProfile_11; }
	inline void set_m_PreviousProfile_11(PostProcessingProfile_t798645344 * value)
	{
		___m_PreviousProfile_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_PreviousProfile_11, value);
	}

	inline static int32_t get_offset_of_m_RenderingInSceneView_12() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_RenderingInSceneView_12)); }
	inline bool get_m_RenderingInSceneView_12() const { return ___m_RenderingInSceneView_12; }
	inline bool* get_address_of_m_RenderingInSceneView_12() { return &___m_RenderingInSceneView_12; }
	inline void set_m_RenderingInSceneView_12(bool value)
	{
		___m_RenderingInSceneView_12 = value;
	}

	inline static int32_t get_offset_of_m_DebugViews_13() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_DebugViews_13)); }
	inline BuiltinDebugViewsComponent_t4032585091 * get_m_DebugViews_13() const { return ___m_DebugViews_13; }
	inline BuiltinDebugViewsComponent_t4032585091 ** get_address_of_m_DebugViews_13() { return &___m_DebugViews_13; }
	inline void set_m_DebugViews_13(BuiltinDebugViewsComponent_t4032585091 * value)
	{
		___m_DebugViews_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_DebugViews_13, value);
	}

	inline static int32_t get_offset_of_m_AmbientOcclusion_14() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_AmbientOcclusion_14)); }
	inline AmbientOcclusionComponent_t3967716690 * get_m_AmbientOcclusion_14() const { return ___m_AmbientOcclusion_14; }
	inline AmbientOcclusionComponent_t3967716690 ** get_address_of_m_AmbientOcclusion_14() { return &___m_AmbientOcclusion_14; }
	inline void set_m_AmbientOcclusion_14(AmbientOcclusionComponent_t3967716690 * value)
	{
		___m_AmbientOcclusion_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_AmbientOcclusion_14, value);
	}

	inline static int32_t get_offset_of_m_ScreenSpaceReflection_15() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_ScreenSpaceReflection_15)); }
	inline ScreenSpaceReflectionComponent_t2571322632 * get_m_ScreenSpaceReflection_15() const { return ___m_ScreenSpaceReflection_15; }
	inline ScreenSpaceReflectionComponent_t2571322632 ** get_address_of_m_ScreenSpaceReflection_15() { return &___m_ScreenSpaceReflection_15; }
	inline void set_m_ScreenSpaceReflection_15(ScreenSpaceReflectionComponent_t2571322632 * value)
	{
		___m_ScreenSpaceReflection_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_ScreenSpaceReflection_15, value);
	}

	inline static int32_t get_offset_of_m_FogComponent_16() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_FogComponent_16)); }
	inline FogComponent_t3271020547 * get_m_FogComponent_16() const { return ___m_FogComponent_16; }
	inline FogComponent_t3271020547 ** get_address_of_m_FogComponent_16() { return &___m_FogComponent_16; }
	inline void set_m_FogComponent_16(FogComponent_t3271020547 * value)
	{
		___m_FogComponent_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_FogComponent_16, value);
	}

	inline static int32_t get_offset_of_m_MotionBlur_17() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_MotionBlur_17)); }
	inline MotionBlurComponent_t3753513360 * get_m_MotionBlur_17() const { return ___m_MotionBlur_17; }
	inline MotionBlurComponent_t3753513360 ** get_address_of_m_MotionBlur_17() { return &___m_MotionBlur_17; }
	inline void set_m_MotionBlur_17(MotionBlurComponent_t3753513360 * value)
	{
		___m_MotionBlur_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_MotionBlur_17, value);
	}

	inline static int32_t get_offset_of_m_Taa_18() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_Taa_18)); }
	inline TaaComponent_t3918545825 * get_m_Taa_18() const { return ___m_Taa_18; }
	inline TaaComponent_t3918545825 ** get_address_of_m_Taa_18() { return &___m_Taa_18; }
	inline void set_m_Taa_18(TaaComponent_t3918545825 * value)
	{
		___m_Taa_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_Taa_18, value);
	}

	inline static int32_t get_offset_of_m_EyeAdaptation_19() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_EyeAdaptation_19)); }
	inline EyeAdaptationComponent_t97759513 * get_m_EyeAdaptation_19() const { return ___m_EyeAdaptation_19; }
	inline EyeAdaptationComponent_t97759513 ** get_address_of_m_EyeAdaptation_19() { return &___m_EyeAdaptation_19; }
	inline void set_m_EyeAdaptation_19(EyeAdaptationComponent_t97759513 * value)
	{
		___m_EyeAdaptation_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_EyeAdaptation_19, value);
	}

	inline static int32_t get_offset_of_m_DepthOfField_20() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_DepthOfField_20)); }
	inline DepthOfFieldComponent_t2490301935 * get_m_DepthOfField_20() const { return ___m_DepthOfField_20; }
	inline DepthOfFieldComponent_t2490301935 ** get_address_of_m_DepthOfField_20() { return &___m_DepthOfField_20; }
	inline void set_m_DepthOfField_20(DepthOfFieldComponent_t2490301935 * value)
	{
		___m_DepthOfField_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_DepthOfField_20, value);
	}

	inline static int32_t get_offset_of_m_Bloom_21() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_Bloom_21)); }
	inline BloomComponent_t1622424908 * get_m_Bloom_21() const { return ___m_Bloom_21; }
	inline BloomComponent_t1622424908 ** get_address_of_m_Bloom_21() { return &___m_Bloom_21; }
	inline void set_m_Bloom_21(BloomComponent_t1622424908 * value)
	{
		___m_Bloom_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_Bloom_21, value);
	}

	inline static int32_t get_offset_of_m_ChromaticAberration_22() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_ChromaticAberration_22)); }
	inline ChromaticAberrationComponent_t1705178474 * get_m_ChromaticAberration_22() const { return ___m_ChromaticAberration_22; }
	inline ChromaticAberrationComponent_t1705178474 ** get_address_of_m_ChromaticAberration_22() { return &___m_ChromaticAberration_22; }
	inline void set_m_ChromaticAberration_22(ChromaticAberrationComponent_t1705178474 * value)
	{
		___m_ChromaticAberration_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_ChromaticAberration_22, value);
	}

	inline static int32_t get_offset_of_m_ColorGrading_23() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_ColorGrading_23)); }
	inline ColorGradingComponent_t1809510370 * get_m_ColorGrading_23() const { return ___m_ColorGrading_23; }
	inline ColorGradingComponent_t1809510370 ** get_address_of_m_ColorGrading_23() { return &___m_ColorGrading_23; }
	inline void set_m_ColorGrading_23(ColorGradingComponent_t1809510370 * value)
	{
		___m_ColorGrading_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_ColorGrading_23, value);
	}

	inline static int32_t get_offset_of_m_UserLut_24() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_UserLut_24)); }
	inline UserLutComponent_t1046924005 * get_m_UserLut_24() const { return ___m_UserLut_24; }
	inline UserLutComponent_t1046924005 ** get_address_of_m_UserLut_24() { return &___m_UserLut_24; }
	inline void set_m_UserLut_24(UserLutComponent_t1046924005 * value)
	{
		___m_UserLut_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_UserLut_24, value);
	}

	inline static int32_t get_offset_of_m_Grain_25() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_Grain_25)); }
	inline GrainComponent_t448736540 * get_m_Grain_25() const { return ___m_Grain_25; }
	inline GrainComponent_t448736540 ** get_address_of_m_Grain_25() { return &___m_Grain_25; }
	inline void set_m_Grain_25(GrainComponent_t448736540 * value)
	{
		___m_Grain_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_Grain_25, value);
	}

	inline static int32_t get_offset_of_m_Vignette_26() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_Vignette_26)); }
	inline VignetteComponent_t625460043 * get_m_Vignette_26() const { return ___m_Vignette_26; }
	inline VignetteComponent_t625460043 ** get_address_of_m_Vignette_26() { return &___m_Vignette_26; }
	inline void set_m_Vignette_26(VignetteComponent_t625460043 * value)
	{
		___m_Vignette_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_Vignette_26, value);
	}

	inline static int32_t get_offset_of_m_Dithering_27() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_Dithering_27)); }
	inline DitheringComponent_t700371219 * get_m_Dithering_27() const { return ___m_Dithering_27; }
	inline DitheringComponent_t700371219 ** get_address_of_m_Dithering_27() { return &___m_Dithering_27; }
	inline void set_m_Dithering_27(DitheringComponent_t700371219 * value)
	{
		___m_Dithering_27 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dithering_27, value);
	}

	inline static int32_t get_offset_of_m_Fxaa_28() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_Fxaa_28)); }
	inline FxaaComponent_t2311902503 * get_m_Fxaa_28() const { return ___m_Fxaa_28; }
	inline FxaaComponent_t2311902503 ** get_address_of_m_Fxaa_28() { return &___m_Fxaa_28; }
	inline void set_m_Fxaa_28(FxaaComponent_t2311902503 * value)
	{
		___m_Fxaa_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_Fxaa_28, value);
	}

	inline static int32_t get_offset_of_m_ComponentsToEnable_29() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_ComponentsToEnable_29)); }
	inline List_1_t3237831559 * get_m_ComponentsToEnable_29() const { return ___m_ComponentsToEnable_29; }
	inline List_1_t3237831559 ** get_address_of_m_ComponentsToEnable_29() { return &___m_ComponentsToEnable_29; }
	inline void set_m_ComponentsToEnable_29(List_1_t3237831559 * value)
	{
		___m_ComponentsToEnable_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_ComponentsToEnable_29, value);
	}

	inline static int32_t get_offset_of_m_ComponentsToDisable_30() { return static_cast<int32_t>(offsetof(PostProcessingBehaviour_t3360379962, ___m_ComponentsToDisable_30)); }
	inline List_1_t3237831559 * get_m_ComponentsToDisable_30() const { return ___m_ComponentsToDisable_30; }
	inline List_1_t3237831559 ** get_address_of_m_ComponentsToDisable_30() { return &___m_ComponentsToDisable_30; }
	inline void set_m_ComponentsToDisable_30(List_1_t3237831559 * value)
	{
		___m_ComponentsToDisable_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_ComponentsToDisable_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
