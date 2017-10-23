#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_ComponentModel_DescriptionAttribute3207779672.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUETools.Codecs.SRDescriptionAttribute
struct  SRDescriptionAttribute_t781047183  : public DescriptionAttribute_t3207779672
{
public:
	// System.Boolean CUETools.Codecs.SRDescriptionAttribute::localized
	bool ___localized_2;
	// System.Type CUETools.Codecs.SRDescriptionAttribute::SR
	Type_t * ___SR_3;

public:
	inline static int32_t get_offset_of_localized_2() { return static_cast<int32_t>(offsetof(SRDescriptionAttribute_t781047183, ___localized_2)); }
	inline bool get_localized_2() const { return ___localized_2; }
	inline bool* get_address_of_localized_2() { return &___localized_2; }
	inline void set_localized_2(bool value)
	{
		___localized_2 = value;
	}

	inline static int32_t get_offset_of_SR_3() { return static_cast<int32_t>(offsetof(SRDescriptionAttribute_t781047183, ___SR_3)); }
	inline Type_t * get_SR_3() const { return ___SR_3; }
	inline Type_t ** get_address_of_SR_3() { return &___SR_3; }
	inline void set_SR_3(Type_t * value)
	{
		___SR_3 = value;
		Il2CppCodeGenWriteBarrier(&___SR_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
