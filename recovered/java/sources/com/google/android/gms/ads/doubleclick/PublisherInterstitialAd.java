package com.google.android.gms.ads.doubleclick;

import android.content.Context;
import com.google.android.gms.ads.AdListener;
import com.google.android.gms.internal.am;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class PublisherInterstitialAd {

    /* renamed from: a, reason: collision with root package name */
    private final am f143a;

    public PublisherInterstitialAd(Context context) {
        this.f143a = new am(context);
    }

    public AdListener getAdListener() {
        return this.f143a.a();
    }

    public String getAdUnitId() {
        return this.f143a.b();
    }

    public AppEventListener getAppEventListener() {
        return this.f143a.c();
    }

    public boolean isLoaded() {
        return this.f143a.e();
    }

    public void loadAd(PublisherAdRequest publisherAdRequest) {
        this.f143a.a(publisherAdRequest.a());
    }

    public void setAdListener(AdListener adListener) {
        this.f143a.a(adListener);
    }

    public void setAdUnitId(String str) {
        this.f143a.a(str);
    }

    public void setAppEventListener(AppEventListener appEventListener) {
        this.f143a.a(appEventListener);
    }

    public void show() {
        this.f143a.f();
    }
}
