package com.google.android.gms.internal;

import java.lang.ref.WeakReference;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class dk implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ di f332a;
    final /* synthetic */ dj b;
    private final WeakReference c;

    dk(dj djVar, di diVar) {
        this.b = djVar;
        this.f332a = diVar;
        this.c = new WeakReference(this.f332a);
    }

    @Override // java.lang.Runnable
    public void run() {
        di diVar = (di) this.c.get();
        if (this.b.b || diVar == null) {
            return;
        }
        diVar.e();
        this.b.b();
    }
}
