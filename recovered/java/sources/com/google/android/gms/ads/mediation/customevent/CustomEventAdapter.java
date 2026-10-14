package com.google.android.gms.ads.mediation.customevent;

import android.content.Context;
import android.os.Bundle;
import android.view.View;
import com.google.android.gms.ads.AdSize;
import com.google.android.gms.ads.mediation.MediationAdRequest;
import com.google.android.gms.ads.mediation.MediationBannerAdapter;
import com.google.android.gms.ads.mediation.MediationBannerListener;
import com.google.android.gms.ads.mediation.MediationInterstitialAdapter;
import com.google.android.gms.ads.mediation.MediationInterstitialListener;
import com.google.android.gms.internal.ig;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class CustomEventAdapter implements MediationBannerAdapter, MediationInterstitialAdapter {

    /* renamed from: a, reason: collision with root package name */
    private View f146a;
    private CustomEventBanner b;
    private CustomEventInterstitial c;

    private static Object a(String str) {
        try {
            return Class.forName(str).newInstance();
        } catch (Throwable th) {
            ig.e("Could not instantiate custom event adapter: " + str + ". " + th.getMessage());
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(View view) {
        this.f146a = view;
    }

    @Override // com.google.android.gms.ads.mediation.MediationBannerAdapter
    public View getBannerView() {
        return this.f146a;
    }

    @Override // com.google.android.gms.ads.mediation.MediationAdapter
    public void onDestroy() {
        if (this.b != null) {
            this.b.onDestroy();
        }
        if (this.c != null) {
            this.c.onDestroy();
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationAdapter
    public void onPause() {
        if (this.b != null) {
            this.b.onPause();
        }
        if (this.c != null) {
            this.c.onPause();
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationAdapter
    public void onResume() {
        if (this.b != null) {
            this.b.onResume();
        }
        if (this.c != null) {
            this.c.onResume();
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationBannerAdapter
    public void requestBannerAd(Context context, MediationBannerListener mediationBannerListener, Bundle bundle, AdSize adSize, MediationAdRequest mediationAdRequest, Bundle bundle2) {
        this.b = (CustomEventBanner) a(bundle.getString("class_name"));
        if (this.b == null) {
            mediationBannerListener.onAdFailedToLoad(this, 0);
        } else {
            this.b.requestBannerAd(context, new a(this, mediationBannerListener), bundle.getString("parameter"), adSize, mediationAdRequest, bundle2 == null ? null : bundle2.getBundle(bundle.getString("class_name")));
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationInterstitialAdapter
    public void requestInterstitialAd(Context context, MediationInterstitialListener mediationInterstitialListener, Bundle bundle, MediationAdRequest mediationAdRequest, Bundle bundle2) {
        this.c = (CustomEventInterstitial) a(bundle.getString("class_name"));
        if (this.c == null) {
            mediationInterstitialListener.onAdFailedToLoad(this, 0);
        } else {
            this.c.requestInterstitialAd(context, new b(this, this, mediationInterstitialListener), bundle.getString("parameter"), mediationAdRequest, bundle2 == null ? null : bundle2.getBundle(bundle.getString("class_name")));
        }
    }

    @Override // com.google.android.gms.ads.mediation.MediationInterstitialAdapter
    public void showInterstitial() {
        this.c.showInterstitial();
    }
}
