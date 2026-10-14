package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class dj {

    /* renamed from: a, reason: collision with root package name */
    private final Runnable f331a;
    private volatile boolean b = false;

    public dj(di diVar) {
        this.f331a = new dk(this, diVar);
    }

    public void a() {
        this.b = true;
        Cif.f427a.removeCallbacks(this.f331a);
    }

    public void b() {
        Cif.f427a.postDelayed(this.f331a, 250L);
    }
}
