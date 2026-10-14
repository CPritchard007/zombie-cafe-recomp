package com.google.android.gms.internal;

import com.google.android.gms.ads.AdListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class n extends w {

    /* renamed from: a, reason: collision with root package name */
    private final AdListener f504a;

    public n(AdListener adListener) {
        this.f504a = adListener;
    }

    @Override // com.google.android.gms.internal.u
    public void a() {
        this.f504a.onAdClosed();
    }

    @Override // com.google.android.gms.internal.u
    public void a(int i) {
        this.f504a.onAdFailedToLoad(i);
    }

    @Override // com.google.android.gms.internal.u
    public void b() {
        this.f504a.onAdLeftApplication();
    }

    @Override // com.google.android.gms.internal.u
    public void c() {
        this.f504a.onAdLoaded();
    }

    @Override // com.google.android.gms.internal.u
    public void d() {
        this.f504a.onAdOpened();
    }
}
