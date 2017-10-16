package com.novartis.pharma.uae.ironcounsellor.ext;

import android.app.IntentService;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.PowerManager;
import android.support.v4.app.NotificationCompat;
import android.util.Log;

import com.unity3d.player.UnityPlayer;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import java.util.Random;
import java.util.Timer;
import java.util.TimerTask;

import static com.onevcat.uniwebview.AndroidPlugin.getActivity;

/**
 * Created by Prabhu Easwar on 4/23/2017.
 */

public class ReminderService extends IntentService {

    public ReminderService() {
        super("SchedulingService");
    }

    @Override
    protected void onHandleIntent(final Intent intent) {
        Log.i(ReminderSetup.TAG, "Handling the Notification");
        Bundle bundle = intent.getExtras();
        if (bundle != null) {
            String reminderTone = bundle.getString("reminderTone");
            String notificationTitle = "IRON COUNSELLOR";
            String message = bundle.getString("description");

            NotificationManager notificationManager = (NotificationManager) getActivity()
                    .getSystemService(Context.NOTIFICATION_SERVICE);

            Intent notificationIntent = new Intent(getActivity(), com.onevcat.uniwebview.AndroidPlugin.class);
            notificationIntent.setAction("" + System.currentTimeMillis());
            Random r = new Random();
            int uniqueId = r.nextInt(100);
            notificationIntent.setFlags(Intent.FLAG_ACTIVITY_BROUGHT_TO_FRONT | Intent.FLAG_ACTIVITY_NEW_TASK);

            PendingIntent pendingIntent = PendingIntent.getActivity(this,
                    uniqueId, notificationIntent, PendingIntent.FLAG_UPDATE_CURRENT);

            NotificationCompat.Builder mBuilder = new NotificationCompat.Builder(this).setSmallIcon(R.drawable.app_icon)
                    .setContentTitle(notificationTitle).setAutoCancel(true)
                    .setStyle(new NotificationCompat.BigTextStyle().bigText(message)).setContentText(message)
                    .setVibrate(new long[]{100, 500, 100, 1200});

            mBuilder.setContentIntent(pendingIntent);
            Log.i(ReminderSetup.TAG, "Show Notification");
            notificationManager.notify(0, mBuilder.build());

            try {
                PowerManager pm = (PowerManager) getActivity().getSystemService(Context.POWER_SERVICE);
                final PowerManager.WakeLock mWakelock = pm.newWakeLock(PowerManager.ACQUIRE_CAUSES_WAKEUP, "REMINDER");
                mWakelock.acquire();
                Timer timer = new Timer();
                TimerTask task = new TimerTask() {
                    public void run() {
                        mWakelock.release();
                    }
                };
                timer.schedule(task, 50000);
            } catch (Exception e) {
            }

            try {
                // Create JSON Object
                JSONObject reminder = new JSONObject();
                try {
                    reminder.put("medicineId", bundle.getString("medicineId"));
                    reminder.put("name", bundle.getString("medicineName"));
                    reminder.put("strength", bundle.getString("strength"));
                    reminder.put("desc", message);
                    reminder.put("reminderId", bundle.getString("reminderId"));
                    reminder.put("reminderDate", bundle.getString("reminderTime"));

                } catch (JSONException e) {
                    e.printStackTrace();
                }


                JSONArray reminders = new JSONArray();
                reminders.put(reminder);

                JSONObject data = new JSONObject();
                data.put("reminders", reminders);

                // CALL Unity
                UnityPlayer.UnitySendMessage("Home", "ShowReminder", data.toString());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        // Release the wake lock provided by the BroadcastReceiver.
        ReminderReceiver.completeWakefulIntent(intent);
    }
}
