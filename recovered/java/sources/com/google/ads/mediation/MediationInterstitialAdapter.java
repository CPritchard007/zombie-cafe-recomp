package com.google.ads.mediation;

import android.app.Activity;

@Deprecated
/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public interface MediationInterstitialAdapter extends MediationAdapter {
    void requestInterstitialAd(MediationInterstitialListener mediationInterstitialListener, Activity activity, MediationServerParameters mediationServerParameters, MediationAdRequest mediationAdRequest, NetworkExtras networkExtras);

    void showInterstitial();
}
