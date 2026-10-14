package com.capcom.billing;

import android.os.RemoteException;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
abstract class c {

    /* renamed from: a, reason: collision with root package name */
    protected long f46a;
    final /* synthetic */ BillingService b;
    private final int c;

    public c(BillingService billingService, int i) {
        this.b = billingService;
        this.c = i;
    }

    public int a() {
        return this.c;
    }

    protected void a(RemoteException remoteException) {
        Log.w("BillingService", "remote billing service crashed");
        BillingService.f29a = null;
    }

    protected void a(j jVar) {
    }

    public boolean b() {
        if (c()) {
            return true;
        }
        if (!this.b.f()) {
            return false;
        }
        BillingService.b.add(this);
        return true;
    }

    public boolean c() {
        Log.d("BillingService", getClass().getSimpleName());
        if (BillingService.f29a != null) {
            try {
                this.f46a = d();
                Log.d("BillingService", "request id: " + this.f46a);
                if (this.f46a < 0) {
                    Log.e("BillingService", "Bad Request Result == -1");
                }
                if (this.f46a >= 0) {
                    BillingService.c.put(Long.valueOf(this.f46a), this);
                }
                return true;
            } catch (RemoteException e) {
                a(e);
            }
        }
        return false;
    }

    protected abstract long d();
}
