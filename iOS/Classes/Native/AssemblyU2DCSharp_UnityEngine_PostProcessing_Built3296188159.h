#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Builti986082665.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Builti587440522.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Built1700962583.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings
struct  Settings_t3296188159 
{
public:
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/Mode UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::mode
	int32_t ___mode_0;
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/DepthSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::depth
	DepthSettings_t587440522  ___depth_1;
	// UnityEngine.PostProcessing.BuiltinDebugViewsModel/MotionVectorsSettings UnityEngine.PostProcessing.BuiltinDebugViewsModel/Settings::motionVectors
	MotionVectorsSettings_t1700962583  ___motionVectors_2;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(Settings_t3296188159, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_depth_1() { return static_cast<int32_t>(offsetof(Settings_t3296188159, ___depth_1)); }
	inline DepthSettings_t587440522  get_depth_1() const { return ___depth_1; }
	inline DepthSettings_t587440522 * get_address_of_depth_1() { return &___depth_1; }
	inline void set_depth_1(DepthSettings_t587440522  value)
	{
		___depth_1 = value;
	}

	inline static int32_t get_offset_of_motionVectors_2() { return static_cast<int32_t>(offsetof(Settings_t3296188159, ___motionVectors_2)); }
	inline MotionVectorsSettings_t1700962583  get_motionVectors_2() const { return ___motionVectors_2; }
	inline MotionVectorsSettings_t1700962583 * get_address_of_motionVectors_2() { return &___motionVectors_2; }
	inline void set_motionVectors_2(MotionVectorsSettings_t1700962583  value)
	{
		___motionVectors_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
