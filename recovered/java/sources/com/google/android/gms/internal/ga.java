package com.google.android.gms.internal;

import android.content.Context;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ga {
    public static hl a(Context context, ds dsVar, gb gbVar) {
        return dsVar.k.e ? b(context, dsVar, gbVar) : c(context, dsVar, gbVar);
    }

    private static hl b(Context context, ds dsVar, gb gbVar) {
        ig.a("Fetching ad response from local ad request service.");
        gd gdVar = new gd(context, dsVar, gbVar);
        gdVar.e();
        return gdVar;
    }

    private static hl c(Context context, ds dsVar, gb gbVar) {
        ig.a("Fetching ad response from remote ad request service.");
        if (com.google.android.gms.common.g.a(context) == 0) {
            return new gf(context, dsVar, gbVar);
        }
        ig.e("Failed to connect to remote ad request service.");
        return null;
    }
}
