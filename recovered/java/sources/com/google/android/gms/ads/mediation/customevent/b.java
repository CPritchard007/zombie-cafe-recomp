package com.google.android.gms.ads.mediation.customevent;

import com.google.android.gms.ads.mediation.MediationInterstitialListener;
import com.google.android.gms.internal.ig;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class b implements CustomEventInterstitialListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ CustomEventAdapter f149a;
    private final CustomEventAdapter b;
    private final MediationInterstitialListener c;

    public b(CustomEventAdapter customEventAdapter, CustomEventAdapter customEventAdapter2, MediationInterstitialListener mediationInterstitialListener) {
        this.f149a = customEventAdapter;
        this.b = customEventAdapter2;
        this.c = mediationInterstitialListener;
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdClicked() {
        ig.a("Custom event adapter called onAdClicked.");
        this.c.onAdClicked(this.b);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdClosed() {
        ig.a("Custom event adapter called onAdClosed.");
        this.c.onAdClosed(this.b);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdFailedToLoad(int i) {
        ig.a("Custom event adapter called onFailedToReceiveAd.");
        this.c.onAdFailedToLoad(this.b, i);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdLeftApplication() {
        ig.a("Custom event adapter called onAdLeftApplication.");
        this.c.onAdLeftApplication(this.b);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventInterstitialListener
    public void onAdLoaded() {
        ig.a("Custom event adapter called onReceivedAd.");
        this.c.onAdLoaded(this.f149a);
    }

    @Override // com.google.android.gms.ads.mediation.customevent.CustomEventListener
    public void onAdOpened() {
        ig.a("Custom event adapter called onAdOpened.");
        this.c.onAdOpened(this.b);
    }
}
