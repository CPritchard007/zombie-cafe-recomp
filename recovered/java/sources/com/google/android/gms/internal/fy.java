package com.google.android.gms.internal;

import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fy implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    protected final ii f376a;
    protected boolean b;
    protected boolean c;
    private final Handler d;
    private final long e;
    private long f;
    private im g;
    private final int h;
    private final int i;

    public fy(im imVar, ii iiVar, int i, int i2) {
        this(imVar, iiVar, i, i2, 200L, 50L);
    }

    public fy(im imVar, ii iiVar, int i, int i2, long j, long j2) {
        this.e = j;
        this.f = j2;
        this.d = new Handler(Looper.getMainLooper());
        this.f376a = iiVar;
        this.g = imVar;
        this.b = false;
        this.c = false;
        this.h = i2;
        this.i = i;
    }

    static /* synthetic */ long c(fy fyVar) {
        long j = fyVar.f - 1;
        fyVar.f = j;
        return j;
    }

    public void a() {
        this.d.postDelayed(this, this.e);
    }

    public void a(du duVar) {
        a(duVar, new jr(this, this.f376a, duVar.q));
    }

    public void a(du duVar, jr jrVar) {
        this.f376a.setWebViewClient(jrVar);
        this.f376a.loadDataWithBaseURL(TextUtils.isEmpty(duVar.b) ? null : hq.a(duVar.b), duVar.c, "text/html", "UTF-8", null);
    }

    public synchronized void b() {
        this.b = true;
    }

    public synchronized boolean c() {
        return this.b;
    }

    public boolean d() {
        return this.c;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.f376a == null || c()) {
            this.g.a(this.f376a);
        } else {
            new fz(this, this.f376a).execute(new Void[0]);
        }
    }
}
