package com.novartis.pharma.uae.ironcounsellor.ext;

import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.TimeZone;

import static com.onevcat.uniwebview.AndroidPlugin.getActivity;

/**
 * Created by Prabhu Easwar on 4/23/2017.
 */

public class ReminderSetup {

    public static final String TAG = "IronCounsellor";

    public void ManageEvents(String eventList) throws JSONException {
        Log.i(TAG, eventList);
        JSONObject reader = new JSONObject(eventList);
        String action = reader.getString("action");
        if (action != null) {
            if (action.equalsIgnoreCase("add") || action.equalsIgnoreCase("edit")) {
                Log.i(TAG, "Add Reminder: " + reader.getString("id"));
                String medicineId = reader.getString("id");
                String medicineName = reader.getString("name");
                String strength = reader.getString("strength");
                String description = reader.getString("name") + " " + reader.getString("strength") + " " + reader.getString("medStrength");
                String reminderTone = "";
                if (reader.has("reminderTone")) {
                    reminderTone = reader.getString("reminderTone");
                }

                // Iterate through reminders array
                JSONArray reminders = reader.getJSONArray("reminders");

                for (int index = 0; index < reminders.length(); index++) {
                    JSONObject reminder = reminders.getJSONObject(index);
                    String reminderId = reminder.getString("reminderId");
                    String reminderTime = reminder.getString("reminderDate");
                    if (action.equalsIgnoreCase("edit")) {
                        cancelEvent(medicineId);
                    }
                    // Create event
                    createEvents(medicineId, medicineName, strength, description, reminderId, reminderTime, reminderTone);
                }
            } else if (action.equalsIgnoreCase("snooze")) {
                Log.i(TAG, "Snooze Reminder: " + reader.getString("medicineId"));
                String medicineId = reader.getString("medicineId");
                String medicineName = reader.getString("name");
                String strength = reader.getString("strength");
                String description = reader.getString("desc");
                String reminderId = reader.getString("reminderId");
                String reminderTime = reader.getString("reminderDate");
                String reminderTone = "";
                if (reader.has("reminderTone")) {
                    reminderTone = reader.getString("reminderTone");
                }
                // Create event
                createEvents(medicineId, medicineName, strength, description, reminderId, reminderTime, reminderTone);
            } else if (action.equalsIgnoreCase("delete")) {
                Log.i(TAG, "Delete Reminder: " + reader.getString("id"));
                // Delete Event
                cancelEvent(reader.getString("id"));
            }
        }
    }

    private void createEvents(String medicineId, String medicineName, String strength, String description, String reminderId, String reminderTime, String reminderTone) {
        Date date = parse(reminderTime);
        if (date != null) {
            int requestCode = 1; //Integer.parseInt(medicineId);

            Calendar calendar = Calendar.getInstance();
            calendar.setTimeInMillis(System.currentTimeMillis());
            calendar.set(Calendar.DATE, date.getDate());
            calendar.set(Calendar.MONTH, date.getMonth());
            calendar.set(Calendar.YEAR, date.getYear() + 1900);
            calendar.set(Calendar.HOUR_OF_DAY, date.getHours());
            calendar.set(Calendar.MINUTE, date.getMinutes());
            calendar.set(Calendar.SECOND, 0);
            calendar.set(Calendar.MILLISECOND, 0);

            Log.i(TAG, "Context: " + getActivity().getPackageName());
            Intent intent = new Intent(getActivity(), ReminderReceiver.class);

            // Set Medicine details to intent
            Bundle bundle = new Bundle();
            bundle.putString("medicineId", medicineId);
            bundle.putString("medicineName", medicineName);
            bundle.putString("strength", strength);
            bundle.putString("description", description);
            bundle.putString("reminderId", reminderId);
            bundle.putString("reminderTime", reminderTime);
            bundle.putString("reminderTone", reminderTone);
            intent.putExtras(bundle);

            AlarmManager alarmManager = (AlarmManager) getActivity().getSystemService(Context.ALARM_SERVICE);
            PendingIntent reminderIntent = PendingIntent.getBroadcast(getActivity(), requestCode, intent,
                    PendingIntent.FLAG_UPDATE_CURRENT);
            alarmManager.setExact(AlarmManager.RTC_WAKEUP, calendar.getTimeInMillis(), reminderIntent);
        }
    }

    private void cancelEvent(String medicineId) {
        int requestCode = Integer.parseInt(medicineId.replace("-", "")) / 999999999;
        PendingIntent.getBroadcast(getActivity(), requestCode, new Intent(),
                PendingIntent.FLAG_UPDATE_CURRENT).cancel();
    }

    private static Date parse(String input) {
        try {
            SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'");
            sdf.setTimeZone(TimeZone.getTimeZone("GMT"));
            return sdf.parse(input);
        } catch (ParseException e) {
            e.printStackTrace();
            return null;
        }
    }
}
