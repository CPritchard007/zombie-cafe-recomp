package com.capcom.gcm;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.support.v4.content.WakefulBroadcastReceiver;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class GCMBroadcastReceiver extends WakefulBroadcastReceiver {
    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        startWakefulService(context, intent.setComponent(new ComponentName(context.getPackageName(), GCMIntentService.class.getName())));
        setResultCode(-1);
    }
}
