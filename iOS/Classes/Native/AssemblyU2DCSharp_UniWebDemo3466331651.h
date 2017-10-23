#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.TextMesh
struct TextMesh_t1641806576;
// UniWebView
struct UniWebView_t3614141785;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebDemo
struct  UniWebDemo_t3466331651  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UniWebDemo::cubePrefab
	GameObject_t1756533147 * ___cubePrefab_2;
	// UnityEngine.TextMesh UniWebDemo::tipTextMesh
	TextMesh_t1641806576 * ___tipTextMesh_3;
	// UniWebView UniWebDemo::_webView
	UniWebView_t3614141785 * ____webView_4;
	// System.String UniWebDemo::_errorMessage
	String_t* ____errorMessage_5;
	// UnityEngine.GameObject UniWebDemo::_cube
	GameObject_t1756533147 * ____cube_6;
	// UnityEngine.Vector3 UniWebDemo::_moveVector
	Vector3_t2243707580  ____moveVector_7;

public:
	inline static int32_t get_offset_of_cubePrefab_2() { return static_cast<int32_t>(offsetof(UniWebDemo_t3466331651, ___cubePrefab_2)); }
	inline GameObject_t1756533147 * get_cubePrefab_2() const { return ___cubePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_cubePrefab_2() { return &___cubePrefab_2; }
	inline void set_cubePrefab_2(GameObject_t1756533147 * value)
	{
		___cubePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___cubePrefab_2, value);
	}

	inline static int32_t get_offset_of_tipTextMesh_3() { return static_cast<int32_t>(offsetof(UniWebDemo_t3466331651, ___tipTextMesh_3)); }
	inline TextMesh_t1641806576 * get_tipTextMesh_3() const { return ___tipTextMesh_3; }
	inline TextMesh_t1641806576 ** get_address_of_tipTextMesh_3() { return &___tipTextMesh_3; }
	inline void set_tipTextMesh_3(TextMesh_t1641806576 * value)
	{
		___tipTextMesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___tipTextMesh_3, value);
	}

	inline static int32_t get_offset_of__webView_4() { return static_cast<int32_t>(offsetof(UniWebDemo_t3466331651, ____webView_4)); }
	inline UniWebView_t3614141785 * get__webView_4() const { return ____webView_4; }
	inline UniWebView_t3614141785 ** get_address_of__webView_4() { return &____webView_4; }
	inline void set__webView_4(UniWebView_t3614141785 * value)
	{
		____webView_4 = value;
		Il2CppCodeGenWriteBarrier(&____webView_4, value);
	}

	inline static int32_t get_offset_of__errorMessage_5() { return static_cast<int32_t>(offsetof(UniWebDemo_t3466331651, ____errorMessage_5)); }
	inline String_t* get__errorMessage_5() const { return ____errorMessage_5; }
	inline String_t** get_address_of__errorMessage_5() { return &____errorMessage_5; }
	inline void set__errorMessage_5(String_t* value)
	{
		____errorMessage_5 = value;
		Il2CppCodeGenWriteBarrier(&____errorMessage_5, value);
	}

	inline static int32_t get_offset_of__cube_6() { return static_cast<int32_t>(offsetof(UniWebDemo_t3466331651, ____cube_6)); }
	inline GameObject_t1756533147 * get__cube_6() const { return ____cube_6; }
	inline GameObject_t1756533147 ** get_address_of__cube_6() { return &____cube_6; }
	inline void set__cube_6(GameObject_t1756533147 * value)
	{
		____cube_6 = value;
		Il2CppCodeGenWriteBarrier(&____cube_6, value);
	}

	inline static int32_t get_offset_of__moveVector_7() { return static_cast<int32_t>(offsetof(UniWebDemo_t3466331651, ____moveVector_7)); }
	inline Vector3_t2243707580  get__moveVector_7() const { return ____moveVector_7; }
	inline Vector3_t2243707580 * get_address_of__moveVector_7() { return &____moveVector_7; }
	inline void set__moveVector_7(Vector3_t2243707580  value)
	{
		____moveVector_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
