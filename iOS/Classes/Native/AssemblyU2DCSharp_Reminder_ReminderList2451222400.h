#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Reminder.ReminderNotificationData>
struct List_1_t2059420343;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Reminder.ReminderList
struct  ReminderList_t2451222400  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Reminder.ReminderNotificationData> Reminder.ReminderList::reminders
	List_1_t2059420343 * ___reminders_0;

public:
	inline static int32_t get_offset_of_reminders_0() { return static_cast<int32_t>(offsetof(ReminderList_t2451222400, ___reminders_0)); }
	inline List_1_t2059420343 * get_reminders_0() const { return ___reminders_0; }
	inline List_1_t2059420343 ** get_address_of_reminders_0() { return &___reminders_0; }
	inline void set_reminders_0(List_1_t2059420343 * value)
	{
		___reminders_0 = value;
		Il2CppCodeGenWriteBarrier(&___reminders_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
