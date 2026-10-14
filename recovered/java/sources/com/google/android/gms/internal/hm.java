package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class hm implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ hl f408a;

    hm(hl hlVar) {
        this.f408a = hlVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f408a.b = Thread.currentThread();
        this.f408a.a();
    }
}
