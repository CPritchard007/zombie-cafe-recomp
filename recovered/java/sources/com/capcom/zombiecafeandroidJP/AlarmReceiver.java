package com.capcom.zombiecafeandroidJP;

import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class AlarmReceiver extends BroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        Log.e("====================", "=====================");
        Log.e("ALARM RECIEVER FIRED", "DID WE GET THE BUNDLE");
        Log.e("====================", "=====================");
        try {
            Bundle extras = intent.getExtras();
            String string = extras.getString("alarm_message");
            int i = extras.getInt("type");
            long jCurrentTimeMillis = System.currentTimeMillis();
            PendingIntent activity = PendingIntent.getActivity(context, 0, new Intent(context, (Class<?>) ZombieCafeAndroid.class), 0);
            Notification notification = new Notification(2130837537, string, jCurrentTimeMillis);
            notification.audioStreamType = 5;
            notification.sound = Uri.parse("android.resource://com.capcom.zombiecafeandroidJP/2131034112");
            if (notification.sound == null) {
                notification.defaults |= 1;
            }
            notification.flags |= 16;
            notification.setLatestEventInfo(context, "Zombie Cafe", string, activity);
            ((NotificationManager) context.getSystemService("notification")).notify(325617 + i, notification);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
