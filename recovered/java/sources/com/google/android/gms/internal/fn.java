package com.google.android.gms.internal;

import com.google.android.gms.ads.purchase.PlayStorePurchaseListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class fn extends fb {

    /* renamed from: a, reason: collision with root package name */
    private final PlayStorePurchaseListener f367a;

    public fn(PlayStorePurchaseListener playStorePurchaseListener) {
        this.f367a = playStorePurchaseListener;
    }

    @Override // com.google.android.gms.internal.fa
    public void a(ex exVar) {
        this.f367a.onInAppPurchaseFinished(new fj(exVar));
    }

    @Override // com.google.android.gms.internal.fa
    public boolean a(String str) {
        return this.f367a.isValidPurchase(str);
    }
}
