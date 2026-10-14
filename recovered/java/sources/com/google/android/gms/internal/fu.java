package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class fu implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ hd f372a;
    final /* synthetic */ fs b;

    fu(fs fsVar, hd hdVar) {
        this.b = fsVar;
        this.f372a = hdVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        synchronized (this.b.f) {
            this.b.b.a(this.f372a);
        }
    }
}
