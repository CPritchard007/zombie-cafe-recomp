package com.google.android.gms.internal;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class fs extends hl implements gb, im {

    /* renamed from: a, reason: collision with root package name */
    private final bv f370a;
    private final fq b;
    private final ii c;
    private final Context e;
    private final gh g;
    private final nq h;
    private hl i;
    private du j;
    private bj l;
    private bm m;
    private br n;
    private final Object d = new Object();
    private final Object f = new Object();
    private boolean k = false;

    public fs(Context context, gh ghVar, nq nqVar, ii iiVar, bv bvVar, fq fqVar) {
        this.f370a = bvVar;
        this.b = fqVar;
        this.c = iiVar;
        this.e = context;
        this.g = ghVar;
        this.h = nqVar;
    }

    private al a(ds dsVar) throws NumberFormatException, fx {
        if (this.j.m == null) {
            throw new fx("The ad response must specify one of the supported ad sizes.", 0);
        }
        String[] strArrSplit = this.j.m.split("x");
        if (strArrSplit.length != 2) {
            throw new fx("Could not parse the ad size from the ad response: " + this.j.m, 0);
        }
        try {
            int i = Integer.parseInt(strArrSplit[0]);
            int i2 = Integer.parseInt(strArrSplit[1]);
            for (al alVar : dsVar.d.h) {
                float f = this.e.getResources().getDisplayMetrics().density;
                int i3 = alVar.f == -1 ? (int) (alVar.g / f) : alVar.f;
                int i4 = alVar.c == -2 ? (int) (alVar.d / f) : alVar.c;
                if (i == i3 && i2 == i4) {
                    return new al(alVar, dsVar.d.h);
                }
            }
            throw new fx("The ad size from the ad response was not one of the requested sizes: " + this.j.m, 0);
        } catch (NumberFormatException e) {
            throw new fx("Could not parse the ad size from the ad response: " + this.j.m, 0);
        }
    }

    private void a(ds dsVar, long j) throws fx {
        synchronized (this.d) {
            this.l = new bj(this.e, dsVar, this.f370a, this.m);
        }
        this.n = this.l.a(j, 60000L);
        switch (this.n.f299a) {
            case 0:
                return;
            case 1:
                throw new fx("No fill from any mediation ad networks.", 3);
            default:
                throw new fx("Unexpected mediation result: " + this.n.f299a, 0);
        }
    }

    private void b(long j) throws fx {
        Cif.f427a.post(new fv(this));
        d(j);
    }

    private void c() throws fx {
        if (this.j.e == -3) {
            return;
        }
        if (TextUtils.isEmpty(this.j.c)) {
            throw new fx("No fill from ad server.", 3);
        }
        if (this.j.h) {
            try {
                this.m = new bm(this.j.c);
            } catch (JSONException e) {
                throw new fx("Could not parse mediation config: " + this.j.c, 0);
            }
        }
    }

    private void c(long j) throws fx {
        while (e(j)) {
            if (this.j != null) {
                synchronized (this.d) {
                    this.i = null;
                }
                if (this.j.e != -2 && this.j.e != -3) {
                    throw new fx("There was a problem getting an ad response. ErrorCode: " + this.j.e, this.j.e);
                }
                return;
            }
        }
        throw new fx("Timed out waiting for ad response.", 2);
    }

    private void d(long j) throws fx {
        while (e(j)) {
            if (this.k) {
                return;
            }
        }
        throw new fx("Timed out waiting for WebView to finish loading.", 2);
    }

    private boolean e(long j) throws InterruptedException, fx {
        long jElapsedRealtime = 60000 - (SystemClock.elapsedRealtime() - j);
        if (jElapsedRealtime <= 0) {
            return false;
        }
        try {
            this.f.wait(jElapsedRealtime);
            return true;
        } catch (InterruptedException e) {
            throw new fx("Ad request cancelled.", -1);
        }
    }

    @Override // com.google.android.gms.internal.hl
    public void a() {
        long j;
        al alVar;
        JSONObject jSONObject;
        synchronized (this.f) {
            ig.a("AdLoaderBackgroundTask started.");
            ke keVarA = this.h.a();
            ds dsVar = new ds(this.g, keVarA.b(this.e), keVarA.a(this.e));
            int iA = -2;
            try {
                long jElapsedRealtime = SystemClock.elapsedRealtime();
                hl hlVarA = ga.a(this.e, dsVar, this);
                synchronized (this.d) {
                    this.i = hlVarA;
                    if (this.i == null) {
                        throw new fx("Could not start the ad request service.", 0);
                    }
                }
                c(jElapsedRealtime);
                long jElapsedRealtime2 = SystemClock.elapsedRealtime();
                c();
                al alVarA = dsVar.d.h != null ? a(dsVar) : null;
                if (this.j.h) {
                    a(dsVar, jElapsedRealtime);
                } else if (this.j.p) {
                    a(jElapsedRealtime);
                } else {
                    b(jElapsedRealtime);
                }
                j = jElapsedRealtime2;
                alVar = alVarA;
            } catch (fx e) {
                iA = e.a();
                if (iA == 3 || iA == -1) {
                    ig.c(e.getMessage());
                } else {
                    ig.e(e.getMessage());
                }
                if (this.j == null) {
                    this.j = new du(iA);
                } else {
                    this.j = new du(iA, this.j.k);
                }
                Cif.f427a.post(new ft(this));
                j = -1;
                alVar = null;
            }
            if (TextUtils.isEmpty(this.j.r)) {
                jSONObject = null;
            } else {
                try {
                    jSONObject = new JSONObject(this.j.r);
                } catch (Exception e2) {
                    ig.b("Error parsing the JSON for Active View.", e2);
                }
            }
            Cif.f427a.post(new fu(this, new hd(dsVar.c, this.c, this.j.d, iA, this.j.f, this.j.j, this.j.l, this.j.k, dsVar.i, this.j.h, this.n != null ? this.n.b : null, this.n != null ? this.n.c : null, this.n != null ? this.n.d : null, this.m, this.n != null ? this.n.e : null, this.j.i, alVar, this.j.g, j, this.j.n, this.j.o, jSONObject)));
        }
    }

    protected void a(long j) throws fx {
        int i;
        int i2;
        al alVarE = this.c.e();
        if (alVarE.e) {
            i = this.e.getResources().getDisplayMetrics().widthPixels;
            i2 = this.e.getResources().getDisplayMetrics().heightPixels;
        } else {
            i = alVarE.g;
            i2 = alVarE.d;
        }
        fy fyVar = new fy(this, this.c, i, i2);
        Cif.f427a.post(new fw(this, fyVar));
        d(j);
        if (fyVar.c()) {
            ig.a("Ad-Network indicated no fill with passback URL.");
            throw new fx("AdNetwork sent passback url", 3);
        }
        if (!fyVar.d()) {
            throw new fx("AdNetwork timed out", 2);
        }
    }

    @Override // com.google.android.gms.internal.gb
    public void a(du duVar) {
        synchronized (this.f) {
            ig.a("Received ad response.");
            this.j = duVar;
            this.f.notify();
        }
    }

    @Override // com.google.android.gms.internal.im
    public void a(ii iiVar) {
        synchronized (this.f) {
            ig.a("WebView finished loading.");
            this.k = true;
            this.f.notify();
        }
    }

    @Override // com.google.android.gms.internal.hl
    public void b() {
        synchronized (this.d) {
            if (this.i != null) {
                this.i.f();
            }
            this.c.stopLoading();
            hq.a(this.c);
            if (this.l != null) {
                this.l.a();
            }
        }
    }
}
