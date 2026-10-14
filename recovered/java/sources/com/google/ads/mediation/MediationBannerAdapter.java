package com.google.ads.mediation;

import android.app.Activity;
import android.view.View;
import com.google.ads.AdSize;

@Deprecated
/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public interface MediationBannerAdapter extends MediationAdapter {
    View getBannerView();

    void requestBannerAd(MediationBannerListener mediationBannerListener, Activity activity, MediationServerParameters mediationServerParameters, AdSize adSize, MediationAdRequest mediationAdRequest, NetworkExtras networkExtras);
}
