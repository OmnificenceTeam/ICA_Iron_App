#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GA.GoogleAnalytics
struct  GoogleAnalytics_t348762453  : public Il2CppObject
{
public:

public:
};

struct GoogleAnalytics_t348762453_StaticFields
{
public:
	// System.Boolean GA.GoogleAnalytics::isInitialized
	bool ___isInitialized_0;
	// System.Object GA.GoogleAnalytics::sync
	Il2CppObject * ___sync_1;

public:
	inline static int32_t get_offset_of_isInitialized_0() { return static_cast<int32_t>(offsetof(GoogleAnalytics_t348762453_StaticFields, ___isInitialized_0)); }
	inline bool get_isInitialized_0() const { return ___isInitialized_0; }
	inline bool* get_address_of_isInitialized_0() { return &___isInitialized_0; }
	inline void set_isInitialized_0(bool value)
	{
		___isInitialized_0 = value;
	}

	inline static int32_t get_offset_of_sync_1() { return static_cast<int32_t>(offsetof(GoogleAnalytics_t348762453_StaticFields, ___sync_1)); }
	inline Il2CppObject * get_sync_1() const { return ___sync_1; }
	inline Il2CppObject ** get_address_of_sync_1() { return &___sync_1; }
	inline void set_sync_1(Il2CppObject * value)
	{
		___sync_1 = value;
		Il2CppCodeGenWriteBarrier(&___sync_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
