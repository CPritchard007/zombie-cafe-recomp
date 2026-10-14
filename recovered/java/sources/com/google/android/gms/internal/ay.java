package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class ay implements bb {
    ay() {
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        String str = (String) map.get("u");
        if (str == null) {
            ig.e("URL missing from httpTrack GMSG.");
        } else {
            new id(iiVar.getContext(), iiVar.h().b, str).e();
        }
    }
}
