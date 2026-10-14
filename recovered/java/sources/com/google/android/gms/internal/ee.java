package com.google.android.gms.internal;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.IBinder;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ee extends ey implements ServiceConnection {

    /* renamed from: a, reason: collision with root package name */
    private boolean f346a;
    private Context b;
    private int c;
    private Intent d;
    private dy e;
    private ed f;
    private String g;

    public ee(Context context, String str, boolean z, int i, Intent intent, ed edVar) {
        this.f346a = false;
        this.g = str;
        this.c = i;
        this.d = intent;
        this.f346a = z;
        this.b = context;
        this.f = edVar;
    }

    @Override // com.google.android.gms.internal.ex
    public boolean a() {
        return this.f346a;
    }

    @Override // com.google.android.gms.internal.ex
    public String b() {
        return this.g;
    }

    @Override // com.google.android.gms.internal.ex
    public Intent c() {
        return this.d;
    }

    @Override // com.google.android.gms.internal.ex
    public int d() {
        return this.c;
    }

    @Override // com.google.android.gms.internal.ex
    public void e() {
        int iA = eh.a(this.d);
        if (this.c == -1 && iA == 0) {
            this.e = new dy(this.b);
            Context context = this.b;
            Intent intent = new Intent("com.android.vending.billing.InAppBillingService.BIND");
            Context context2 = this.b;
            context.bindService(intent, this, 1);
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        ig.c("In-app billing service connected.");
        this.e.a(iBinder);
        String strB = eh.b(eh.b(this.d));
        if (strB == null) {
            return;
        }
        if (this.e.a(this.b.getPackageName(), strB) == 0) {
            ef.a(this.b).a(this.f);
        }
        this.b.unbindService(this);
        this.e.a();
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        ig.c("In-app billing service disconnected.");
        this.e.a();
    }
}
