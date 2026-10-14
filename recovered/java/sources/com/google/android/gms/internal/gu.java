package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class gu implements bb {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ gs f393a;

    gu(gs gsVar) {
        this.f393a = gsVar;
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        synchronized (this.f393a.c) {
            gx gxVar = new gx(map);
            String strC = gxVar.c();
            if (strC == null) {
                ig.e("URL missing in loadAdUrl GMSG.");
                return;
            }
            if (strC.contains("%40mediation_adapters%40")) {
                ig.d("Ad request URL modified to " + strC.replaceAll("%40mediation_adapters%40", hk.a(iiVar.getContext(), (String) map.get("check_adapters"), this.f393a.e)));
            }
            this.f393a.g = gxVar;
            this.f393a.c.notify();
        }
    }
}
