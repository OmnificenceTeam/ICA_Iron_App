#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Depth1986613730.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct  Settings_t380900351 
{
public:
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::focusDistance
	float ___focusDistance_0;
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::aperture
	float ___aperture_1;
	// System.Single UnityEngine.PostProcessing.DepthOfFieldModel/Settings::focalLength
	float ___focalLength_2;
	// System.Boolean UnityEngine.PostProcessing.DepthOfFieldModel/Settings::useCameraFov
	bool ___useCameraFov_3;
	// UnityEngine.PostProcessing.DepthOfFieldModel/KernelSize UnityEngine.PostProcessing.DepthOfFieldModel/Settings::kernelSize
	int32_t ___kernelSize_4;

public:
	inline static int32_t get_offset_of_focusDistance_0() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___focusDistance_0)); }
	inline float get_focusDistance_0() const { return ___focusDistance_0; }
	inline float* get_address_of_focusDistance_0() { return &___focusDistance_0; }
	inline void set_focusDistance_0(float value)
	{
		___focusDistance_0 = value;
	}

	inline static int32_t get_offset_of_aperture_1() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___aperture_1)); }
	inline float get_aperture_1() const { return ___aperture_1; }
	inline float* get_address_of_aperture_1() { return &___aperture_1; }
	inline void set_aperture_1(float value)
	{
		___aperture_1 = value;
	}

	inline static int32_t get_offset_of_focalLength_2() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___focalLength_2)); }
	inline float get_focalLength_2() const { return ___focalLength_2; }
	inline float* get_address_of_focalLength_2() { return &___focalLength_2; }
	inline void set_focalLength_2(float value)
	{
		___focalLength_2 = value;
	}

	inline static int32_t get_offset_of_useCameraFov_3() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___useCameraFov_3)); }
	inline bool get_useCameraFov_3() const { return ___useCameraFov_3; }
	inline bool* get_address_of_useCameraFov_3() { return &___useCameraFov_3; }
	inline void set_useCameraFov_3(bool value)
	{
		___useCameraFov_3 = value;
	}

	inline static int32_t get_offset_of_kernelSize_4() { return static_cast<int32_t>(offsetof(Settings_t380900351, ___kernelSize_4)); }
	inline int32_t get_kernelSize_4() const { return ___kernelSize_4; }
	inline int32_t* get_address_of_kernelSize_4() { return &___kernelSize_4; }
	inline void set_kernelSize_4(int32_t value)
	{
		___kernelSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct Settings_t380900351_marshaled_pinvoke
{
	float ___focusDistance_0;
	float ___aperture_1;
	float ___focalLength_2;
	int32_t ___useCameraFov_3;
	int32_t ___kernelSize_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.DepthOfFieldModel/Settings
struct Settings_t380900351_marshaled_com
{
	float ___focusDistance_0;
	float ___aperture_1;
	float ___focalLength_2;
	int32_t ___useCameraFov_3;
	int32_t ___kernelSize_4;
};
