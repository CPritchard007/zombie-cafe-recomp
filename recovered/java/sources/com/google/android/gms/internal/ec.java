package com.google.android.gms.internal;

import android.app.Activity;
import android.app.PendingIntent;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentSender;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.IBinder;
import android.os.RemoteException;
import com.google.android.gms.ads.purchase.InAppPurchaseActivity;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ec extends er implements ServiceConnection {

    /* renamed from: a, reason: collision with root package name */
    private final Activity f344a;
    private final ef b;
    private Context c;
    private fa d;
    private ek e;
    private dy f;
    private ed g;
    private ei h;
    private String i = null;

    public ec(Activity activity) {
        this.f344a = activity;
        this.b = ef.a(this.f344a.getApplicationContext());
    }

    public static void a(Context context, boolean z, cq cqVar) {
        Intent intent = new Intent();
        intent.setClassName(context, InAppPurchaseActivity.CLASS_NAME);
        intent.putExtra("com.google.android.gms.ads.internal.purchase.useClientJar", z);
        cq.a(intent, cqVar);
        context.startActivity(intent);
    }

    private void a(String str, boolean z, int i, Intent intent) {
        try {
            this.d.a(new ee(this.c, str, z, i, intent, this.g));
        } catch (RemoteException e) {
            ig.e("Fail to invoke PlayStorePurchaseListener.");
        }
    }

    @Override // com.google.android.gms.internal.eq
    public void a() {
        cq cqVarA = cq.a(this.f344a.getIntent());
        this.d = cqVarA.b;
        this.h = cqVarA.c;
        this.e = cqVarA.d;
        this.f = new dy(this.f344a.getApplicationContext());
        this.c = cqVarA.e;
        Activity activity = this.f344a;
        Intent intent = new Intent("com.android.vending.billing.InAppBillingService.BIND");
        this.f344a.getApplicationContext();
        activity.bindService(intent, this, 1);
    }

    @Override // com.google.android.gms.internal.eq
    public void a(int i, int i2, Intent intent) {
        try {
            if (i == 1001) {
                int iA = eh.a(intent);
                if (i2 != -1 || iA != 0) {
                    this.b.a(this.g);
                    a(this.e.a(), false, i2, intent);
                } else if (this.h.a(this.i, i2, intent)) {
                    a(this.e.a(), true, i2, intent);
                } else {
                    a(this.e.a(), false, i2, intent);
                }
                this.e.c(iA);
            }
        } catch (RemoteException e) {
            ig.e("Fail to process purchase result.");
        } finally {
            this.i = null;
            this.f344a.finish();
        }
    }

    @Override // com.google.android.gms.internal.eq
    public void b() {
        this.f344a.unbindService(this);
        this.f.a();
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) throws IntentSender.SendIntentException {
        this.f.a(iBinder);
        try {
            this.i = this.h.a();
            Bundle bundleA = this.f.a(this.f344a.getPackageName(), this.e.a(), this.i);
            PendingIntent pendingIntent = (PendingIntent) bundleA.getParcelable("BUY_INTENT");
            if (pendingIntent == null) {
                int iA = eh.a(bundleA);
                this.e.c(iA);
                a(this.e.a(), false, iA, null);
                this.f344a.finish();
            } else {
                this.g = new ed(this.e.a(), this.i);
                this.b.b(this.g);
                Integer num = 0;
                Integer num2 = 0;
                Integer num3 = 0;
                this.f344a.startIntentSenderForResult(pendingIntent.getIntentSender(), 1001, new Intent(), num.intValue(), num2.intValue(), num3.intValue());
            }
        } catch (IntentSender.SendIntentException | RemoteException e) {
            ig.c("Error when connecting in-app billing service", e);
            this.f344a.finish();
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        ig.c("In-app billing service disconnected.");
        this.f.a();
    }
}
