#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_RogoDigital_Lipsync_BlendSystemUs526961539.h"
#include "AssemblyU2DCSharp_RogoDigital_EyeController_Contro2525786965.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// RogoDigital.Lipsync.Shape
struct Shape_t126115539;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,RogoDigital.EyeController/BoneShapeInfo>
struct Dictionary_2_t1970018705;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.EyeController
struct  EyeController_t2332092255  : public BlendSystemUser_t526961539
{
public:
	// System.Boolean RogoDigital.EyeController::blinkingEnabled
	bool ___blinkingEnabled_3;
	// RogoDigital.EyeController/ControlMode RogoDigital.EyeController::blinkingControlMode
	int32_t ___blinkingControlMode_4;
	// RogoDigital.Lipsync.Shape RogoDigital.EyeController::blinkingShape
	Shape_t126115539 * ___blinkingShape_5;
	// System.Int32 RogoDigital.EyeController::leftEyeBlinkBlendable
	int32_t ___leftEyeBlinkBlendable_6;
	// System.Int32 RogoDigital.EyeController::rightEyeBlinkBlendable
	int32_t ___rightEyeBlinkBlendable_7;
	// System.Single RogoDigital.EyeController::minimumBlinkGap
	float ___minimumBlinkGap_8;
	// System.Single RogoDigital.EyeController::maximumBlinkGap
	float ___maximumBlinkGap_9;
	// System.Single RogoDigital.EyeController::blinkDuration
	float ___blinkDuration_10;
	// System.Boolean RogoDigital.EyeController::randomLookingEnabled
	bool ___randomLookingEnabled_11;
	// RogoDigital.EyeController/ControlMode RogoDigital.EyeController::lookingControlMode
	int32_t ___lookingControlMode_12;
	// RogoDigital.Lipsync.Shape RogoDigital.EyeController::lookingUpShape
	Shape_t126115539 * ___lookingUpShape_13;
	// RogoDigital.Lipsync.Shape RogoDigital.EyeController::lookingDownShape
	Shape_t126115539 * ___lookingDownShape_14;
	// RogoDigital.Lipsync.Shape RogoDigital.EyeController::lookingLeftShape
	Shape_t126115539 * ___lookingLeftShape_15;
	// RogoDigital.Lipsync.Shape RogoDigital.EyeController::lookingRightShape
	Shape_t126115539 * ___lookingRightShape_16;
	// UnityEngine.Transform RogoDigital.EyeController::leftEyeLookAtBone
	Transform_t3275118058 * ___leftEyeLookAtBone_17;
	// UnityEngine.Transform RogoDigital.EyeController::rightEyeLookAtBone
	Transform_t3275118058 * ___rightEyeLookAtBone_18;
	// UnityEngine.Vector2 RogoDigital.EyeController::eyeRotationRangeX
	Vector2_t2243707579  ___eyeRotationRangeX_19;
	// UnityEngine.Vector2 RogoDigital.EyeController::eyeRotationRangeY
	Vector2_t2243707579  ___eyeRotationRangeY_20;
	// UnityEngine.Vector3 RogoDigital.EyeController::eyeLookOffset
	Vector3_t2243707580  ___eyeLookOffset_21;
	// System.Single RogoDigital.EyeController::eyeTurnSpeed
	float ___eyeTurnSpeed_22;
	// System.Single RogoDigital.EyeController::minimumChangeDirectionGap
	float ___minimumChangeDirectionGap_23;
	// System.Single RogoDigital.EyeController::maximumChangeDirectionGap
	float ___maximumChangeDirectionGap_24;
	// System.Boolean RogoDigital.EyeController::targetEnabled
	bool ___targetEnabled_25;
	// System.Boolean RogoDigital.EyeController::autoTarget
	bool ___autoTarget_26;
	// System.String RogoDigital.EyeController::autoTargetTag
	String_t* ___autoTargetTag_27;
	// System.Single RogoDigital.EyeController::autoTargetDistance
	float ___autoTargetDistance_28;
	// UnityEngine.Transform RogoDigital.EyeController::viewTarget
	Transform_t3275118058 * ___viewTarget_29;
	// System.Single RogoDigital.EyeController::targetWeight
	float ___targetWeight_30;
	// System.Boolean RogoDigital.EyeController::boneUpdateAnimation
	bool ___boneUpdateAnimation_31;
	// System.Single RogoDigital.EyeController::blinkTimer
	float ___blinkTimer_32;
	// System.Boolean RogoDigital.EyeController::blinking
	bool ___blinking_33;
	// System.Boolean RogoDigital.EyeController::_keepEyesClosed
	bool ____keepEyesClosed_34;
	// System.Boolean RogoDigital.EyeController::_asyncBlending
	bool ____asyncBlending_35;
	// UnityEngine.Quaternion RogoDigital.EyeController::leftRotation
	Quaternion_t4030073918  ___leftRotation_36;
	// UnityEngine.Quaternion RogoDigital.EyeController::rightRotation
	Quaternion_t4030073918  ___rightRotation_37;
	// System.Single RogoDigital.EyeController::lookTimer
	float ___lookTimer_38;
	// UnityEngine.Quaternion RogoDigital.EyeController::randomAngle
	Quaternion_t4030073918  ___randomAngle_39;
	// UnityEngine.Vector2 RogoDigital.EyeController::randomBlend
	Vector2_t2243707579  ___randomBlend_40;
	// UnityEngine.Transform RogoDigital.EyeController::target
	Transform_t3275118058 * ___target_41;
	// UnityEngine.Quaternion RogoDigital.EyeController::leftTargetAngle
	Quaternion_t4030073918  ___leftTargetAngle_42;
	// UnityEngine.Quaternion RogoDigital.EyeController::rightTargetAngle
	Quaternion_t4030073918  ___rightTargetAngle_43;
	// UnityEngine.Transform[] RogoDigital.EyeController::markedTargets
	TransformU5BU5D_t3764228911* ___markedTargets_44;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,RogoDigital.EyeController/BoneShapeInfo> RogoDigital.EyeController::boneShapes
	Dictionary_2_t1970018705 * ___boneShapes_45;

public:
	inline static int32_t get_offset_of_blinkingEnabled_3() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___blinkingEnabled_3)); }
	inline bool get_blinkingEnabled_3() const { return ___blinkingEnabled_3; }
	inline bool* get_address_of_blinkingEnabled_3() { return &___blinkingEnabled_3; }
	inline void set_blinkingEnabled_3(bool value)
	{
		___blinkingEnabled_3 = value;
	}

	inline static int32_t get_offset_of_blinkingControlMode_4() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___blinkingControlMode_4)); }
	inline int32_t get_blinkingControlMode_4() const { return ___blinkingControlMode_4; }
	inline int32_t* get_address_of_blinkingControlMode_4() { return &___blinkingControlMode_4; }
	inline void set_blinkingControlMode_4(int32_t value)
	{
		___blinkingControlMode_4 = value;
	}

	inline static int32_t get_offset_of_blinkingShape_5() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___blinkingShape_5)); }
	inline Shape_t126115539 * get_blinkingShape_5() const { return ___blinkingShape_5; }
	inline Shape_t126115539 ** get_address_of_blinkingShape_5() { return &___blinkingShape_5; }
	inline void set_blinkingShape_5(Shape_t126115539 * value)
	{
		___blinkingShape_5 = value;
		Il2CppCodeGenWriteBarrier(&___blinkingShape_5, value);
	}

	inline static int32_t get_offset_of_leftEyeBlinkBlendable_6() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___leftEyeBlinkBlendable_6)); }
	inline int32_t get_leftEyeBlinkBlendable_6() const { return ___leftEyeBlinkBlendable_6; }
	inline int32_t* get_address_of_leftEyeBlinkBlendable_6() { return &___leftEyeBlinkBlendable_6; }
	inline void set_leftEyeBlinkBlendable_6(int32_t value)
	{
		___leftEyeBlinkBlendable_6 = value;
	}

	inline static int32_t get_offset_of_rightEyeBlinkBlendable_7() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___rightEyeBlinkBlendable_7)); }
	inline int32_t get_rightEyeBlinkBlendable_7() const { return ___rightEyeBlinkBlendable_7; }
	inline int32_t* get_address_of_rightEyeBlinkBlendable_7() { return &___rightEyeBlinkBlendable_7; }
	inline void set_rightEyeBlinkBlendable_7(int32_t value)
	{
		___rightEyeBlinkBlendable_7 = value;
	}

	inline static int32_t get_offset_of_minimumBlinkGap_8() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___minimumBlinkGap_8)); }
	inline float get_minimumBlinkGap_8() const { return ___minimumBlinkGap_8; }
	inline float* get_address_of_minimumBlinkGap_8() { return &___minimumBlinkGap_8; }
	inline void set_minimumBlinkGap_8(float value)
	{
		___minimumBlinkGap_8 = value;
	}

	inline static int32_t get_offset_of_maximumBlinkGap_9() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___maximumBlinkGap_9)); }
	inline float get_maximumBlinkGap_9() const { return ___maximumBlinkGap_9; }
	inline float* get_address_of_maximumBlinkGap_9() { return &___maximumBlinkGap_9; }
	inline void set_maximumBlinkGap_9(float value)
	{
		___maximumBlinkGap_9 = value;
	}

	inline static int32_t get_offset_of_blinkDuration_10() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___blinkDuration_10)); }
	inline float get_blinkDuration_10() const { return ___blinkDuration_10; }
	inline float* get_address_of_blinkDuration_10() { return &___blinkDuration_10; }
	inline void set_blinkDuration_10(float value)
	{
		___blinkDuration_10 = value;
	}

	inline static int32_t get_offset_of_randomLookingEnabled_11() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___randomLookingEnabled_11)); }
	inline bool get_randomLookingEnabled_11() const { return ___randomLookingEnabled_11; }
	inline bool* get_address_of_randomLookingEnabled_11() { return &___randomLookingEnabled_11; }
	inline void set_randomLookingEnabled_11(bool value)
	{
		___randomLookingEnabled_11 = value;
	}

	inline static int32_t get_offset_of_lookingControlMode_12() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___lookingControlMode_12)); }
	inline int32_t get_lookingControlMode_12() const { return ___lookingControlMode_12; }
	inline int32_t* get_address_of_lookingControlMode_12() { return &___lookingControlMode_12; }
	inline void set_lookingControlMode_12(int32_t value)
	{
		___lookingControlMode_12 = value;
	}

	inline static int32_t get_offset_of_lookingUpShape_13() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___lookingUpShape_13)); }
	inline Shape_t126115539 * get_lookingUpShape_13() const { return ___lookingUpShape_13; }
	inline Shape_t126115539 ** get_address_of_lookingUpShape_13() { return &___lookingUpShape_13; }
	inline void set_lookingUpShape_13(Shape_t126115539 * value)
	{
		___lookingUpShape_13 = value;
		Il2CppCodeGenWriteBarrier(&___lookingUpShape_13, value);
	}

	inline static int32_t get_offset_of_lookingDownShape_14() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___lookingDownShape_14)); }
	inline Shape_t126115539 * get_lookingDownShape_14() const { return ___lookingDownShape_14; }
	inline Shape_t126115539 ** get_address_of_lookingDownShape_14() { return &___lookingDownShape_14; }
	inline void set_lookingDownShape_14(Shape_t126115539 * value)
	{
		___lookingDownShape_14 = value;
		Il2CppCodeGenWriteBarrier(&___lookingDownShape_14, value);
	}

	inline static int32_t get_offset_of_lookingLeftShape_15() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___lookingLeftShape_15)); }
	inline Shape_t126115539 * get_lookingLeftShape_15() const { return ___lookingLeftShape_15; }
	inline Shape_t126115539 ** get_address_of_lookingLeftShape_15() { return &___lookingLeftShape_15; }
	inline void set_lookingLeftShape_15(Shape_t126115539 * value)
	{
		___lookingLeftShape_15 = value;
		Il2CppCodeGenWriteBarrier(&___lookingLeftShape_15, value);
	}

	inline static int32_t get_offset_of_lookingRightShape_16() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___lookingRightShape_16)); }
	inline Shape_t126115539 * get_lookingRightShape_16() const { return ___lookingRightShape_16; }
	inline Shape_t126115539 ** get_address_of_lookingRightShape_16() { return &___lookingRightShape_16; }
	inline void set_lookingRightShape_16(Shape_t126115539 * value)
	{
		___lookingRightShape_16 = value;
		Il2CppCodeGenWriteBarrier(&___lookingRightShape_16, value);
	}

	inline static int32_t get_offset_of_leftEyeLookAtBone_17() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___leftEyeLookAtBone_17)); }
	inline Transform_t3275118058 * get_leftEyeLookAtBone_17() const { return ___leftEyeLookAtBone_17; }
	inline Transform_t3275118058 ** get_address_of_leftEyeLookAtBone_17() { return &___leftEyeLookAtBone_17; }
	inline void set_leftEyeLookAtBone_17(Transform_t3275118058 * value)
	{
		___leftEyeLookAtBone_17 = value;
		Il2CppCodeGenWriteBarrier(&___leftEyeLookAtBone_17, value);
	}

	inline static int32_t get_offset_of_rightEyeLookAtBone_18() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___rightEyeLookAtBone_18)); }
	inline Transform_t3275118058 * get_rightEyeLookAtBone_18() const { return ___rightEyeLookAtBone_18; }
	inline Transform_t3275118058 ** get_address_of_rightEyeLookAtBone_18() { return &___rightEyeLookAtBone_18; }
	inline void set_rightEyeLookAtBone_18(Transform_t3275118058 * value)
	{
		___rightEyeLookAtBone_18 = value;
		Il2CppCodeGenWriteBarrier(&___rightEyeLookAtBone_18, value);
	}

	inline static int32_t get_offset_of_eyeRotationRangeX_19() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___eyeRotationRangeX_19)); }
	inline Vector2_t2243707579  get_eyeRotationRangeX_19() const { return ___eyeRotationRangeX_19; }
	inline Vector2_t2243707579 * get_address_of_eyeRotationRangeX_19() { return &___eyeRotationRangeX_19; }
	inline void set_eyeRotationRangeX_19(Vector2_t2243707579  value)
	{
		___eyeRotationRangeX_19 = value;
	}

	inline static int32_t get_offset_of_eyeRotationRangeY_20() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___eyeRotationRangeY_20)); }
	inline Vector2_t2243707579  get_eyeRotationRangeY_20() const { return ___eyeRotationRangeY_20; }
	inline Vector2_t2243707579 * get_address_of_eyeRotationRangeY_20() { return &___eyeRotationRangeY_20; }
	inline void set_eyeRotationRangeY_20(Vector2_t2243707579  value)
	{
		___eyeRotationRangeY_20 = value;
	}

	inline static int32_t get_offset_of_eyeLookOffset_21() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___eyeLookOffset_21)); }
	inline Vector3_t2243707580  get_eyeLookOffset_21() const { return ___eyeLookOffset_21; }
	inline Vector3_t2243707580 * get_address_of_eyeLookOffset_21() { return &___eyeLookOffset_21; }
	inline void set_eyeLookOffset_21(Vector3_t2243707580  value)
	{
		___eyeLookOffset_21 = value;
	}

	inline static int32_t get_offset_of_eyeTurnSpeed_22() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___eyeTurnSpeed_22)); }
	inline float get_eyeTurnSpeed_22() const { return ___eyeTurnSpeed_22; }
	inline float* get_address_of_eyeTurnSpeed_22() { return &___eyeTurnSpeed_22; }
	inline void set_eyeTurnSpeed_22(float value)
	{
		___eyeTurnSpeed_22 = value;
	}

	inline static int32_t get_offset_of_minimumChangeDirectionGap_23() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___minimumChangeDirectionGap_23)); }
	inline float get_minimumChangeDirectionGap_23() const { return ___minimumChangeDirectionGap_23; }
	inline float* get_address_of_minimumChangeDirectionGap_23() { return &___minimumChangeDirectionGap_23; }
	inline void set_minimumChangeDirectionGap_23(float value)
	{
		___minimumChangeDirectionGap_23 = value;
	}

	inline static int32_t get_offset_of_maximumChangeDirectionGap_24() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___maximumChangeDirectionGap_24)); }
	inline float get_maximumChangeDirectionGap_24() const { return ___maximumChangeDirectionGap_24; }
	inline float* get_address_of_maximumChangeDirectionGap_24() { return &___maximumChangeDirectionGap_24; }
	inline void set_maximumChangeDirectionGap_24(float value)
	{
		___maximumChangeDirectionGap_24 = value;
	}

	inline static int32_t get_offset_of_targetEnabled_25() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___targetEnabled_25)); }
	inline bool get_targetEnabled_25() const { return ___targetEnabled_25; }
	inline bool* get_address_of_targetEnabled_25() { return &___targetEnabled_25; }
	inline void set_targetEnabled_25(bool value)
	{
		___targetEnabled_25 = value;
	}

	inline static int32_t get_offset_of_autoTarget_26() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___autoTarget_26)); }
	inline bool get_autoTarget_26() const { return ___autoTarget_26; }
	inline bool* get_address_of_autoTarget_26() { return &___autoTarget_26; }
	inline void set_autoTarget_26(bool value)
	{
		___autoTarget_26 = value;
	}

	inline static int32_t get_offset_of_autoTargetTag_27() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___autoTargetTag_27)); }
	inline String_t* get_autoTargetTag_27() const { return ___autoTargetTag_27; }
	inline String_t** get_address_of_autoTargetTag_27() { return &___autoTargetTag_27; }
	inline void set_autoTargetTag_27(String_t* value)
	{
		___autoTargetTag_27 = value;
		Il2CppCodeGenWriteBarrier(&___autoTargetTag_27, value);
	}

	inline static int32_t get_offset_of_autoTargetDistance_28() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___autoTargetDistance_28)); }
	inline float get_autoTargetDistance_28() const { return ___autoTargetDistance_28; }
	inline float* get_address_of_autoTargetDistance_28() { return &___autoTargetDistance_28; }
	inline void set_autoTargetDistance_28(float value)
	{
		___autoTargetDistance_28 = value;
	}

	inline static int32_t get_offset_of_viewTarget_29() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___viewTarget_29)); }
	inline Transform_t3275118058 * get_viewTarget_29() const { return ___viewTarget_29; }
	inline Transform_t3275118058 ** get_address_of_viewTarget_29() { return &___viewTarget_29; }
	inline void set_viewTarget_29(Transform_t3275118058 * value)
	{
		___viewTarget_29 = value;
		Il2CppCodeGenWriteBarrier(&___viewTarget_29, value);
	}

	inline static int32_t get_offset_of_targetWeight_30() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___targetWeight_30)); }
	inline float get_targetWeight_30() const { return ___targetWeight_30; }
	inline float* get_address_of_targetWeight_30() { return &___targetWeight_30; }
	inline void set_targetWeight_30(float value)
	{
		___targetWeight_30 = value;
	}

	inline static int32_t get_offset_of_boneUpdateAnimation_31() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___boneUpdateAnimation_31)); }
	inline bool get_boneUpdateAnimation_31() const { return ___boneUpdateAnimation_31; }
	inline bool* get_address_of_boneUpdateAnimation_31() { return &___boneUpdateAnimation_31; }
	inline void set_boneUpdateAnimation_31(bool value)
	{
		___boneUpdateAnimation_31 = value;
	}

	inline static int32_t get_offset_of_blinkTimer_32() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___blinkTimer_32)); }
	inline float get_blinkTimer_32() const { return ___blinkTimer_32; }
	inline float* get_address_of_blinkTimer_32() { return &___blinkTimer_32; }
	inline void set_blinkTimer_32(float value)
	{
		___blinkTimer_32 = value;
	}

	inline static int32_t get_offset_of_blinking_33() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___blinking_33)); }
	inline bool get_blinking_33() const { return ___blinking_33; }
	inline bool* get_address_of_blinking_33() { return &___blinking_33; }
	inline void set_blinking_33(bool value)
	{
		___blinking_33 = value;
	}

	inline static int32_t get_offset_of__keepEyesClosed_34() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ____keepEyesClosed_34)); }
	inline bool get__keepEyesClosed_34() const { return ____keepEyesClosed_34; }
	inline bool* get_address_of__keepEyesClosed_34() { return &____keepEyesClosed_34; }
	inline void set__keepEyesClosed_34(bool value)
	{
		____keepEyesClosed_34 = value;
	}

	inline static int32_t get_offset_of__asyncBlending_35() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ____asyncBlending_35)); }
	inline bool get__asyncBlending_35() const { return ____asyncBlending_35; }
	inline bool* get_address_of__asyncBlending_35() { return &____asyncBlending_35; }
	inline void set__asyncBlending_35(bool value)
	{
		____asyncBlending_35 = value;
	}

	inline static int32_t get_offset_of_leftRotation_36() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___leftRotation_36)); }
	inline Quaternion_t4030073918  get_leftRotation_36() const { return ___leftRotation_36; }
	inline Quaternion_t4030073918 * get_address_of_leftRotation_36() { return &___leftRotation_36; }
	inline void set_leftRotation_36(Quaternion_t4030073918  value)
	{
		___leftRotation_36 = value;
	}

	inline static int32_t get_offset_of_rightRotation_37() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___rightRotation_37)); }
	inline Quaternion_t4030073918  get_rightRotation_37() const { return ___rightRotation_37; }
	inline Quaternion_t4030073918 * get_address_of_rightRotation_37() { return &___rightRotation_37; }
	inline void set_rightRotation_37(Quaternion_t4030073918  value)
	{
		___rightRotation_37 = value;
	}

	inline static int32_t get_offset_of_lookTimer_38() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___lookTimer_38)); }
	inline float get_lookTimer_38() const { return ___lookTimer_38; }
	inline float* get_address_of_lookTimer_38() { return &___lookTimer_38; }
	inline void set_lookTimer_38(float value)
	{
		___lookTimer_38 = value;
	}

	inline static int32_t get_offset_of_randomAngle_39() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___randomAngle_39)); }
	inline Quaternion_t4030073918  get_randomAngle_39() const { return ___randomAngle_39; }
	inline Quaternion_t4030073918 * get_address_of_randomAngle_39() { return &___randomAngle_39; }
	inline void set_randomAngle_39(Quaternion_t4030073918  value)
	{
		___randomAngle_39 = value;
	}

	inline static int32_t get_offset_of_randomBlend_40() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___randomBlend_40)); }
	inline Vector2_t2243707579  get_randomBlend_40() const { return ___randomBlend_40; }
	inline Vector2_t2243707579 * get_address_of_randomBlend_40() { return &___randomBlend_40; }
	inline void set_randomBlend_40(Vector2_t2243707579  value)
	{
		___randomBlend_40 = value;
	}

	inline static int32_t get_offset_of_target_41() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___target_41)); }
	inline Transform_t3275118058 * get_target_41() const { return ___target_41; }
	inline Transform_t3275118058 ** get_address_of_target_41() { return &___target_41; }
	inline void set_target_41(Transform_t3275118058 * value)
	{
		___target_41 = value;
		Il2CppCodeGenWriteBarrier(&___target_41, value);
	}

	inline static int32_t get_offset_of_leftTargetAngle_42() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___leftTargetAngle_42)); }
	inline Quaternion_t4030073918  get_leftTargetAngle_42() const { return ___leftTargetAngle_42; }
	inline Quaternion_t4030073918 * get_address_of_leftTargetAngle_42() { return &___leftTargetAngle_42; }
	inline void set_leftTargetAngle_42(Quaternion_t4030073918  value)
	{
		___leftTargetAngle_42 = value;
	}

	inline static int32_t get_offset_of_rightTargetAngle_43() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___rightTargetAngle_43)); }
	inline Quaternion_t4030073918  get_rightTargetAngle_43() const { return ___rightTargetAngle_43; }
	inline Quaternion_t4030073918 * get_address_of_rightTargetAngle_43() { return &___rightTargetAngle_43; }
	inline void set_rightTargetAngle_43(Quaternion_t4030073918  value)
	{
		___rightTargetAngle_43 = value;
	}

	inline static int32_t get_offset_of_markedTargets_44() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___markedTargets_44)); }
	inline TransformU5BU5D_t3764228911* get_markedTargets_44() const { return ___markedTargets_44; }
	inline TransformU5BU5D_t3764228911** get_address_of_markedTargets_44() { return &___markedTargets_44; }
	inline void set_markedTargets_44(TransformU5BU5D_t3764228911* value)
	{
		___markedTargets_44 = value;
		Il2CppCodeGenWriteBarrier(&___markedTargets_44, value);
	}

	inline static int32_t get_offset_of_boneShapes_45() { return static_cast<int32_t>(offsetof(EyeController_t2332092255, ___boneShapes_45)); }
	inline Dictionary_2_t1970018705 * get_boneShapes_45() const { return ___boneShapes_45; }
	inline Dictionary_2_t1970018705 ** get_address_of_boneShapes_45() { return &___boneShapes_45; }
	inline void set_boneShapes_45(Dictionary_2_t1970018705 * value)
	{
		___boneShapes_45 = value;
		Il2CppCodeGenWriteBarrier(&___boneShapes_45, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
