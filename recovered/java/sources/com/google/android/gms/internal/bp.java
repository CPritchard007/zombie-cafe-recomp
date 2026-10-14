package com.google.android.gms.internal;

import android.content.Context;
import android.os.RemoteException;
import android.os.SystemClock;
import android.text.TextUtils;
import com.google.android.gms.ads.mediation.customevent.CustomEvent;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class bp implements bs {

    /* renamed from: a, reason: collision with root package name */
    private final String f297a;
    private final bv b;
    private final long c;
    private final bl d;
    private final ai e;
    private final al f;
    private final Context g;
    private final ev i;
    private by j;
    private final Object h = new Object();
    private int k = -2;

    public bp(Context context, String str, bv bvVar, bm bmVar, bl blVar, ai aiVar, al alVar, ev evVar) {
        this.g = context;
        if ("com.google.ads.mediation.customevent.CustomEventAdapter".equals(str)) {
            this.f297a = a(blVar);
        } else {
            this.f297a = str;
        }
        this.b = bvVar;
        this.c = bmVar.b != -1 ? bmVar.b : 10000L;
        this.d = blVar;
        this.e = aiVar;
        this.f = alVar;
        this.i = evVar;
    }

    private String a(bl blVar) {
        try {
            if (!TextUtils.isEmpty(blVar.e)) {
                if (CustomEvent.class.isAssignableFrom(Class.forName(blVar.e, false, bp.class.getClassLoader()))) {
                    return "com.google.android.gms.ads.mediation.customevent.CustomEventAdapter";
                }
            }
        } catch (ClassNotFoundException e) {
            ig.e("Could not create custom event adapter.");
        }
        return "com.google.ads.mediation.customevent.CustomEventAdapter";
    }

    private void a(long j, long j2, long j3, long j4) throws InterruptedException {
        while (this.k == -2) {
            b(j, j2, j3, j4);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(bo boVar) {
        try {
            if (this.i.d < 4100000) {
                if (this.f.e) {
                    this.j.a(com.google.android.gms.a.d.a(this.g), this.e, this.d.g, boVar);
                } else {
                    this.j.a(com.google.android.gms.a.d.a(this.g), this.f, this.e, this.d.g, boVar);
                }
            } else if (this.f.e) {
                this.j.a(com.google.android.gms.a.d.a(this.g), this.e, this.d.g, this.d.f294a, boVar);
            } else {
                this.j.a(com.google.android.gms.a.d.a(this.g), this.f, this.e, this.d.g, this.d.f294a, boVar);
            }
        } catch (RemoteException e) {
            ig.c("Could not request ad from mediation adapter.", e);
            a(5);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public by b() {
        ig.c("Instantiating mediation adapter: " + this.f297a);
        try {
            return this.b.a(this.f297a);
        } catch (RemoteException e) {
            ig.a("Could not instantiate mediation adapter: " + this.f297a, e);
            return null;
        }
    }

    private void b(long j, long j2, long j3, long j4) throws InterruptedException {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        long j5 = j2 - (jElapsedRealtime - j);
        long j6 = j4 - (jElapsedRealtime - j3);
        if (j5 <= 0 || j6 <= 0) {
            ig.c("Timed out waiting for adapter.");
            this.k = 3;
        } else {
            try {
                this.h.wait(Math.min(j5, j6));
            } catch (InterruptedException e) {
                this.k = -1;
            }
        }
    }

    public br a(long j, long j2) {
        br brVar;
        synchronized (this.h) {
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            bo boVar = new bo();
            Cif.f427a.post(new bq(this, boVar));
            a(jElapsedRealtime, this.c, j, j2);
            brVar = new br(this.d, this.j, this.f297a, boVar, this.k);
        }
        return brVar;
    }

    public void a() {
        synchronized (this.h) {
            try {
            } catch (RemoteException e) {
                ig.c("Could not destroy mediation adapter.", e);
            }
            if (this.j != null) {
                this.j.c();
                this.k = -1;
                this.h.notify();
            } else {
                this.k = -1;
                this.h.notify();
            }
        }
    }

    @Override // com.google.android.gms.internal.bs
    public void a(int i) {
        synchronized (this.h) {
            this.k = i;
            this.h.notify();
        }
    }
}
