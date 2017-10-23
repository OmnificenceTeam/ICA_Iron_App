#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,Views.View>
struct Dictionary_2_t314690255;
// Views.View
struct View_t2694878289;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Views.ViewManager
struct  ViewManager_t3955390442  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Views.View> Views.ViewManager::views
	Dictionary_2_t314690255 * ___views_0;
	// Views.View Views.ViewManager::activeView
	Il2CppObject * ___activeView_1;

public:
	inline static int32_t get_offset_of_views_0() { return static_cast<int32_t>(offsetof(ViewManager_t3955390442, ___views_0)); }
	inline Dictionary_2_t314690255 * get_views_0() const { return ___views_0; }
	inline Dictionary_2_t314690255 ** get_address_of_views_0() { return &___views_0; }
	inline void set_views_0(Dictionary_2_t314690255 * value)
	{
		___views_0 = value;
		Il2CppCodeGenWriteBarrier(&___views_0, value);
	}

	inline static int32_t get_offset_of_activeView_1() { return static_cast<int32_t>(offsetof(ViewManager_t3955390442, ___activeView_1)); }
	inline Il2CppObject * get_activeView_1() const { return ___activeView_1; }
	inline Il2CppObject ** get_address_of_activeView_1() { return &___activeView_1; }
	inline void set_activeView_1(Il2CppObject * value)
	{
		___activeView_1 = value;
		Il2CppCodeGenWriteBarrier(&___activeView_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
