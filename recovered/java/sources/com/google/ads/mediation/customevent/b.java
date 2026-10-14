package com.google.ads.mediation.customevent;

import com.google.ads.AdRequest;
import com.google.ads.mediation.MediationInterstitialListener;
import com.google.android.gms.internal.ig;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class b implements CustomEventInterstitialListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ CustomEventAdapter f130a;
    private final CustomEventAdapter b;
    private final MediationInterstitialListener c;

    public b(CustomEventAdapter customEventAdapter, CustomEventAdapter customEventAdapter2, MediationInterstitialListener mediationInterstitialListener) {
        this.f130a = customEventAdapter;
        this.b = customEventAdapter2;
        this.c = mediationInterstitialListener;
    }

    @Override // com.google.ads.mediation.customevent.CustomEventListener
    public void onDismissScreen() {
        ig.a("Custom event adapter called onDismissScreen.");
        this.c.onDismissScreen(this.b);
    }

    @Override // com.google.ads.mediation.customevent.CustomEventListener
    public void onFailedToReceiveAd() {
        ig.a("Custom event adapter called onFailedToReceiveAd.");
        this.c.onFailedToReceiveAd(this.b, AdRequest.ErrorCode.NO_FILL);
    }

    @Override // com.google.ads.mediation.customevent.CustomEventListener
    public void onLeaveApplication() {
        ig.a("Custom event adapter called onLeaveApplication.");
        this.c.onLeaveApplication(this.b);
    }

    @Override // com.google.ads.mediation.customevent.CustomEventListener
    public void onPresentScreen() {
        ig.a("Custom event adapter called onPresentScreen.");
        this.c.onPresentScreen(this.b);
    }

    @Override // com.google.ads.mediation.customevent.CustomEventInterstitialListener
    public void onReceivedAd() {
        ig.a("Custom event adapter called onReceivedAd.");
        this.c.onReceivedAd(this.f130a);
    }
}
