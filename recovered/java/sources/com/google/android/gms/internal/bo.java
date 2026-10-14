package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class bo extends cc {

    /* renamed from: a, reason: collision with root package name */
    private final Object f296a = new Object();
    private bs b;
    private bn c;

    @Override // com.google.android.gms.internal.cb
    public void a() {
        synchronized (this.f296a) {
            if (this.c != null) {
                this.c.j();
            }
        }
    }

    @Override // com.google.android.gms.internal.cb
    public void a(int i) {
        synchronized (this.f296a) {
            if (this.b != null) {
                this.b.a(i == 3 ? 1 : 2);
                this.b = null;
            }
        }
    }

    public void a(bn bnVar) {
        synchronized (this.f296a) {
            this.c = bnVar;
        }
    }

    public void a(bs bsVar) {
        synchronized (this.f296a) {
            this.b = bsVar;
        }
    }

    @Override // com.google.android.gms.internal.cb
    public void b() {
        synchronized (this.f296a) {
            if (this.c != null) {
                this.c.k();
            }
        }
    }

    @Override // com.google.android.gms.internal.cb
    public void c() {
        synchronized (this.f296a) {
            if (this.c != null) {
                this.c.l();
            }
        }
    }

    @Override // com.google.android.gms.internal.cb
    public void d() {
        synchronized (this.f296a) {
            if (this.c != null) {
                this.c.m();
            }
        }
    }

    @Override // com.google.android.gms.internal.cb
    public void e() {
        synchronized (this.f296a) {
            if (this.b != null) {
                this.b.a(0);
                this.b = null;
            } else {
                if (this.c != null) {
                    this.c.n();
                }
            }
        }
    }
}
