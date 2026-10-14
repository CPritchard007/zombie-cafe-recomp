package com.google.android.gms.internal;

import android.app.Activity;
import android.content.ComponentCallbacks;
import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.graphics.Rect;
import android.os.Build;
import android.os.Bundle;
import android.os.RemoteException;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import java.util.ArrayList;
import java.util.HashSet;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class oz extends z implements aq, bc, be, bn, dh, dm, fq, hi, oy {

    /* renamed from: a, reason: collision with root package name */
    private final bv f518a;
    private final pd b;
    private boolean e;
    private final ComponentCallbacks f = new pa(this);
    private final pg c = new pg(this);
    private final b d = new b();

    public oz(Context context, al alVar, String str, bv bvVar, ev evVar) {
        this.b = new pd(context, alVar, str, evVar);
        this.f518a = bvVar;
        hq.b(context);
        s();
    }

    private void A() {
        if (this.b.i != null) {
            this.b.i.b.destroy();
            this.b.i = null;
        }
    }

    private void a(int i) {
        ig.e("Failed to load ad: " + i);
        if (this.b.f != null) {
            try {
                this.b.f.a(i);
            } catch (RemoteException e) {
                ig.c("Could not call AdListener.onAdFailedToLoad().", e);
            }
        }
    }

    private void a(View view) {
        this.b.f522a.addView(view, new ViewGroup.LayoutParams(-2, -2));
    }

    private void b(boolean z) {
        if (this.b.i == null) {
            ig.e("Ad state was null when trying to ping impression URLs.");
            return;
        }
        ig.a("Pinging Impression URLs.");
        this.b.j.a();
        if (this.b.i.e != null) {
            hq.a(this.b.c, this.b.e.b, this.b.i.e);
        }
        if (this.b.i.o != null && this.b.i.o.d != null) {
            bt.a(this.b.c, this.b.e.b, this.b.i, this.b.b, z, this.b.i.o.d);
        }
        if (this.b.i.l == null || this.b.i.l.f == null) {
            return;
        }
        bt.a(this.b.c, this.b.e.b, this.b.i, this.b.b, z, this.b.i.l.f);
    }

    private boolean b(hd hdVar) {
        if (hdVar.k) {
            try {
                View view = (View) com.google.android.gms.a.d.a(hdVar.m.a());
                View nextView = this.b.f522a.getNextView();
                if (nextView != null) {
                    this.b.f522a.removeView(nextView);
                }
                try {
                    a(view);
                } catch (Throwable th) {
                    ig.c("Could not add mediation view to view hierarchy.", th);
                    return false;
                }
            } catch (RemoteException e) {
                ig.c("Could not get View from mediation adapter.", e);
                return false;
            }
        } else if (hdVar.r != null) {
            hdVar.b.a(hdVar.r);
            this.b.f522a.removeAllViews();
            this.b.f522a.setMinimumWidth(hdVar.r.g);
            this.b.f522a.setMinimumHeight(hdVar.r.d);
            a(hdVar.b);
        }
        if (this.b.f522a.getChildCount() > 1) {
            this.b.f522a.showNext();
        }
        if (this.b.i != null) {
            View nextView2 = this.b.f522a.getNextView();
            if (nextView2 instanceof ii) {
                ((ii) nextView2).a(this.b.c, this.b.h);
            } else if (nextView2 != null) {
                this.b.f522a.removeView(nextView2);
            }
            if (this.b.i.m != null) {
                try {
                    this.b.i.m.c();
                } catch (RemoteException e2) {
                    ig.e("Could not destroy previous mediation adapter.");
                }
            }
        }
        this.b.f522a.setVisibility(0);
        return true;
    }

    private gh c(ai aiVar) throws PackageManager.NameNotFoundException {
        PackageInfo packageInfo;
        Bundle bundle;
        ApplicationInfo applicationInfo = this.b.c.getApplicationInfo();
        try {
            packageInfo = this.b.c.getPackageManager().getPackageInfo(applicationInfo.packageName, 0);
        } catch (PackageManager.NameNotFoundException e) {
            packageInfo = null;
        }
        if (this.b.h.e || this.b.f522a.getParent() == null) {
            bundle = null;
        } else {
            int[] iArr = new int[2];
            this.b.f522a.getLocationOnScreen(iArr);
            int i = iArr[0];
            int i2 = iArr[1];
            DisplayMetrics displayMetrics = this.b.c.getResources().getDisplayMetrics();
            int width = this.b.f522a.getWidth();
            int height = this.b.f522a.getHeight();
            int i3 = (!this.b.f522a.isShown() || i + width <= 0 || i2 + height <= 0 || i > displayMetrics.widthPixels || i2 > displayMetrics.heightPixels) ? 0 : 1;
            bundle = new Bundle(5);
            bundle.putInt("x", i);
            bundle.putInt("y", i2);
            bundle.putInt("width", width);
            bundle.putInt("height", height);
            bundle.putInt("visible", i3);
        }
        String strB = hg.b();
        this.b.j = new he(strB, this.b.b);
        this.b.j.a(aiVar);
        return new gh(bundle, aiVar, this.b.h, this.b.b, applicationInfo, packageInfo, strB, hg.f403a, this.b.e, hg.a(this.b.c, this, strB));
    }

    private void s() {
        if (Build.VERSION.SDK_INT < 14 || this.b == null || this.b.c == null) {
            return;
        }
        this.b.c.registerComponentCallbacks(this.f);
    }

    private void t() {
        if (Build.VERSION.SDK_INT < 14 || this.b == null || this.b.c == null) {
            return;
        }
        this.b.c.unregisterComponentCallbacks(this.f);
    }

    private void u() {
        ig.c("Ad closing.");
        if (this.b.f != null) {
            try {
                this.b.f.a();
            } catch (RemoteException e) {
                ig.c("Could not call AdListener.onAdClosed().", e);
            }
        }
    }

    private void v() {
        ig.c("Ad leaving application.");
        if (this.b.f != null) {
            try {
                this.b.f.b();
            } catch (RemoteException e) {
                ig.c("Could not call AdListener.onAdLeftApplication().", e);
            }
        }
    }

    private void w() {
        ig.c("Ad opening.");
        if (this.b.f != null) {
            try {
                this.b.f.d();
            } catch (RemoteException e) {
                ig.c("Could not call AdListener.onAdOpened().", e);
            }
        }
    }

    private void x() {
        ig.c("Ad finished loading.");
        if (this.b.f != null) {
            try {
                this.b.f.c();
            } catch (RemoteException e) {
                ig.c("Could not call AdListener.onAdLoaded().", e);
            }
        }
    }

    private boolean y() {
        boolean z = true;
        if (!hq.a(this.b.c.getPackageManager(), this.b.c.getPackageName(), "android.permission.INTERNET")) {
            if (!this.b.h.e) {
                Cif.a(this.b.f522a, this.b.h, "Missing internet permission in AndroidManifest.xml.", "Missing internet permission in AndroidManifest.xml. You must have the following declaration: <uses-permission android:name=\"android.permission.INTERNET\" />");
            }
            z = false;
        }
        if (!hq.a(this.b.c)) {
            if (!this.b.h.e) {
                Cif.a(this.b.f522a, this.b.h, "Missing AdActivity with android:configChanges in AndroidManifest.xml.", "Missing AdActivity with android:configChanges in AndroidManifest.xml. You must have the following declaration within the <application> element: <activity android:name=\"com.google.android.gms.ads.AdActivity\" android:configChanges=\"keyboard|keyboardHidden|orientation|screenLayout|uiMode|screenSize|smallestScreenSize\" />");
            }
            z = false;
        }
        if (!z && !this.b.h.e) {
            this.b.f522a.setVisibility(0);
        }
        return z;
    }

    private void z() {
        if (this.b.i == null) {
            ig.e("Ad state was null when trying to ping click URLs.");
            return;
        }
        ig.a("Pinging click URLs.");
        this.b.j.b();
        if (this.b.i.c != null) {
            hq.a(this.b.c, this.b.e.b, this.b.i.c);
        }
        if (this.b.i.o == null || this.b.i.o.c == null) {
            return;
        }
        bt.a(this.b.c, this.b.e.b, this.b.i, this.b.b, false, this.b.i.o.c);
    }

    @Override // com.google.android.gms.internal.y
    public com.google.android.gms.a.a a() {
        ls.b("getAdFrame must be called on the main UI thread.");
        return com.google.android.gms.a.d.a(this.b.f522a);
    }

    @Override // com.google.android.gms.internal.y
    public void a(ae aeVar) {
        ls.b("setAppEventListener must be called on the main UI thread.");
        this.b.k = aeVar;
    }

    @Override // com.google.android.gms.internal.y
    public void a(al alVar) {
        ls.b("setAdSize must be called on the main UI thread.");
        this.b.h = alVar;
        if (this.b.i != null) {
            this.b.i.b.a(alVar);
        }
        if (this.b.f522a.getChildCount() > 1) {
            this.b.f522a.removeView(this.b.f522a.getNextView());
        }
        this.b.f522a.setMinimumWidth(alVar.g);
        this.b.f522a.setMinimumHeight(alVar.d);
        this.b.f522a.requestLayout();
    }

    @Override // com.google.android.gms.internal.y
    public void a(en enVar) {
        ls.b("setInAppPurchaseListener must be called on the main UI thread.");
        this.b.m = enVar;
    }

    @Override // com.google.android.gms.internal.y
    public void a(fa faVar, String str) {
        ls.b("setPlayStorePurchaseParams must be called on the main UI thread.");
        this.b.n = new ei(str);
        this.b.l = faVar;
        if (hg.f() || faVar == null) {
            return;
        }
        new dz(this.b.c, this.b.l, this.b.n).e();
    }

    @Override // com.google.android.gms.internal.fq
    public void a(hd hdVar) {
        int i;
        int i2 = 0;
        this.b.g = null;
        if (hdVar.d != -2 && hdVar.d != 3) {
            hg.a(this.b.a());
        }
        if (hdVar.d == -1) {
            return;
        }
        boolean z = hdVar.f400a.c != null ? hdVar.f400a.c.getBoolean("_noRefresh", false) : false;
        if (this.b.h.e) {
            hq.a(hdVar.b);
        } else if (!z) {
            if (hdVar.h > 0) {
                this.c.a(hdVar.f400a, hdVar.h);
            } else if (hdVar.o != null && hdVar.o.g > 0) {
                this.c.a(hdVar.f400a, hdVar.o.g);
            } else if (!hdVar.k && hdVar.d == 2) {
                this.c.a(hdVar.f400a);
            }
        }
        if (hdVar.d == 3 && hdVar.o != null && hdVar.o.e != null) {
            ig.a("Pinging no fill URLs.");
            bt.a(this.b.c, this.b.e.b, hdVar, this.b.b, false, hdVar.o.e);
        }
        if (hdVar.d != -2) {
            a(hdVar.d);
            return;
        }
        if (!this.b.h.e) {
            if (!b(hdVar)) {
                a(0);
                return;
            } else if (this.b.f522a != null) {
                this.b.f522a.f520a.a(hdVar.v);
            }
        }
        if (this.b.i != null && this.b.i.p != null) {
            this.b.i.p.a((bn) null);
        }
        if (hdVar.p != null) {
            hdVar.p.a((bn) this);
        }
        this.d.b(this.b.i);
        this.b.i = hdVar;
        if (hdVar.r != null) {
            this.b.h = hdVar.r;
        }
        this.b.j.a(hdVar.t);
        this.b.j.b(hdVar.u);
        this.b.j.a(this.b.h.e);
        this.b.j.b(hdVar.k);
        if (!this.b.h.e) {
            b(false);
        }
        if (this.b.o == null) {
            this.b.o = new hj(this.b.b);
        }
        if (hdVar.o != null) {
            i = hdVar.o.h;
            i2 = hdVar.o.i;
        } else {
            i = 0;
        }
        this.b.o.a(i, i2);
        if (!this.b.h.e && hdVar.b != null && (hdVar.b.f().a() || hdVar.j != null)) {
            c cVarA = this.d.a(this.b.h, this.b.i);
            if (hdVar.b.f().a() && cVarA != null) {
                cVarA.a(new pf(hdVar.b));
            }
        }
        this.b.i.b.a();
        x();
    }

    @Override // com.google.android.gms.internal.y
    public void a(u uVar) {
        ls.b("setAdListener must be called on the main UI thread.");
        this.b.f = uVar;
    }

    @Override // com.google.android.gms.internal.aq
    public void a(String str, String str2) {
        if (this.b.k != null) {
            try {
                this.b.k.a(str, str2);
            } catch (RemoteException e) {
                ig.c("Could not call the AppEventListener.", e);
            }
        }
    }

    @Override // com.google.android.gms.internal.bc
    public void a(String str, ArrayList arrayList) {
        eb ebVar = new eb(str, arrayList, this.b.c, this.b.e.b);
        if (this.b.m != null) {
            try {
                this.b.m.a(ebVar);
                return;
            } catch (RemoteException e) {
                ig.e("Could not start In-App purchase.");
                return;
            }
        }
        ig.e("InAppPurchaseListener is not set. Try to launch default purchase flow.");
        if (com.google.android.gms.common.g.a(this.b.c) != 0) {
            ig.e("Google Play Service unavailable, cannot launch default purchase flow.");
            return;
        }
        if (this.b.l == null) {
            ig.e("PlayStorePurchaseListener is not set.");
            return;
        }
        if (this.b.n == null) {
            ig.e("PlayStorePurchaseVerifier is not initialized.");
            return;
        }
        try {
            if (!this.b.l.a(str)) {
                return;
            }
        } catch (RemoteException e2) {
            ig.e("Could not start In-App purchase.");
        }
        ec.a(this.b.c, this.b.e.e, new cq(ebVar, this.b.l, this.b.n, this.b.c));
    }

    @Override // com.google.android.gms.internal.hi
    public void a(HashSet hashSet) {
        this.b.a(hashSet);
    }

    @Override // com.google.android.gms.internal.be
    public void a(boolean z) {
        this.b.p = z;
    }

    @Override // com.google.android.gms.internal.y
    public boolean a(ai aiVar) throws PackageManager.NameNotFoundException {
        ii iiVarA;
        ii iiVar;
        ls.b("loadAd must be called on the main UI thread.");
        if (this.b.g != null) {
            ig.e("An ad request is already in progress. Aborting.");
            return false;
        }
        if (this.b.h.e && this.b.i != null) {
            ig.e("An interstitial is already loading. Aborting.");
            return false;
        }
        if (!y()) {
            return false;
        }
        ig.c("Starting ad request.");
        if (!aiVar.f) {
            ig.c("Use AdRequest.Builder.addTestDevice(\"" + Cif.a(this.b.c) + "\") to get test ads on this device.");
        }
        this.c.a();
        this.b.p = false;
        gh ghVarC = c(aiVar);
        if (this.b.h.e) {
            ii iiVarA2 = ii.a(this.b.c, this.b.h, false, false, this.b.d, this.b.e);
            iiVarA2.f().a(this, null, this, this, true, this, this);
            iiVar = iiVarA2;
        } else {
            View nextView = this.b.f522a.getNextView();
            if (nextView instanceof ii) {
                iiVarA = (ii) nextView;
                iiVarA.a(this.b.c, this.b.h);
            } else {
                if (nextView != null) {
                    this.b.f522a.removeView(nextView);
                }
                iiVarA = ii.a(this.b.c, this.b.h, false, false, this.b.d, this.b.e);
                if (this.b.h.h == null) {
                    a(iiVarA);
                }
            }
            iiVarA.f().a(this, this, this, this, false, this);
            iiVar = iiVarA;
        }
        this.b.g = fo.a(this.b.c, ghVarC, this.b.d, iiVar, this.f518a, this);
        return true;
    }

    @Override // com.google.android.gms.internal.y
    public void b() {
        ls.b("destroy must be called on the main UI thread.");
        t();
        this.b.f = null;
        this.b.k = null;
        this.c.a();
        this.d.a();
        g();
        if (this.b.f522a != null) {
            this.b.f522a.removeAllViews();
        }
        if (this.b.i != null && this.b.i.b != null) {
            this.b.i.b.destroy();
        }
        if (this.b.i == null || this.b.i.m == null) {
            return;
        }
        try {
            this.b.i.m.c();
        } catch (RemoteException e) {
            ig.e("Could not destroy mediation adapter.");
        }
    }

    public void b(ai aiVar) throws PackageManager.NameNotFoundException {
        Object parent = this.b.f522a.getParent();
        if ((parent instanceof View) && ((View) parent).isShown() && hq.a() && !this.e) {
            a(aiVar);
        } else {
            ig.c("Ad is not visible. Not refreshing ad.");
            this.c.a(aiVar);
        }
    }

    @Override // com.google.android.gms.internal.y
    public boolean c() {
        ls.b("isLoaded must be called on the main UI thread.");
        return this.b.g == null && this.b.i != null;
    }

    @Override // com.google.android.gms.internal.y
    public void d() {
        ls.b("pause must be called on the main UI thread.");
        if (this.b.i != null) {
            hq.a(this.b.i.b);
        }
        if (this.b.i != null && this.b.i.m != null) {
            try {
                this.b.i.m.d();
            } catch (RemoteException e) {
                ig.e("Could not pause mediation adapter.");
            }
        }
        this.d.b();
        this.c.b();
    }

    @Override // com.google.android.gms.internal.y
    public void e() {
        ls.b("resume must be called on the main UI thread.");
        if (this.b.i != null) {
            hq.b(this.b.i.b);
        }
        if (this.b.i != null && this.b.i.m != null) {
            try {
                this.b.i.m.e();
            } catch (RemoteException e) {
                ig.e("Could not resume mediation adapter.");
            }
        }
        this.c.c();
        this.d.c();
    }

    @Override // com.google.android.gms.internal.y
    public void f() {
        ls.b("showInterstitial must be called on the main UI thread.");
        if (!this.b.h.e) {
            ig.e("Cannot call showInterstitial on a banner ad.");
            return;
        }
        if (this.b.i == null) {
            ig.e("The interstitial has not loaded.");
            return;
        }
        if (this.b.i.b.i()) {
            ig.e("The interstitial is already showing.");
            return;
        }
        this.b.i.b.a(true);
        if (this.b.i.b.f().a() || this.b.i.j != null) {
            c cVarA = this.d.a(this.b.h, this.b.i);
            if (this.b.i.b.f().a() && cVarA != null) {
                cVarA.a(new pf(this.b.i.b));
            }
        }
        if (this.b.i.k) {
            try {
                this.b.i.m.b();
                return;
            } catch (RemoteException e) {
                ig.c("Could not show interstitial.", e);
                A();
                return;
            }
        }
        v vVar = new v(this.b.p, false);
        if (this.b.c instanceof Activity) {
            Window window = ((Activity) this.b.c).getWindow();
            Rect rect = new Rect();
            Rect rect2 = new Rect();
            window.getDecorView().getGlobalVisibleRect(rect);
            window.getDecorView().getWindowVisibleDisplayFrame(rect2);
            if (rect.bottom != 0 && rect2.bottom != 0) {
                vVar = new v(this.b.p, rect.top == rect2.top);
            }
        }
        db.a(this.b.c, new ch(this, this, this, this.b.i.b, this.b.i.g, this.b.e, this.b.i.v, vVar));
    }

    @Override // com.google.android.gms.internal.y
    public void g() {
        ls.b("stopLoading must be called on the main UI thread.");
        if (this.b.i != null) {
            this.b.i.b.stopLoading();
            this.b.i = null;
        }
        if (this.b.g != null) {
            this.b.g.f();
        }
    }

    @Override // com.google.android.gms.internal.y
    public void h() {
        ls.b("recordManualImpression must be called on the main UI thread.");
        if (this.b.i == null) {
            ig.e("Ad state was null when trying to ping manual tracking URLs.");
            return;
        }
        ig.a("Pinging manual tracking URLs.");
        if (this.b.i.f != null) {
            hq.a(this.b.c, this.b.e.b, this.b.i.f);
        }
    }

    @Override // com.google.android.gms.internal.y
    public al i() {
        ls.b("getAdSize must be called on the main UI thread.");
        return this.b.h;
    }

    @Override // com.google.android.gms.internal.bn
    public void j() {
        r();
    }

    @Override // com.google.android.gms.internal.bn
    public void k() {
        o();
    }

    @Override // com.google.android.gms.internal.bn
    public void l() {
        q();
    }

    @Override // com.google.android.gms.internal.bn
    public void m() {
        p();
    }

    @Override // com.google.android.gms.internal.bn
    public void n() {
        if (this.b.i != null) {
            ig.e("Mediation adapter " + this.b.i.n + " refreshed, but mediation adapters should never refresh.");
        }
        b(true);
        x();
    }

    @Override // com.google.android.gms.internal.dh
    public void o() {
        this.d.b(this.b.i);
        if (this.b.h.e) {
            A();
        }
        this.e = false;
        u();
        this.b.j.c();
    }

    @Override // com.google.android.gms.internal.dh
    public void p() {
        if (this.b.h.e) {
            b(false);
        }
        this.e = true;
        w();
    }

    @Override // com.google.android.gms.internal.dm
    public void q() {
        v();
    }

    @Override // com.google.android.gms.internal.oy
    public void r() {
        z();
    }
}
