#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct  Settings_t1168376358 
{
public:
	// UnityEngine.Texture2D UnityEngine.PostProcessing.ChromaticAberrationModel/Settings::spectralTexture
	Texture2D_t3542995729 * ___spectralTexture_0;
	// System.Single UnityEngine.PostProcessing.ChromaticAberrationModel/Settings::intensity
	float ___intensity_1;

public:
	inline static int32_t get_offset_of_spectralTexture_0() { return static_cast<int32_t>(offsetof(Settings_t1168376358, ___spectralTexture_0)); }
	inline Texture2D_t3542995729 * get_spectralTexture_0() const { return ___spectralTexture_0; }
	inline Texture2D_t3542995729 ** get_address_of_spectralTexture_0() { return &___spectralTexture_0; }
	inline void set_spectralTexture_0(Texture2D_t3542995729 * value)
	{
		___spectralTexture_0 = value;
		Il2CppCodeGenWriteBarrier(&___spectralTexture_0, value);
	}

	inline static int32_t get_offset_of_intensity_1() { return static_cast<int32_t>(offsetof(Settings_t1168376358, ___intensity_1)); }
	inline float get_intensity_1() const { return ___intensity_1; }
	inline float* get_address_of_intensity_1() { return &___intensity_1; }
	inline void set_intensity_1(float value)
	{
		___intensity_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct Settings_t1168376358_marshaled_pinvoke
{
	Texture2D_t3542995729 * ___spectralTexture_0;
	float ___intensity_1;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ChromaticAberrationModel/Settings
struct Settings_t1168376358_marshaled_com
{
	Texture2D_t3542995729 * ___spectralTexture_0;
	float ___intensity_1;
};
