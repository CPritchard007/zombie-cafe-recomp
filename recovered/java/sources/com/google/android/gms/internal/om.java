package com.google.android.gms.internal;

import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class om {
    protected volatile int f = -1;

    public static final void a(om omVar, byte[] bArr, int i, int i2) {
        try {
            oi oiVarA = oi.a(bArr, i, i2);
            omVar.a(oiVarA);
            oiVarA.b();
        } catch (IOException e) {
            throw new RuntimeException("Serializing to a byte array threw an IOException (should never happen).", e);
        }
    }

    public static final byte[] a(om omVar) {
        byte[] bArr = new byte[omVar.c()];
        a(omVar, bArr, 0, bArr.length);
        return bArr;
    }

    public void a(oi oiVar) {
    }

    protected int b() {
        return 0;
    }

    public int c() {
        int iB = b();
        this.f = iB;
        return iB;
    }

    public String toString() {
        return on.a(this);
    }
}
