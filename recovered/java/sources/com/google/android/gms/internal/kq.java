package com.google.android.gms.internal;

import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import android.os.RemoteException;
import android.util.Log;
import java.util.ArrayList;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class kq implements lb {
    public static final String[] d = {"service_esmobile", "service_googleme"};

    /* renamed from: a, reason: collision with root package name */
    private final Context f469a;
    final Handler b;
    boolean c;
    private final Looper e;
    private IInterface f;
    private final ArrayList g;
    private kw h;
    private volatile int i;
    private final String[] j;
    private final kz k;

    protected kq(Context context, Looper looper, com.google.android.gms.common.api.c cVar, com.google.android.gms.common.api.d dVar, String... strArr) {
        this.g = new ArrayList();
        this.i = 1;
        this.c = false;
        this.f469a = (Context) ls.a(context);
        this.e = (Looper) ls.a(looper, "Looper must not be null");
        this.k = new kz(context, looper, this);
        this.b = new kr(this, looper);
        a(strArr);
        this.j = strArr;
        a((com.google.android.gms.common.api.c) ls.a(cVar));
        a((com.google.android.gms.common.api.d) ls.a(dVar));
    }

    @Deprecated
    protected kq(Context context, com.google.android.gms.common.c cVar, com.google.android.gms.common.d dVar, String... strArr) {
        this(context, context.getMainLooper(), new ku(cVar), new kx(dVar), strArr);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i) {
        int i2 = this.i;
        this.i = i;
        if (i2 != i) {
            if (i == 3) {
                d();
            } else if (i2 == 3 && i == 1) {
                e();
            }
        }
    }

    protected abstract String a();

    protected void a(int i, IBinder iBinder, Bundle bundle) {
        this.b.sendMessage(this.b.obtainMessage(1, new ky(this, i, iBinder, bundle)));
    }

    public void a(com.google.android.gms.common.api.c cVar) {
        this.k.a(cVar);
    }

    public void a(com.google.android.gms.common.api.d dVar) {
        this.k.a(dVar);
    }

    protected abstract void a(ll llVar, kv kvVar);

    protected void a(String... strArr) {
    }

    protected abstract IInterface b(IBinder iBinder);

    protected abstract String b();

    protected final void c(IBinder iBinder) {
        try {
            a(lm.a(iBinder), new kv(this));
        } catch (RemoteException e) {
            Log.w("GmsClient", "service died");
        }
    }

    protected void d() {
    }

    protected void e() {
    }

    public void f() {
        this.c = true;
        a(2);
        int iA = com.google.android.gms.common.g.a(this.f469a);
        if (iA != 0) {
            a(1);
            this.b.sendMessage(this.b.obtainMessage(3, Integer.valueOf(iA)));
            return;
        }
        if (this.h != null) {
            Log.e("GmsClient", "Calling connect() while still connected, missing disconnect().");
            this.f = null;
            lc.a(this.f469a).b(a(), this.h);
        }
        this.h = new kw(this);
        if (lc.a(this.f469a).a(a(), this.h)) {
            return;
        }
        Log.e("GmsClient", "unable to connect to service: " + a());
        this.b.sendMessage(this.b.obtainMessage(3, 9));
    }

    @Override // com.google.android.gms.internal.lb
    public boolean g() {
        return this.i == 3;
    }

    public boolean h() {
        return this.i == 2;
    }

    public void i() {
        this.c = false;
        synchronized (this.g) {
            int size = this.g.size();
            for (int i = 0; i < size; i++) {
                ((kt) this.g.get(i)).d();
            }
            this.g.clear();
        }
        a(1);
        this.f = null;
        if (this.h != null) {
            lc.a(this.f469a).b(a(), this.h);
            this.h = null;
        }
    }

    public final Context j() {
        return this.f469a;
    }

    protected final void k() {
        if (!g()) {
            throw new IllegalStateException("Not connected. Call connect() and wait for onConnected() to be called.");
        }
    }

    @Override // com.google.android.gms.internal.lb
    public Bundle l() {
        return null;
    }

    public final IInterface m() {
        k();
        return this.f;
    }

    @Override // com.google.android.gms.internal.lb
    public boolean n() {
        return this.c;
    }
}
