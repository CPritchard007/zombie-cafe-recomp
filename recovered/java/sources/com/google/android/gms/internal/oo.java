package com.google.android.gms.internal;

import java.util.Arrays;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class oo {

    /* renamed from: a, reason: collision with root package name */
    final int f512a;
    final byte[] b;

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof oo)) {
            return false;
        }
        oo ooVar = (oo) obj;
        return this.f512a == ooVar.f512a && Arrays.equals(this.b, ooVar.b);
    }

    public int hashCode() {
        return ((this.f512a + 527) * 31) + Arrays.hashCode(this.b);
    }
}
