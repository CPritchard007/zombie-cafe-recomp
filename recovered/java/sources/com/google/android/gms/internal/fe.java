package com.google.android.gms.internal;

import com.google.android.gms.ads.purchase.InAppPurchaseListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class fe extends eo {

    /* renamed from: a, reason: collision with root package name */
    private final InAppPurchaseListener f359a;

    public fe(InAppPurchaseListener inAppPurchaseListener) {
        this.f359a = inAppPurchaseListener;
    }

    @Override // com.google.android.gms.internal.en
    public void a(ek ekVar) {
        this.f359a.onInAppPurchaseRequested(new fl(ekVar));
    }
}
