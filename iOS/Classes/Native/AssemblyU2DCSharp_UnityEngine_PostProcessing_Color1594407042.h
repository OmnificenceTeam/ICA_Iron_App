#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Color1819353678.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Color4041566386.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Color3706030562.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Color2818463061.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Color2104131702.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/Settings
struct  Settings_t1594407042 
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/TonemappingSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::tonemapping
	TonemappingSettings_t1819353678  ___tonemapping_0;
	// UnityEngine.PostProcessing.ColorGradingModel/BasicSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::basic
	BasicSettings_t4041566386  ___basic_1;
	// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::channelMixer
	ChannelMixerSettings_t3706030562  ___channelMixer_2;
	// UnityEngine.PostProcessing.ColorGradingModel/ColorWheelsSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::colorWheels
	ColorWheelsSettings_t2818463061  ___colorWheels_3;
	// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings UnityEngine.PostProcessing.ColorGradingModel/Settings::curves
	CurvesSettings_t2104131702  ___curves_4;

public:
	inline static int32_t get_offset_of_tonemapping_0() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___tonemapping_0)); }
	inline TonemappingSettings_t1819353678  get_tonemapping_0() const { return ___tonemapping_0; }
	inline TonemappingSettings_t1819353678 * get_address_of_tonemapping_0() { return &___tonemapping_0; }
	inline void set_tonemapping_0(TonemappingSettings_t1819353678  value)
	{
		___tonemapping_0 = value;
	}

	inline static int32_t get_offset_of_basic_1() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___basic_1)); }
	inline BasicSettings_t4041566386  get_basic_1() const { return ___basic_1; }
	inline BasicSettings_t4041566386 * get_address_of_basic_1() { return &___basic_1; }
	inline void set_basic_1(BasicSettings_t4041566386  value)
	{
		___basic_1 = value;
	}

	inline static int32_t get_offset_of_channelMixer_2() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___channelMixer_2)); }
	inline ChannelMixerSettings_t3706030562  get_channelMixer_2() const { return ___channelMixer_2; }
	inline ChannelMixerSettings_t3706030562 * get_address_of_channelMixer_2() { return &___channelMixer_2; }
	inline void set_channelMixer_2(ChannelMixerSettings_t3706030562  value)
	{
		___channelMixer_2 = value;
	}

	inline static int32_t get_offset_of_colorWheels_3() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___colorWheels_3)); }
	inline ColorWheelsSettings_t2818463061  get_colorWheels_3() const { return ___colorWheels_3; }
	inline ColorWheelsSettings_t2818463061 * get_address_of_colorWheels_3() { return &___colorWheels_3; }
	inline void set_colorWheels_3(ColorWheelsSettings_t2818463061  value)
	{
		___colorWheels_3 = value;
	}

	inline static int32_t get_offset_of_curves_4() { return static_cast<int32_t>(offsetof(Settings_t1594407042, ___curves_4)); }
	inline CurvesSettings_t2104131702  get_curves_4() const { return ___curves_4; }
	inline CurvesSettings_t2104131702 * get_address_of_curves_4() { return &___curves_4; }
	inline void set_curves_4(CurvesSettings_t2104131702  value)
	{
		___curves_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ColorGradingModel/Settings
struct Settings_t1594407042_marshaled_pinvoke
{
	TonemappingSettings_t1819353678  ___tonemapping_0;
	BasicSettings_t4041566386  ___basic_1;
	ChannelMixerSettings_t3706030562  ___channelMixer_2;
	ColorWheelsSettings_t2818463061  ___colorWheels_3;
	CurvesSettings_t2104131702_marshaled_pinvoke ___curves_4;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ColorGradingModel/Settings
struct Settings_t1594407042_marshaled_com
{
	TonemappingSettings_t1819353678  ___tonemapping_0;
	BasicSettings_t4041566386  ___basic_1;
	ChannelMixerSettings_t3706030562  ___channelMixer_2;
	ColorWheelsSettings_t2818463061  ___colorWheels_3;
	CurvesSettings_t2104131702_marshaled_com ___curves_4;
};
