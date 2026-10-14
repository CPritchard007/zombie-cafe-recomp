package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class gq implements im {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f389a;

    gq(String str) {
        this.f389a = str;
    }

    @Override // com.google.android.gms.internal.im
    public void a(ii iiVar) {
        String str = String.format("javascript:%s(%s);", "AFMA_buildAdURL", this.f389a);
        ig.d("About to execute: " + str);
        iiVar.loadUrl(str);
    }
}
