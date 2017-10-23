#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.PostProcessing.ColorGradingCurve
struct ColorGradingCurve_t579276466;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct  CurvesSettings_t2104131702 
{
public:
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::master
	ColorGradingCurve_t579276466 * ___master_0;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::red
	ColorGradingCurve_t579276466 * ___red_1;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::green
	ColorGradingCurve_t579276466 * ___green_2;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::blue
	ColorGradingCurve_t579276466 * ___blue_3;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::hueVShue
	ColorGradingCurve_t579276466 * ___hueVShue_4;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::hueVSsat
	ColorGradingCurve_t579276466 * ___hueVSsat_5;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::satVSsat
	ColorGradingCurve_t579276466 * ___satVSsat_6;
	// UnityEngine.PostProcessing.ColorGradingCurve UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::lumVSsat
	ColorGradingCurve_t579276466 * ___lumVSsat_7;
	// System.Int32 UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurrentEditingCurve
	int32_t ___e_CurrentEditingCurve_8;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveY
	bool ___e_CurveY_9;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveR
	bool ___e_CurveR_10;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveG
	bool ___e_CurveG_11;
	// System.Boolean UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings::e_CurveB
	bool ___e_CurveB_12;

public:
	inline static int32_t get_offset_of_master_0() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___master_0)); }
	inline ColorGradingCurve_t579276466 * get_master_0() const { return ___master_0; }
	inline ColorGradingCurve_t579276466 ** get_address_of_master_0() { return &___master_0; }
	inline void set_master_0(ColorGradingCurve_t579276466 * value)
	{
		___master_0 = value;
		Il2CppCodeGenWriteBarrier(&___master_0, value);
	}

	inline static int32_t get_offset_of_red_1() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___red_1)); }
	inline ColorGradingCurve_t579276466 * get_red_1() const { return ___red_1; }
	inline ColorGradingCurve_t579276466 ** get_address_of_red_1() { return &___red_1; }
	inline void set_red_1(ColorGradingCurve_t579276466 * value)
	{
		___red_1 = value;
		Il2CppCodeGenWriteBarrier(&___red_1, value);
	}

	inline static int32_t get_offset_of_green_2() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___green_2)); }
	inline ColorGradingCurve_t579276466 * get_green_2() const { return ___green_2; }
	inline ColorGradingCurve_t579276466 ** get_address_of_green_2() { return &___green_2; }
	inline void set_green_2(ColorGradingCurve_t579276466 * value)
	{
		___green_2 = value;
		Il2CppCodeGenWriteBarrier(&___green_2, value);
	}

	inline static int32_t get_offset_of_blue_3() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___blue_3)); }
	inline ColorGradingCurve_t579276466 * get_blue_3() const { return ___blue_3; }
	inline ColorGradingCurve_t579276466 ** get_address_of_blue_3() { return &___blue_3; }
	inline void set_blue_3(ColorGradingCurve_t579276466 * value)
	{
		___blue_3 = value;
		Il2CppCodeGenWriteBarrier(&___blue_3, value);
	}

	inline static int32_t get_offset_of_hueVShue_4() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___hueVShue_4)); }
	inline ColorGradingCurve_t579276466 * get_hueVShue_4() const { return ___hueVShue_4; }
	inline ColorGradingCurve_t579276466 ** get_address_of_hueVShue_4() { return &___hueVShue_4; }
	inline void set_hueVShue_4(ColorGradingCurve_t579276466 * value)
	{
		___hueVShue_4 = value;
		Il2CppCodeGenWriteBarrier(&___hueVShue_4, value);
	}

	inline static int32_t get_offset_of_hueVSsat_5() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___hueVSsat_5)); }
	inline ColorGradingCurve_t579276466 * get_hueVSsat_5() const { return ___hueVSsat_5; }
	inline ColorGradingCurve_t579276466 ** get_address_of_hueVSsat_5() { return &___hueVSsat_5; }
	inline void set_hueVSsat_5(ColorGradingCurve_t579276466 * value)
	{
		___hueVSsat_5 = value;
		Il2CppCodeGenWriteBarrier(&___hueVSsat_5, value);
	}

	inline static int32_t get_offset_of_satVSsat_6() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___satVSsat_6)); }
	inline ColorGradingCurve_t579276466 * get_satVSsat_6() const { return ___satVSsat_6; }
	inline ColorGradingCurve_t579276466 ** get_address_of_satVSsat_6() { return &___satVSsat_6; }
	inline void set_satVSsat_6(ColorGradingCurve_t579276466 * value)
	{
		___satVSsat_6 = value;
		Il2CppCodeGenWriteBarrier(&___satVSsat_6, value);
	}

	inline static int32_t get_offset_of_lumVSsat_7() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___lumVSsat_7)); }
	inline ColorGradingCurve_t579276466 * get_lumVSsat_7() const { return ___lumVSsat_7; }
	inline ColorGradingCurve_t579276466 ** get_address_of_lumVSsat_7() { return &___lumVSsat_7; }
	inline void set_lumVSsat_7(ColorGradingCurve_t579276466 * value)
	{
		___lumVSsat_7 = value;
		Il2CppCodeGenWriteBarrier(&___lumVSsat_7, value);
	}

	inline static int32_t get_offset_of_e_CurrentEditingCurve_8() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurrentEditingCurve_8)); }
	inline int32_t get_e_CurrentEditingCurve_8() const { return ___e_CurrentEditingCurve_8; }
	inline int32_t* get_address_of_e_CurrentEditingCurve_8() { return &___e_CurrentEditingCurve_8; }
	inline void set_e_CurrentEditingCurve_8(int32_t value)
	{
		___e_CurrentEditingCurve_8 = value;
	}

	inline static int32_t get_offset_of_e_CurveY_9() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurveY_9)); }
	inline bool get_e_CurveY_9() const { return ___e_CurveY_9; }
	inline bool* get_address_of_e_CurveY_9() { return &___e_CurveY_9; }
	inline void set_e_CurveY_9(bool value)
	{
		___e_CurveY_9 = value;
	}

	inline static int32_t get_offset_of_e_CurveR_10() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurveR_10)); }
	inline bool get_e_CurveR_10() const { return ___e_CurveR_10; }
	inline bool* get_address_of_e_CurveR_10() { return &___e_CurveR_10; }
	inline void set_e_CurveR_10(bool value)
	{
		___e_CurveR_10 = value;
	}

	inline static int32_t get_offset_of_e_CurveG_11() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurveG_11)); }
	inline bool get_e_CurveG_11() const { return ___e_CurveG_11; }
	inline bool* get_address_of_e_CurveG_11() { return &___e_CurveG_11; }
	inline void set_e_CurveG_11(bool value)
	{
		___e_CurveG_11 = value;
	}

	inline static int32_t get_offset_of_e_CurveB_12() { return static_cast<int32_t>(offsetof(CurvesSettings_t2104131702, ___e_CurveB_12)); }
	inline bool get_e_CurveB_12() const { return ___e_CurveB_12; }
	inline bool* get_address_of_e_CurveB_12() { return &___e_CurveB_12; }
	inline void set_e_CurveB_12(bool value)
	{
		___e_CurveB_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_t2104131702_marshaled_pinvoke
{
	ColorGradingCurve_t579276466 * ___master_0;
	ColorGradingCurve_t579276466 * ___red_1;
	ColorGradingCurve_t579276466 * ___green_2;
	ColorGradingCurve_t579276466 * ___blue_3;
	ColorGradingCurve_t579276466 * ___hueVShue_4;
	ColorGradingCurve_t579276466 * ___hueVSsat_5;
	ColorGradingCurve_t579276466 * ___satVSsat_6;
	ColorGradingCurve_t579276466 * ___lumVSsat_7;
	int32_t ___e_CurrentEditingCurve_8;
	int32_t ___e_CurveY_9;
	int32_t ___e_CurveR_10;
	int32_t ___e_CurveG_11;
	int32_t ___e_CurveB_12;
};
// Native definition for COM marshalling of UnityEngine.PostProcessing.ColorGradingModel/CurvesSettings
struct CurvesSettings_t2104131702_marshaled_com
{
	ColorGradingCurve_t579276466 * ___master_0;
	ColorGradingCurve_t579276466 * ___red_1;
	ColorGradingCurve_t579276466 * ___green_2;
	ColorGradingCurve_t579276466 * ___blue_3;
	ColorGradingCurve_t579276466 * ___hueVShue_4;
	ColorGradingCurve_t579276466 * ___hueVSsat_5;
	ColorGradingCurve_t579276466 * ___satVSsat_6;
	ColorGradingCurve_t579276466 * ___lumVSsat_7;
	int32_t ___e_CurrentEditingCurve_8;
	int32_t ___e_CurveY_9;
	int32_t ___e_CurveR_10;
	int32_t ___e_CurveG_11;
	int32_t ___e_CurveB_12;
};
