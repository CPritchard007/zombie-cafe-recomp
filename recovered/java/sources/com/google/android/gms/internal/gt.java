package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class gt implements bb {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ gs f392a;

    gt(gs gsVar) {
        this.f392a = gsVar;
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        synchronized (this.f392a.c) {
            gx gxVar = new gx(map);
            ig.e("Invalid " + gxVar.d() + " request error: " + gxVar.a());
            this.f392a.f = 1;
            this.f392a.c.notify();
        }
    }
}
