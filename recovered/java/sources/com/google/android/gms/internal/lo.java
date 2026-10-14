package com.google.android.gms.internal;

import java.util.Arrays;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class lo {
    public static int a(Object... objArr) {
        return Arrays.hashCode(objArr);
    }

    public static lq a(Object obj) {
        return new lq(obj);
    }

    public static boolean a(Object obj, Object obj2) {
        return obj == obj2 || (obj != null && obj.equals(obj2));
    }
}
