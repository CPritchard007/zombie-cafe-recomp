package com.google.ads.mediation.admob;

import com.google.android.gms.ads.AdListener;
import com.google.android.gms.ads.mediation.MediationInterstitialListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class b extends AdListener {

    /* renamed from: a, reason: collision with root package name */
    private final AdMobAdapter f127a;
    private final MediationInterstitialListener b;

    public b(AdMobAdapter adMobAdapter, MediationInterstitialListener mediationInterstitialListener) {
        this.f127a = adMobAdapter;
        this.b = mediationInterstitialListener;
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdClosed() {
        this.b.onAdClosed(this.f127a);
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdFailedToLoad(int i) {
        this.b.onAdFailedToLoad(this.f127a, i);
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdLeftApplication() {
        this.b.onAdLeftApplication(this.f127a);
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdLoaded() {
        this.b.onAdLoaded(this.f127a);
    }

    @Override // com.google.android.gms.ads.AdListener
    public void onAdOpened() {
        this.b.onAdOpened(this.f127a);
    }
}
