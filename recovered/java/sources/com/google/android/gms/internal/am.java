package com.google.android.gms.internal;

import android.content.Context;
import android.os.RemoteException;
import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.doubleclick.AppEventListener;
import com.google.android.gms.ads.purchase.InAppPurchaseListener;
import com.google.android.gms.ads.purchase.PlayStorePurchaseListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class am {

    /* renamed from: a, reason: collision with root package name */
    private final bu f284a;
    private final Context b;
    private final q c;
    private AdListener d;
    private y e;
    private String f;
    private String g;
    private AppEventListener h;
    private PlayStorePurchaseListener i;
    private InAppPurchaseListener j;

    public am(Context context) {
        this(context, q.a());
    }

    public am(Context context, q qVar) {
        this.f284a = new bu();
        this.b = context;
        this.c = qVar;
    }

    private void b(String str) {
        if (this.f == null) {
            c(str);
        }
        this.e = o.a(this.b, new al(), this.f, this.f284a);
        if (this.d != null) {
            this.e.a(new n(this.d));
        }
        if (this.h != null) {
            this.e.a(new s(this.h));
        }
        if (this.j != null) {
            this.e.a(new fe(this.j));
        }
        if (this.i != null) {
            this.e.a(new fn(this.i), this.g);
        }
    }

    private void c(String str) {
        if (this.e == null) {
            throw new IllegalStateException("The ad unit ID must be set on InterstitialAd before " + str + " is called.");
        }
    }

    public AdListener a() {
        return this.d;
    }

    public void a(AdListener adListener) {
        try {
            this.d = adListener;
            if (this.e != null) {
                this.e.a(adListener != null ? new n(adListener) : null);
            }
        } catch (RemoteException e) {
            ig.c("Failed to set the AdListener.", e);
        }
    }

    public void a(AppEventListener appEventListener) {
        try {
            this.h = appEventListener;
            if (this.e != null) {
                this.e.a(appEventListener != null ? new s(appEventListener) : null);
            }
        } catch (RemoteException e) {
            ig.c("Failed to set the AppEventListener.", e);
        }
    }

    public void a(InAppPurchaseListener inAppPurchaseListener) {
        if (this.i != null) {
            throw new IllegalStateException("Play store purchase parameter has already been set.");
        }
        try {
            this.j = inAppPurchaseListener;
            if (this.e != null) {
                this.e.a(inAppPurchaseListener != null ? new fe(inAppPurchaseListener) : null);
            }
        } catch (RemoteException e) {
            ig.c("Failed to set the InAppPurchaseListener.", e);
        }
    }

    public void a(PlayStorePurchaseListener playStorePurchaseListener, String str) {
        try {
            this.i = playStorePurchaseListener;
            if (this.e != null) {
                this.e.a(playStorePurchaseListener != null ? new fn(playStorePurchaseListener) : null, str);
            }
        } catch (RemoteException e) {
            ig.c("Failed to set the play store purchase parameter.", e);
        }
    }

    public void a(ah ahVar) {
        try {
            if (this.e == null) {
                b("loadAd");
            }
            if (this.e.a(this.c.a(this.b, ahVar))) {
                this.f284a.a(ahVar.i());
            }
        } catch (RemoteException e) {
            ig.c("Failed to load ad.", e);
        }
    }

    public void a(String str) {
        if (this.f != null) {
            throw new IllegalStateException("The ad unit ID can only be set once on InterstitialAd.");
        }
        this.f = str;
    }

    public String b() {
        return this.f;
    }

    public AppEventListener c() {
        return this.h;
    }

    public InAppPurchaseListener d() {
        return this.j;
    }

    public boolean e() {
        try {
            if (this.e == null) {
                return false;
            }
            return this.e.c();
        } catch (RemoteException e) {
            ig.c("Failed to check if ad is ready.", e);
            return false;
        }
    }

    public void f() {
        try {
            c("show");
            this.e.f();
        } catch (RemoteException e) {
            ig.c("Failed to show interstitial.", e);
        }
    }
}
