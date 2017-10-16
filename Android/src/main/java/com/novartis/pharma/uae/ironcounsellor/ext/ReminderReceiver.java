package com.novartis.pharma.uae.ironcounsellor.ext;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.support.v4.content.WakefulBroadcastReceiver;
import android.util.Log;

/**
 * Created by Prabhu Easwar on 4/23/2017.
 */

public class ReminderReceiver extends WakefulBroadcastReceiver {
    @Override
    public void onReceive(Context context, Intent intent) {
        Log.i(ReminderSetup.TAG, "Received a Reminder Notification");
        final Bundle bundle = intent.getExtras();
        Intent service = new Intent(context, ReminderService.class);
        service.putExtras(bundle);
        startWakefulService(context, service);
    }
}