package com.google.ads.mediation.admob;

import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.mediation.MediationBannerListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class a extends AdListener {

    /* renamed from: a, reason: collision with root package name */
    private final AdMobAdapter f126a;
    private final MediationBannerListener b;

    public a(AdMobAdapter adMobAdapter, MediationBannerListener mediationBannerListener) {
        this.f126a = adMobAdapter;
        this.b = mediationBannerListener;
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdClosed() {
        this.b.onAdClosed(this.f126a);
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdFailedToLoad(int i) {
        this.b.onAdFailedToLoad(this.f126a, i);
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdLeftApplication() {
        this.b.onAdLeftApplication(this.f126a);
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdLoaded() {
        this.b.onAdLoaded(this.f126a);
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdOpened() {
        this.b.onAdClicked(this.f126a);
        this.b.onAdOpened(this.f126a);
    }
}
