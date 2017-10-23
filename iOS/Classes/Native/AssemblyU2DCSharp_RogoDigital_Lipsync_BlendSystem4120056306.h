#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// RogoDigital.Lipsync.BlendSystemUser[]
struct BlendSystemUserU5BU5D_t1096613650;
// RogoDigital.Lipsync.BlendSystem/BlendSystemGenericDelegate
struct BlendSystemGenericDelegate_t680308408;
// System.Collections.Generic.List`1<RogoDigital.Lipsync.Blendable>
struct List_1_t2695172897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RogoDigital.Lipsync.BlendSystem
struct  BlendSystem_t4120056306  : public MonoBehaviour_t1158329972
{
public:
	// System.String RogoDigital.Lipsync.BlendSystem::blendableDisplayName
	String_t* ___blendableDisplayName_2;
	// System.String RogoDigital.Lipsync.BlendSystem::blendableDisplayNamePlural
	String_t* ___blendableDisplayNamePlural_3;
	// System.String RogoDigital.Lipsync.BlendSystem::noBlendablesMessage
	String_t* ___noBlendablesMessage_4;
	// System.String RogoDigital.Lipsync.BlendSystem::notReadyMessage
	String_t* ___notReadyMessage_5;
	// System.Single RogoDigital.Lipsync.BlendSystem::blendRangeLow
	float ___blendRangeLow_6;
	// System.Single RogoDigital.Lipsync.BlendSystem::blendRangeHigh
	float ___blendRangeHigh_7;
	// System.Boolean RogoDigital.Lipsync.BlendSystem::allowResyncing
	bool ___allowResyncing_8;
	// System.Boolean RogoDigital.Lipsync.BlendSystem::isReady
	bool ___isReady_9;
	// RogoDigital.Lipsync.BlendSystemUser[] RogoDigital.Lipsync.BlendSystem::users
	BlendSystemUserU5BU5D_t1096613650* ___users_10;
	// RogoDigital.Lipsync.BlendSystem/BlendSystemGenericDelegate RogoDigital.Lipsync.BlendSystem::onBlendablesChanged
	BlendSystemGenericDelegate_t680308408 * ___onBlendablesChanged_11;
	// System.Collections.Generic.List`1<RogoDigital.Lipsync.Blendable> RogoDigital.Lipsync.BlendSystem::_blendables
	List_1_t2695172897 * ____blendables_12;

public:
	inline static int32_t get_offset_of_blendableDisplayName_2() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___blendableDisplayName_2)); }
	inline String_t* get_blendableDisplayName_2() const { return ___blendableDisplayName_2; }
	inline String_t** get_address_of_blendableDisplayName_2() { return &___blendableDisplayName_2; }
	inline void set_blendableDisplayName_2(String_t* value)
	{
		___blendableDisplayName_2 = value;
		Il2CppCodeGenWriteBarrier(&___blendableDisplayName_2, value);
	}

	inline static int32_t get_offset_of_blendableDisplayNamePlural_3() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___blendableDisplayNamePlural_3)); }
	inline String_t* get_blendableDisplayNamePlural_3() const { return ___blendableDisplayNamePlural_3; }
	inline String_t** get_address_of_blendableDisplayNamePlural_3() { return &___blendableDisplayNamePlural_3; }
	inline void set_blendableDisplayNamePlural_3(String_t* value)
	{
		___blendableDisplayNamePlural_3 = value;
		Il2CppCodeGenWriteBarrier(&___blendableDisplayNamePlural_3, value);
	}

	inline static int32_t get_offset_of_noBlendablesMessage_4() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___noBlendablesMessage_4)); }
	inline String_t* get_noBlendablesMessage_4() const { return ___noBlendablesMessage_4; }
	inline String_t** get_address_of_noBlendablesMessage_4() { return &___noBlendablesMessage_4; }
	inline void set_noBlendablesMessage_4(String_t* value)
	{
		___noBlendablesMessage_4 = value;
		Il2CppCodeGenWriteBarrier(&___noBlendablesMessage_4, value);
	}

	inline static int32_t get_offset_of_notReadyMessage_5() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___notReadyMessage_5)); }
	inline String_t* get_notReadyMessage_5() const { return ___notReadyMessage_5; }
	inline String_t** get_address_of_notReadyMessage_5() { return &___notReadyMessage_5; }
	inline void set_notReadyMessage_5(String_t* value)
	{
		___notReadyMessage_5 = value;
		Il2CppCodeGenWriteBarrier(&___notReadyMessage_5, value);
	}

	inline static int32_t get_offset_of_blendRangeLow_6() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___blendRangeLow_6)); }
	inline float get_blendRangeLow_6() const { return ___blendRangeLow_6; }
	inline float* get_address_of_blendRangeLow_6() { return &___blendRangeLow_6; }
	inline void set_blendRangeLow_6(float value)
	{
		___blendRangeLow_6 = value;
	}

	inline static int32_t get_offset_of_blendRangeHigh_7() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___blendRangeHigh_7)); }
	inline float get_blendRangeHigh_7() const { return ___blendRangeHigh_7; }
	inline float* get_address_of_blendRangeHigh_7() { return &___blendRangeHigh_7; }
	inline void set_blendRangeHigh_7(float value)
	{
		___blendRangeHigh_7 = value;
	}

	inline static int32_t get_offset_of_allowResyncing_8() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___allowResyncing_8)); }
	inline bool get_allowResyncing_8() const { return ___allowResyncing_8; }
	inline bool* get_address_of_allowResyncing_8() { return &___allowResyncing_8; }
	inline void set_allowResyncing_8(bool value)
	{
		___allowResyncing_8 = value;
	}

	inline static int32_t get_offset_of_isReady_9() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___isReady_9)); }
	inline bool get_isReady_9() const { return ___isReady_9; }
	inline bool* get_address_of_isReady_9() { return &___isReady_9; }
	inline void set_isReady_9(bool value)
	{
		___isReady_9 = value;
	}

	inline static int32_t get_offset_of_users_10() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___users_10)); }
	inline BlendSystemUserU5BU5D_t1096613650* get_users_10() const { return ___users_10; }
	inline BlendSystemUserU5BU5D_t1096613650** get_address_of_users_10() { return &___users_10; }
	inline void set_users_10(BlendSystemUserU5BU5D_t1096613650* value)
	{
		___users_10 = value;
		Il2CppCodeGenWriteBarrier(&___users_10, value);
	}

	inline static int32_t get_offset_of_onBlendablesChanged_11() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ___onBlendablesChanged_11)); }
	inline BlendSystemGenericDelegate_t680308408 * get_onBlendablesChanged_11() const { return ___onBlendablesChanged_11; }
	inline BlendSystemGenericDelegate_t680308408 ** get_address_of_onBlendablesChanged_11() { return &___onBlendablesChanged_11; }
	inline void set_onBlendablesChanged_11(BlendSystemGenericDelegate_t680308408 * value)
	{
		___onBlendablesChanged_11 = value;
		Il2CppCodeGenWriteBarrier(&___onBlendablesChanged_11, value);
	}

	inline static int32_t get_offset_of__blendables_12() { return static_cast<int32_t>(offsetof(BlendSystem_t4120056306, ____blendables_12)); }
	inline List_1_t2695172897 * get__blendables_12() const { return ____blendables_12; }
	inline List_1_t2695172897 ** get_address_of__blendables_12() { return &____blendables_12; }
	inline void set__blendables_12(List_1_t2695172897 * value)
	{
		____blendables_12 = value;
		Il2CppCodeGenWriteBarrier(&____blendables_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
