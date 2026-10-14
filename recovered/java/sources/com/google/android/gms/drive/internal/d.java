package com.google.android.gms.drive.internal;

import com.google.android.gms.internal.oi;
import com.google.android.gms.internal.oj;
import com.google.android.gms.internal.ol;
import java.io.UnsupportedEncodingException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class d extends ol {

    /* renamed from: a, reason: collision with root package name */
    public int f216a;
    public String b;
    public long c;
    public long d;

    public d() {
        a();
    }

    public d a() {
        this.f216a = 1;
        this.b = "";
        this.c = -1L;
        this.d = -1L;
        this.e = null;
        this.f = -1;
        return this;
    }

    @Override // com.google.android.gms.internal.ol, com.google.android.gms.internal.om
    public void a(oi oiVar) throws oj, UnsupportedEncodingException {
        oiVar.a(1, this.f216a);
        oiVar.a(2, this.b);
        oiVar.b(3, this.c);
        oiVar.b(4, this.d);
        super.a(oiVar);
    }

    @Override // com.google.android.gms.internal.ol, com.google.android.gms.internal.om
    protected int b() {
        return super.b() + oi.b(1, this.f216a) + oi.b(2, this.b) + oi.c(3, this.c) + oi.c(4, this.d);
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof d)) {
            return false;
        }
        d dVar = (d) obj;
        if (this.f216a != dVar.f216a) {
            return false;
        }
        if (this.b == null) {
            if (dVar.b != null) {
                return false;
            }
        } else if (!this.b.equals(dVar.b)) {
            return false;
        }
        if (this.c == dVar.c && this.d == dVar.d) {
            return (this.e == null || this.e.isEmpty()) ? dVar.e == null || dVar.e.isEmpty() : this.e.equals(dVar.e);
        }
        return false;
    }

    public int hashCode() {
        int iHashCode = 0;
        int iHashCode2 = ((((((this.b == null ? 0 : this.b.hashCode()) + ((this.f216a + 527) * 31)) * 31) + ((int) (this.c ^ (this.c >>> 32)))) * 31) + ((int) (this.d ^ (this.d >>> 32)))) * 31;
        if (this.e != null && !this.e.isEmpty()) {
            iHashCode = this.e.hashCode();
        }
        return iHashCode2 + iHashCode;
    }
}
