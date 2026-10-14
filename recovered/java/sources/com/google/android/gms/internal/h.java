package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class h implements bb {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ c f398a;

    h(c cVar) {
        this.f398a = cVar;
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        if (map.containsKey("isVisible")) {
            this.f398a.a(Boolean.valueOf("1".equals(map.get("isVisible")) || "true".equals(map.get("isVisible"))).booleanValue());
        }
    }
}
