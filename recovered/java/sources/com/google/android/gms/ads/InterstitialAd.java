package com.google.android.gms.ads;

import android.content.Context;
import com.google.android.gms.ads.purchase.InAppPurchaseListener;
import com.google.android.gms.ads.purchase.PlayStorePurchaseListener;
import com.google.android.gms.internal.am;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class InterstitialAd {

    /* renamed from: a, reason: collision with root package name */
    private final am f139a;

    public InterstitialAd(Context context) {
        this.f139a = new am(context);
    }

    public AdListener getAdListener() {
        return this.f139a.a();
    }

    public String getAdUnitId() {
        return this.f139a.b();
    }

    public InAppPurchaseListener getInAppPurchaseListener() {
        return this.f139a.d();
    }

    public boolean isLoaded() {
        return this.f139a.e();
    }

    public void loadAd(AdRequest adRequest) {
        this.f139a.a(adRequest.a());
    }

    public void setAdListener(AdListener adListener) {
        this.f139a.a(adListener);
    }

    public void setAdUnitId(String str) {
        this.f139a.a(str);
    }

    public void setInAppPurchaseListener(InAppPurchaseListener inAppPurchaseListener) {
        this.f139a.a(inAppPurchaseListener);
    }

    public void setPlayStorePurchaseParams(PlayStorePurchaseListener playStorePurchaseListener, String str) {
        this.f139a.a(playStorePurchaseListener, str);
    }

    public void show() {
        this.f139a.f();
    }
}
