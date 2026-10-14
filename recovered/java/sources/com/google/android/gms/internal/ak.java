package com.google.android.gms.internal;

import android.content.Context;
import android.os.RemoteException;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.ads.doubleclick.AppEventListener;
import com.google.android.gms.ads.purchase.InAppPurchaseListener;
import com.google.android.gms.ads.purchase.PlayStorePurchaseListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ak {

    /* renamed from: a, reason: collision with root package name */
    private final bu f282a;
    private final q b;
    private AdListener c;
    private y d;
    private AdSize[] e;
    private String f;
    private String g;
    private ViewGroup h;
    private AppEventListener i;
    private InAppPurchaseListener j;
    private PlayStorePurchaseListener k;

    public ak(ViewGroup viewGroup) {
        this(viewGroup, null, false, q.a());
    }

    public ak(ViewGroup viewGroup, AttributeSet attributeSet, boolean z) {
        this(viewGroup, attributeSet, z, q.a());
    }

    ak(ViewGroup viewGroup, AttributeSet attributeSet, boolean z, q qVar) {
        this.f282a = new bu();
        this.h = viewGroup;
        this.b = qVar;
        if (attributeSet != null) {
            Context context = viewGroup.getContext();
            try {
                t tVar = new t(context, attributeSet);
                this.e = tVar.a(z);
                this.f = tVar.a();
                if (viewGroup.isInEditMode()) {
                    Cif.a(viewGroup, new al(context, this.e[0]), "Ads by Google");
                }
            } catch (IllegalArgumentException e) {
                Cif.a(viewGroup, new al(context, AdSize.BANNER), e.getMessage(), e.getMessage());
            }
        }
    }

    private void k() {
        try {
            com.google.android.gms.a.a aVarA = this.d.a();
            if (aVarA == null) {
                return;
            }
            this.h.addView((View) com.google.android.gms.a.d.a(aVarA));
        } catch (RemoteException e) {
            ig.c("Failed to get an ad frame.", e);
        }
    }

    private void l() {
        if ((this.e == null || this.f == null) && this.d == null) {
            throw new IllegalStateException("The ad size and ad unit ID must be set before loadAd is called.");
        }
        Context context = this.h.getContext();
        this.d = o.a(context, new al(context, this.e), this.f, this.f282a);
        if (this.c != null) {
            this.d.a(new n(this.c));
        }
        if (this.i != null) {
            this.d.a(new s(this.i));
        }
        if (this.j != null) {
            this.d.a(new fe(this.j));
        }
        if (this.k != null) {
            this.d.a(new fn(this.k), this.g);
        }
        k();
    }

    public void a() {
        try {
            if (this.d != null) {
                this.d.b();
            }
        } catch (RemoteException e) {
            ig.c("Failed to destroy AdView.", e);
        }
    }

    public void a(AdListener adListener) {
        try {
            this.c = adListener;
            if (this.d != null) {
                this.d.a(adListener != null ? new n(adListener) : null);
            }
        } catch (RemoteException e) {
            ig.c("Failed to set the AdListener.", e);
        }
    }

    public void a(AppEventListener appEventListener) {
        try {
            this.i = appEventListener;
            if (this.d != null) {
                this.d.a(appEventListener != null ? new s(appEventListener) : null);
            }
        } catch (RemoteException e) {
            ig.c("Failed to set the AppEventListener.", e);
        }
    }

    public void a(InAppPurchaseListener inAppPurchaseListener) {
        if (this.k != null) {
            throw new IllegalStateException("Play store purchase parameter has already been set.");
        }
        try {
            this.j = inAppPurchaseListener;
            if (this.d != null) {
                this.d.a(inAppPurchaseListener != null ? new fe(inAppPurchaseListener) : null);
            }
        } catch (RemoteException e) {
            ig.c("Failed to set the InAppPurchaseListener.", e);
        }
    }

    public void a(PlayStorePurchaseListener playStorePurchaseListener, String str) {
        if (this.j != null) {
            throw new IllegalStateException("InAppPurchaseListener has already been set.");
        }
        try {
            this.k = playStorePurchaseListener;
            this.g = str;
            if (this.d != null) {
                this.d.a(playStorePurchaseListener != null ? new fn(playStorePurchaseListener) : null, str);
            }
        } catch (RemoteException e) {
            ig.c("Failed to set the play store purchase parameter.", e);
        }
    }

    public void a(ah ahVar) {
        try {
            if (this.d == null) {
                l();
            }
            if (this.d.a(this.b.a(this.h.getContext(), ahVar))) {
                this.f282a.a(ahVar.i());
            }
        } catch (RemoteException e) {
            ig.c("Failed to load ad.", e);
        }
    }

    public void a(String str) {
        if (this.f != null) {
            throw new IllegalStateException("The ad unit ID can only be set once on AdView.");
        }
        this.f = str;
    }

    public void a(AdSize... adSizeArr) {
        if (this.e != null) {
            throw new IllegalStateException("The ad size can only be set once on AdView.");
        }
        b(adSizeArr);
    }

    public AdListener b() {
        return this.c;
    }

    public void b(AdSize... adSizeArr) {
        this.e = adSizeArr;
        try {
            if (this.d != null) {
                this.d.a(new al(this.h.getContext(), this.e));
            }
        } catch (RemoteException e) {
            ig.c("Failed to set the ad size.", e);
        }
        this.h.requestLayout();
    }

    public AdSize c() {
        try {
            if (this.d != null) {
                return this.d.i().a();
            }
        } catch (RemoteException e) {
            ig.c("Failed to get the current AdSize.", e);
        }
        if (this.e != null) {
            return this.e[0];
        }
        return null;
    }

    public AdSize[] d() {
        return this.e;
    }

    public String e() {
        return this.f;
    }

    public AppEventListener f() {
        return this.i;
    }

    public InAppPurchaseListener g() {
        return this.j;
    }

    public void h() {
        try {
            if (this.d != null) {
                this.d.d();
            }
        } catch (RemoteException e) {
            ig.c("Failed to call pause.", e);
        }
    }

    public void i() {
        try {
            this.d.h();
        } catch (RemoteException e) {
            ig.c("Failed to record impression.", e);
        }
    }

    public void j() {
        try {
            if (this.d != null) {
                this.d.e();
            }
        } catch (RemoteException e) {
            ig.c("Failed to call resume.", e);
        }
    }
}
