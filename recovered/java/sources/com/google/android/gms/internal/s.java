package com.google.android.gms.internal;

import com.google.android.gms.ads.doubleclick.AppEventListener;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class s extends af {

    /* renamed from: a, reason: collision with root package name */
    private final AppEventListener f528a;

    public s(AppEventListener appEventListener) {
        this.f528a = appEventListener;
    }

    @Override // com.google.android.gms.internal.ae
    public void a(String str, String str2) {
        this.f528a.onAppEvent(str, str2);
    }
}
