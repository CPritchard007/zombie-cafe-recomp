package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class av implements bb {
    av() {
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        db dbVarD = iiVar.d();
        if (dbVarD == null) {
            ig.e("A GMSG tried to close something that wasn't an overlay.");
        } else {
            dbVarD.a();
        }
    }
}
