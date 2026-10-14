package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class bq implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ bo f298a;
    final /* synthetic */ bp b;

    bq(bp bpVar, bo boVar) {
        this.b = bpVar;
        this.f298a = boVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        synchronized (this.b.h) {
            if (this.b.k != -2) {
                return;
            }
            this.b.j = this.b.b();
            if (this.b.j == null) {
                this.b.a(4);
            } else {
                this.f298a.a(this.b);
                this.b.a(this.f298a);
            }
        }
    }
}
