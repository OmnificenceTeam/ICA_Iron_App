#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_PostP2055598132.h"
#include "AssemblyU2DCSharp_UnityEngine_PostProcessing_Color1594407042.h"

// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel
struct  ColorGradingModel_t2152456580  : public PostProcessingModel_t2055598132
{
public:
	// UnityEngine.PostProcessing.ColorGradingModel/Settings UnityEngine.PostProcessing.ColorGradingModel::m_Settings
	Settings_t1594407042  ___m_Settings_1;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel::<isDirty>k__BackingField
	bool ___U3CisDirtyU3Ek__BackingField_2;
	// UnityEngine.RenderTexture UnityEngine.PostProcessing.ColorGradingModel::<bakedLut>k__BackingField
	RenderTexture_t2666733923 * ___U3CbakedLutU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_m_Settings_1() { return static_cast<int32_t>(offsetof(ColorGradingModel_t2152456580, ___m_Settings_1)); }
	inline Settings_t1594407042  get_m_Settings_1() const { return ___m_Settings_1; }
	inline Settings_t1594407042 * get_address_of_m_Settings_1() { return &___m_Settings_1; }
	inline void set_m_Settings_1(Settings_t1594407042  value)
	{
		___m_Settings_1 = value;
	}

	inline static int32_t get_offset_of_U3CisDirtyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ColorGradingModel_t2152456580, ___U3CisDirtyU3Ek__BackingField_2)); }
	inline bool get_U3CisDirtyU3Ek__BackingField_2() const { return ___U3CisDirtyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CisDirtyU3Ek__BackingField_2() { return &___U3CisDirtyU3Ek__BackingField_2; }
	inline void set_U3CisDirtyU3Ek__BackingField_2(bool value)
	{
		___U3CisDirtyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CbakedLutU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ColorGradingModel_t2152456580, ___U3CbakedLutU3Ek__BackingField_3)); }
	inline RenderTexture_t2666733923 * get_U3CbakedLutU3Ek__BackingField_3() const { return ___U3CbakedLutU3Ek__BackingField_3; }
	inline RenderTexture_t2666733923 ** get_address_of_U3CbakedLutU3Ek__BackingField_3() { return &___U3CbakedLutU3Ek__BackingField_3; }
	inline void set_U3CbakedLutU3Ek__BackingField_3(RenderTexture_t2666733923 * value)
	{
		___U3CbakedLutU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CbakedLutU3Ek__BackingField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
