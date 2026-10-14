package com.google.android.gms.games.internal;

import com.google.android.gms.internal.ha;
import com.google.android.gms.internal.mj;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class GamesDowngradeableSafeParcel extends ha {
    protected static boolean b(Integer num) {
        if (num == null) {
            return false;
        }
        return mj.a(num.intValue());
    }
}
