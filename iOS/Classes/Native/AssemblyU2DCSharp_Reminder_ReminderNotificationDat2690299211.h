#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Reminder.ReminderNotificationData
struct  ReminderNotificationData_t2690299211  : public Il2CppObject
{
public:
	// System.DateTime Reminder.ReminderNotificationData::reminderDate
	DateTime_t693205669  ___reminderDate_0;
	// System.String Reminder.ReminderNotificationData::medicineId
	String_t* ___medicineId_1;
	// System.String Reminder.ReminderNotificationData::reminderId
	String_t* ___reminderId_2;
	// System.String Reminder.ReminderNotificationData::name
	String_t* ___name_3;
	// System.String Reminder.ReminderNotificationData::strength
	String_t* ___strength_4;
	// System.String Reminder.ReminderNotificationData::desc
	String_t* ___desc_5;

public:
	inline static int32_t get_offset_of_reminderDate_0() { return static_cast<int32_t>(offsetof(ReminderNotificationData_t2690299211, ___reminderDate_0)); }
	inline DateTime_t693205669  get_reminderDate_0() const { return ___reminderDate_0; }
	inline DateTime_t693205669 * get_address_of_reminderDate_0() { return &___reminderDate_0; }
	inline void set_reminderDate_0(DateTime_t693205669  value)
	{
		___reminderDate_0 = value;
	}

	inline static int32_t get_offset_of_medicineId_1() { return static_cast<int32_t>(offsetof(ReminderNotificationData_t2690299211, ___medicineId_1)); }
	inline String_t* get_medicineId_1() const { return ___medicineId_1; }
	inline String_t** get_address_of_medicineId_1() { return &___medicineId_1; }
	inline void set_medicineId_1(String_t* value)
	{
		___medicineId_1 = value;
		Il2CppCodeGenWriteBarrier(&___medicineId_1, value);
	}

	inline static int32_t get_offset_of_reminderId_2() { return static_cast<int32_t>(offsetof(ReminderNotificationData_t2690299211, ___reminderId_2)); }
	inline String_t* get_reminderId_2() const { return ___reminderId_2; }
	inline String_t** get_address_of_reminderId_2() { return &___reminderId_2; }
	inline void set_reminderId_2(String_t* value)
	{
		___reminderId_2 = value;
		Il2CppCodeGenWriteBarrier(&___reminderId_2, value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ReminderNotificationData_t2690299211, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_strength_4() { return static_cast<int32_t>(offsetof(ReminderNotificationData_t2690299211, ___strength_4)); }
	inline String_t* get_strength_4() const { return ___strength_4; }
	inline String_t** get_address_of_strength_4() { return &___strength_4; }
	inline void set_strength_4(String_t* value)
	{
		___strength_4 = value;
		Il2CppCodeGenWriteBarrier(&___strength_4, value);
	}

	inline static int32_t get_offset_of_desc_5() { return static_cast<int32_t>(offsetof(ReminderNotificationData_t2690299211, ___desc_5)); }
	inline String_t* get_desc_5() const { return ___desc_5; }
	inline String_t** get_address_of_desc_5() { return &___desc_5; }
	inline void set_desc_5(String_t* value)
	{
		___desc_5 = value;
		Il2CppCodeGenWriteBarrier(&___desc_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
