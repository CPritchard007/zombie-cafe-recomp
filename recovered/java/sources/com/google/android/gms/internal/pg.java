package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class pg {

    /* renamed from: a, reason: collision with root package name */
    private final pi f524a;
    private final Runnable b;
    private ai c;
    private boolean d;
    private boolean e;
    private long f;

    public pg(oz ozVar) {
        this(ozVar, new pi(Cif.f427a));
    }

    pg(oz ozVar, pi piVar) {
        this.d = false;
        this.e = false;
        this.f = 0L;
        this.f524a = piVar;
        this.b = new ph(this, ozVar);
    }

    public void a() {
        this.d = false;
        this.f524a.a(this.b);
    }

    public void a(ai aiVar) {
        a(aiVar, 60000L);
    }

    public void a(ai aiVar, long j) {
        if (this.d) {
            ig.e("An ad refresh is already scheduled.");
            return;
        }
        this.c = aiVar;
        this.d = true;
        this.f = j;
        if (this.e) {
            return;
        }
        ig.c("Scheduling ad refresh " + j + " milliseconds from now.");
        this.f524a.a(this.b, j);
    }

    public void b() {
        this.e = true;
        if (this.d) {
            this.f524a.a(this.b);
        }
    }

    public void c() {
        this.e = false;
        if (this.d) {
            this.d = false;
            a(this.c, this.f);
        }
    }
}
