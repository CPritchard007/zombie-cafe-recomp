package com.capcom.gcm;

import android.app.IntentService;
import android.app.PendingIntent;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URL;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class GCMIntentService extends IntentService {
    public GCMIntentService() {
        super("GCMIntentService");
    }

    private InputStream a(String str) {
        if (str != null) {
            try {
                if (!"".equals(str)) {
                    HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
                    httpURLConnection.setConnectTimeout(30000);
                    httpURLConnection.setReadTimeout(30000);
                    httpURLConnection.setInstanceFollowRedirects(true);
                    return httpURLConnection.getInputStream();
                }
            } catch (Exception e) {
                Log.w("GCMIntentService", "connect to background image failed: " + str, e);
                return null;
            }
        }
        return null;
    }

    private void a(Bundle bundle) throws Throwable {
        d dVarA = d.a(bundle);
        if (a()) {
            Intent intent = new Intent(this, (Class<?>) AlertDialogActivity.class);
            intent.setFlags(1342177280);
            dVarA.b(intent);
            try {
                PendingIntent.getActivity(this, 0, intent, 0).send();
            } catch (Exception e) {
                Log.e("GCMIntentService", "Remote Notification dialog failed.", e);
            }
        }
        a(dVarA.a(), dVarA.b(), dVarA.e());
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0091  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00ff  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(java.lang.String r13, java.lang.String r14, java.lang.String r15) throws java.lang.Throwable {
        /*
            Method dump skipped, instructions count: 281
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.capcom.gcm.GCMIntentService.a(java.lang.String, java.lang.String, java.lang.String):void");
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x0039, code lost:
    
        if (r1.inKeyguardRestrictedInputMode() != false) goto L9;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean a() {
        /*
            r5 = this;
            r2 = 0
            android.content.Context r0 = r5.getApplicationContext()     // Catch: java.lang.Exception -> L3d
            boolean r0 = com.capcom.gcm.e.e(r0)     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = "GCMIntentService"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3d
            java.lang.String r4 = "Remote Notification dialog: "
            r3.<init>(r4)     // Catch: java.lang.Exception -> L3d
            java.lang.StringBuilder r3 = r3.append(r0)     // Catch: java.lang.Exception -> L3d
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L3d
            android.util.Log.i(r1, r3)     // Catch: java.lang.Exception -> L3d
            if (r0 == 0) goto L45
            java.lang.String r0 = "power"
            java.lang.Object r0 = r5.getSystemService(r0)     // Catch: java.lang.Exception -> L3d
            android.os.PowerManager r0 = (android.os.PowerManager) r0     // Catch: java.lang.Exception -> L3d
            java.lang.String r1 = "keyguard"
            java.lang.Object r1 = r5.getSystemService(r1)     // Catch: java.lang.Exception -> L3d
            android.app.KeyguardManager r1 = (android.app.KeyguardManager) r1     // Catch: java.lang.Exception -> L3d
            boolean r0 = r0.isScreenOn()     // Catch: java.lang.Exception -> L3d
            if (r0 == 0) goto L3b
            boolean r0 = r1.inKeyguardRestrictedInputMode()     // Catch: java.lang.Exception -> L3d
            if (r0 == 0) goto L45
        L3b:
            r0 = 1
        L3c:
            return r0
        L3d:
            r0 = move-exception
            java.lang.String r1 = "GCMIntentService"
            java.lang.String r3 = "Remote Notification dialog failed."
            android.util.Log.w(r1, r3, r0)
        L45:
            r0 = r2
            goto L3c
        */
        throw new UnsupportedOperationException("Method not decompiled: com.capcom.gcm.GCMIntentService.a():boolean");
    }

    @Override // android.app.IntentService
    protected void onHandleIntent(Intent intent) throws Throwable {
        Bundle extras = intent.getExtras();
        String strA = com.google.android.gms.b.a.a(this).a(intent);
        if (!extras.isEmpty() && !"send_error".equals(strA) && !"deleted_messages".equals(strA) && "gcm".equals(strA)) {
            Log.i("GCMIntentService", "Received: " + extras.toString());
            try {
                a(extras);
            } catch (Exception e) {
                Log.e("GCMIntentService", "postNotification failed.", e);
            }
        }
        GCMBroadcastReceiver.completeWakefulIntent(intent);
    }
}
