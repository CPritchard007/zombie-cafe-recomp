package com.google.android.gms.common.data;

import android.net.Uri;
import com.google.android.gms.internal.lo;
import com.google.android.gms.internal.ls;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class f {

    /* renamed from: a, reason: collision with root package name */
    protected final DataHolder f164a;
    protected int b;
    private int c;

    public f(DataHolder dataHolder, int i) {
        this.f164a = (DataHolder) ls.a(dataHolder);
        a(i);
    }

    protected void a(int i) {
        ls.a(i >= 0 && i < this.f164a.g());
        this.b = i;
        this.c = this.f164a.a(this.b);
    }

    public boolean a(String str) {
        return this.f164a.a(str);
    }

    protected int b() {
        return this.b;
    }

    protected long b(String str) {
        return this.f164a.a(str, this.b, this.c);
    }

    protected int c(String str) {
        return this.f164a.b(str, this.b, this.c);
    }

    protected boolean d(String str) {
        return this.f164a.d(str, this.b, this.c);
    }

    protected String e(String str) {
        return this.f164a.c(str, this.b, this.c);
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof f)) {
            return false;
        }
        f fVar = (f) obj;
        return lo.a(Integer.valueOf(fVar.b), Integer.valueOf(this.b)) && lo.a(Integer.valueOf(fVar.c), Integer.valueOf(this.c)) && fVar.f164a == this.f164a;
    }

    protected float f(String str) {
        return this.f164a.e(str, this.b, this.c);
    }

    protected byte[] g(String str) {
        return this.f164a.f(str, this.b, this.c);
    }

    protected Uri h(String str) {
        return this.f164a.g(str, this.b, this.c);
    }

    public int hashCode() {
        return lo.a(Integer.valueOf(this.b), Integer.valueOf(this.c), this.f164a);
    }

    protected boolean i(String str) {
        return this.f164a.h(str, this.b, this.c);
    }
}
