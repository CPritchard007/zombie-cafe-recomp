package com.capcom.gcm;

import android.app.KeyguardManager;
import android.os.Bundle;
import android.os.PowerManager;
import android.support.v4.app.FragmentActivity;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class AlertDialogActivity extends FragmentActivity {

    /* renamed from: a, reason: collision with root package name */
    public static PowerManager.WakeLock f61a = null;
    public static KeyguardManager.KeyguardLock b = null;

    @Override // android.support.v4.app.FragmentActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Log.i("AlertDialogActivity", "AlertDialogActivity onCreate 0");
        f61a = ((PowerManager) getSystemService("power")).newWakeLock(805306394, "FindMyPhone");
        f61a.acquire(10000L);
        getWindow().addFlags(4718592);
        a.a(getIntent()).show(getSupportFragmentManager(), "alert_dialog");
        Log.i("AlertDialogActivity", "AlertDialogActivity onCreate 1");
    }

    @Override // android.support.v4.app.FragmentActivity, android.app.Activity
    public void onDestroy() {
        super.onDestroy();
        Log.i("AlertDialogActivity", "AlertDialogActivity onDestroy");
        if (f61a != null && f61a.isHeld()) {
            Log.i("AlertDialogActivity", "AlertDialogActivity onDestroy 1");
            try {
                f61a.release();
            } catch (Exception e) {
            }
            f61a = null;
        }
        if (b != null) {
            Log.i("AlertDialogActivity", "AlertDialogActivity onDestroy 2");
            try {
                b.reenableKeyguard();
            } catch (Exception e2) {
            }
            b = null;
        }
    }
}
