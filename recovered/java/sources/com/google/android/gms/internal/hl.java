package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class hl {

    /* renamed from: a, reason: collision with root package name */
    private final Runnable f407a = new hm(this);
    private volatile Thread b;

    public abstract void a();

    public abstract void b();

    public final void e() {
        hn.a(this.f407a);
    }

    public final void f() {
        b();
        if (this.b != null) {
            this.b.interrupt();
        }
    }
}
