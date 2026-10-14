package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class ax implements bb {
    ax() {
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        db dbVarD = iiVar.d();
        if (dbVarD == null) {
            ig.e("A GMSG tried to use a custom close button on something that wasn't an overlay.");
        } else {
            dbVarD.b("1".equals(map.get("custom_close")));
        }
    }
}
