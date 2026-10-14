package com.capcom.billing;

import android.app.Service;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.util.Log;
import com.capcom.zombiecafeandroidJP.ZombieCafeAndroid;
import java.util.HashMap;
import java.util.LinkedList;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class BillingService extends Service implements ServiceConnection {

    /* renamed from: a, reason: collision with root package name */
    private static com.a.a.a.a f29a;
    private static LinkedList b = new LinkedList();
    private static HashMap c = new HashMap();

    private void a(int i, String str, String str2) {
    }

    private void a(long j, j jVar) {
        c cVar = (c) c.get(Long.valueOf(j));
        if (cVar != null) {
            Log.d("BillingService", String.valueOf(cVar.getClass().getSimpleName()) + ": " + jVar);
            cVar.a(jVar);
        }
        c.remove(Long.valueOf(j));
        Log.d("checkResponseCode", "was a purchase made:" + jVar);
        if (jVar == j.RESULT_OK || jVar != j.RESULT_SERVICE_UNAVAILABLE) {
            return;
        }
        Log.e("BillingService", "---------------------------");
        ZombieCafeAndroid.setPurchasingFlag(false);
        ZombieCafeAndroid.setOpenPurchaceScreenFlag(false);
        Log.e("BillingService", "---------------------------");
    }

    private boolean a(int i, String[] strArr) {
        return new e(this, i, strArr).b();
    }

    private boolean b(int i, String[] strArr) {
        return new f(this, i, strArr).b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean f() {
        Intent intent;
        try {
            Log.i("BillingService", "binding to Market billing service");
            intent = new Intent("com.android.vending.billing.MarketBillingService.BIND");
            intent.setPackage("com.android.vending");
        } catch (SecurityException e) {
            Log.e("BillingService", "Security exception: " + e);
        }
        if (bindService(intent, this, 1)) {
            return true;
        }
        Log.e("BillingService", "Could not bind to service.");
        return false;
    }

    private void g() {
        int iA = -1;
        while (true) {
            c cVar = (c) b.peek();
            if (cVar == null) {
                if (iA >= 0) {
                    Log.i("BillingService", "stopping service, startId: " + iA);
                    stopSelf(iA);
                    return;
                }
                return;
            }
            if (!cVar.c()) {
                Log.e("BillingService", "service crashed!");
                f();
                return;
            } else {
                b.remove();
                if (iA < cVar.a()) {
                    iA = cVar.a();
                }
            }
        }
    }

    public void a(Context context) {
        attachBaseContext(context);
    }

    public void a(Intent intent, int i) {
        if (intent == null) {
            Log.d("Billing Service", "Intent was null");
            return;
        }
        String action = intent.getAction();
        Log.i("BillingService", "handleCommand() action: " + action);
        if ("com.example.dungeons.CONFIRM_NOTIFICATION".equals(action)) {
            a(i, intent.getStringArrayExtra("notification_id"));
            return;
        }
        if ("com.example.dungeons.GET_PURCHASE_INFORMATION".equals(action)) {
            b(i, new String[]{intent.getStringExtra("notification_id")});
        } else if ("com.android.vending.billing.PURCHASE_STATE_CHANGED".equals(action)) {
            a(i, intent.getStringExtra("inapp_signed_data"), intent.getStringExtra("inapp_signature"));
        } else if ("com.android.vending.billing.RESPONSE_CODE".equals(action)) {
            a(intent.getLongExtra("request_id", -1L), j.a(intent.getIntExtra("response_code", j.RESULT_ERROR.ordinal())));
        }
    }

    public boolean a() {
        return new d(this).b();
    }

    public boolean a(String str, String str2) {
        return new g(this, str, str2).b();
    }

    public void b() {
        try {
            unbindService(this);
        } catch (IllegalArgumentException e) {
        }
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        Log.d("BillingService", "Billing service connected");
        f29a = com.a.a.a.b.a(iBinder);
        g();
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        Log.w("BillingService", "Billing service disconnected");
        f29a = null;
    }

    @Override // android.app.Service
    public void onStart(Intent intent, int i) {
        a(intent, i);
    }
}
