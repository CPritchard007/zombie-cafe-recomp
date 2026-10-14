package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class kk {

    /* renamed from: a, reason: collision with root package name */
    public final int f464a;
    public final int b;

    public kk(int i, int i2) {
        this.f464a = i;
        this.b = i2;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof kk)) {
            return false;
        }
        if (this == obj) {
            return true;
        }
        kk kkVar = (kk) obj;
        return kkVar.f464a == this.f464a && kkVar.b == this.b;
    }

    public int hashCode() {
        return lo.a(Integer.valueOf(this.f464a), Integer.valueOf(this.b));
    }
}
