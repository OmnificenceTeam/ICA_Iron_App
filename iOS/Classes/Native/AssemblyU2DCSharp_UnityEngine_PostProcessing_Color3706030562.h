#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings
struct  ChannelMixerSettings_t3706030562 
{
public:
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::red
	Vector3_t2243707580  ___red_0;
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::green
	Vector3_t2243707580  ___green_1;
	// UnityEngine.Vector3 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::blue
	Vector3_t2243707580  ___blue_2;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/ChannelMixerSettings::currentEditingChannel
	int32_t ___currentEditingChannel_3;

public:
	inline static int32_t get_offset_of_red_0() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t3706030562, ___red_0)); }
	inline Vector3_t2243707580  get_red_0() const { return ___red_0; }
	inline Vector3_t2243707580 * get_address_of_red_0() { return &___red_0; }
	inline void set_red_0(Vector3_t2243707580  value)
	{
		___red_0 = value;
	}

	inline static int32_t get_offset_of_green_1() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t3706030562, ___green_1)); }
	inline Vector3_t2243707580  get_green_1() const { return ___green_1; }
	inline Vector3_t2243707580 * get_address_of_green_1() { return &___green_1; }
	inline void set_green_1(Vector3_t2243707580  value)
	{
		___green_1 = value;
	}

	inline static int32_t get_offset_of_blue_2() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t3706030562, ___blue_2)); }
	inline Vector3_t2243707580  get_blue_2() const { return ___blue_2; }
	inline Vector3_t2243707580 * get_address_of_blue_2() { return &___blue_2; }
	inline void set_blue_2(Vector3_t2243707580  value)
	{
		___blue_2 = value;
	}

	inline static int32_t get_offset_of_currentEditingChannel_3() { return static_cast<int32_t>(offsetof(ChannelMixerSettings_t3706030562, ___currentEditingChannel_3)); }
	inline int32_t get_currentEditingChannel_3() const { return ___currentEditingChannel_3; }
	inline int32_t* get_address_of_currentEditingChannel_3() { return &___currentEditingChannel_3; }
	inline void set_currentEditingChannel_3(int32_t value)
	{
		___currentEditingChannel_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
