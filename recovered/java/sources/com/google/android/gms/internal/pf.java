package com.google.android.gms.internal;

import java.util.HashMap;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class pf implements pj {

    /* renamed from: a, reason: collision with root package name */
    private ii f523a;

    public pf(ii iiVar) {
        this.f523a = iiVar;
    }

    @Override // com.google.android.gms.internal.pj
    public void a(c cVar, boolean z) {
        HashMap map = new HashMap();
        map.put("isVisible", z ? "1" : "0");
        this.f523a.a("onAdVisibilityChanged", map);
    }
}
