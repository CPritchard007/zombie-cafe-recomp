package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class ba implements bb {
    ba() {
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) throws NumberFormatException {
        String str = (String) map.get("tx");
        String str2 = (String) map.get("ty");
        String str3 = (String) map.get("td");
        try {
            int i = Integer.parseInt(str);
            int i2 = Integer.parseInt(str2);
            int i3 = Integer.parseInt(str3);
            nq nqVarG = iiVar.g();
            if (nqVarG != null) {
                nqVarG.a().a(i, i2, i3);
            }
        } catch (NumberFormatException e) {
            ig.e("Could not parse touch parameters from gmsg.");
        }
    }
}
