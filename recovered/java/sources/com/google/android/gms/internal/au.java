package com.google.android.gms.internal;

import android.net.Uri;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class au implements bb {
    au() {
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        nq nqVarG;
        String str = (String) map.get("u");
        if (str == null) {
            ig.e("URL missing from click GMSG.");
            return;
        }
        Uri uri = Uri.parse(str);
        try {
            nqVarG = iiVar.g();
        } catch (ob e) {
            ig.e("Unable to append parameter to URL: " + str);
        }
        Uri uriA = (nqVarG == null || !nqVarG.b(uri)) ? uri : nqVarG.a(uri, iiVar.getContext());
        new id(iiVar.getContext(), iiVar.h().b, uriA.toString()).e();
    }
}
