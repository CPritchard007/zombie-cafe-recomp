package com.google.ads.mediation.customevent;

import android.view.View;
import com.google.ads.AdRequest;
import com.google.ads.mediation.MediationBannerListener;
import com.google.android.gms.internal.ig;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class a implements CustomEventBannerListener {

    /* renamed from: a, reason: collision with root package name */
    private final CustomEventAdapter f129a;
    private final MediationBannerListener b;

    public a(CustomEventAdapter customEventAdapter, MediationBannerListener mediationBannerListener) {
        this.f129a = customEventAdapter;
        this.b = mediationBannerListener;
    }

    @Override // com.google.ads.mediation.customevent.CustomEventBannerListener
    public void onClick() {
        ig.a("Custom event adapter called onFailedToReceiveAd.");
        this.b.onClick(this.f129a);
    }

    @Override // com.google.ads.mediation.customevent.CustomEventListener
    public void onDismissScreen() {
        ig.a("Custom event adapter called onFailedToReceiveAd.");
        this.b.onDismissScreen(this.f129a);
    }

    @Override // com.google.ads.mediation.customevent.CustomEventListener
    public void onFailedToReceiveAd() {
        ig.a("Custom event adapter called onFailedToReceiveAd.");
        this.b.onFailedToReceiveAd(this.f129a, AdRequest.ErrorCode.NO_FILL);
    }

    @Override // com.google.ads.mediation.customevent.CustomEventListener
    public void onLeaveApplication() {
        ig.a("Custom event adapter called onFailedToReceiveAd.");
        this.b.onLeaveApplication(this.f129a);
    }

    @Override // com.google.ads.mediation.customevent.CustomEventListener
    public void onPresentScreen() {
        ig.a("Custom event adapter called onFailedToReceiveAd.");
        this.b.onPresentScreen(this.f129a);
    }

    @Override // com.google.ads.mediation.customevent.CustomEventBannerListener
    public void onReceivedAd(View view) {
        ig.a("Custom event adapter called onReceivedAd.");
        this.f129a.a(view);
        this.b.onReceivedAd(this.f129a);
    }
}
