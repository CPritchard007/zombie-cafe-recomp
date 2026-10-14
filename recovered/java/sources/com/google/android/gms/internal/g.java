package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class g implements bb {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ c f378a;

    g(c cVar) {
        this.f378a = cVar;
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        if (map.containsKey("pingType") && "unloadPing".equals(map.get("pingType"))) {
            this.f378a.c(this.f378a.g);
            ig.c("Unregistered GMSG handlers for: " + this.f378a.e.d());
        }
    }
}
