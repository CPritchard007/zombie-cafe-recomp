package com.google.android.gms.ads.mediation.customevent;

import android.view.View;
import com.google.android.gms.ads.mediation.MediationBannerListener;
import com.google.android.gms.internal.ig;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class a implements CustomEventBannerListener {

    /* renamed from: a, reason: collision with root package name */
    private final CustomEventAdapter f148a;
    private final MediationBannerListener b;

    public a(CustomEventAdapter customEventAdapter, MediationBannerListener mediationBannerListener) {
        this.f148a = customEventAdapter;
        this.b = mediationBannerListener;
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdClicked() {
        ig.a("Custom event adapter called onAdClicked.");
        this.b.onAdClicked(this.f148a);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdClosed() {
        ig.a("Custom event adapter called onAdClosed.");
        this.b.onAdClosed(this.f148a);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdFailedToLoad(int i) {
        ig.a("Custom event adapter called onAdFailedToLoad.");
        this.b.onAdFailedToLoad(this.f148a, i);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdLeftApplication() {
        ig.a("Custom event adapter called onAdLeftApplication.");
        this.b.onAdLeftApplication(this.f148a);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventBannerListener
    public void onAdLoaded(View view) {
        ig.a("Custom event adapter called onAdLoaded.");
        this.f148a.a(view);
        this.b.onAdLoaded(this.f148a);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdOpened() {
        ig.a("Custom event adapter called onAdOpened.");
        this.b.onAdOpened(this.f148a);
    }
}
