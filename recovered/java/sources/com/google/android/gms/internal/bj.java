package com.google.android.gms.internal;

import android.content.Context;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class bj {

    /* renamed from: a, reason: collision with root package name */
    private final ds f292a;
    private final bv b;
    private final Context c;
    private final bm e;
    private bp g;
    private final Object d = new Object();
    private boolean f = false;

    public bj(Context context, ds dsVar, bv bvVar, bm bmVar) {
        this.c = context;
        this.f292a = dsVar;
        this.b = bvVar;
        this.e = bmVar;
    }

    public br a(long j, long j2) {
        ig.a("Starting mediation.");
        for (bl blVar : this.e.f295a) {
            ig.c("Trying mediation network: " + blVar.b);
            for (String str : blVar.c) {
                synchronized (this.d) {
                    if (this.f) {
                        return new br(-1);
                    }
                    this.g = new bp(this.c, str, this.b, this.e, blVar, this.f292a.c, this.f292a.d, this.f292a.k);
                    br brVarA = this.g.a(j, j2);
                    if (brVarA.f299a == 0) {
                        ig.a("Adapter succeeded.");
                        return brVarA;
                    }
                    if (brVarA.c != null) {
                        Cif.f427a.post(new bk(this, brVarA));
                    }
                }
            }
        }
        return new br(1);
    }

    public void a() {
        synchronized (this.d) {
            this.f = true;
            if (this.g != null) {
                this.g.a();
            }
        }
    }
}
