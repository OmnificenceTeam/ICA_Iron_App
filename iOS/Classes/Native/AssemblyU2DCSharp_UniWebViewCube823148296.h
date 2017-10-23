#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UniWebDemo
struct UniWebDemo_t3466331651;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewCube
struct  UniWebViewCube_t823148296  : public MonoBehaviour_t1158329972
{
public:
	// UniWebDemo UniWebViewCube::webViewDemo
	UniWebDemo_t3466331651 * ___webViewDemo_2;
	// System.Single UniWebViewCube::startTime
	float ___startTime_3;
	// System.Boolean UniWebViewCube::firstHit
	bool ___firstHit_4;

public:
	inline static int32_t get_offset_of_webViewDemo_2() { return static_cast<int32_t>(offsetof(UniWebViewCube_t823148296, ___webViewDemo_2)); }
	inline UniWebDemo_t3466331651 * get_webViewDemo_2() const { return ___webViewDemo_2; }
	inline UniWebDemo_t3466331651 ** get_address_of_webViewDemo_2() { return &___webViewDemo_2; }
	inline void set_webViewDemo_2(UniWebDemo_t3466331651 * value)
	{
		___webViewDemo_2 = value;
		Il2CppCodeGenWriteBarrier(&___webViewDemo_2, value);
	}

	inline static int32_t get_offset_of_startTime_3() { return static_cast<int32_t>(offsetof(UniWebViewCube_t823148296, ___startTime_3)); }
	inline float get_startTime_3() const { return ___startTime_3; }
	inline float* get_address_of_startTime_3() { return &___startTime_3; }
	inline void set_startTime_3(float value)
	{
		___startTime_3 = value;
	}

	inline static int32_t get_offset_of_firstHit_4() { return static_cast<int32_t>(offsetof(UniWebViewCube_t823148296, ___firstHit_4)); }
	inline bool get_firstHit_4() const { return ___firstHit_4; }
	inline bool* get_address_of_firstHit_4() { return &___firstHit_4; }
	inline void set_firstHit_4(bool value)
	{
		___firstHit_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
