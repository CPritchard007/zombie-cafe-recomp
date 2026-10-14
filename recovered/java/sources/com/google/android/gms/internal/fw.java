package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class fw implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ fy f374a;
    final /* synthetic */ fs b;

    fw(fs fsVar, fy fyVar) {
        this.b = fsVar;
        this.f374a = fyVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        synchronized (this.b.f) {
            if (this.b.j.e != -2) {
                return;
            }
            this.b.c.f().a(this.b);
            this.f374a.a(this.b.j);
        }
    }
}
