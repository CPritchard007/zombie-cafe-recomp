package com.google.android.gms.internal;

import java.io.IOException;
import java.io.UnsupportedEncodingException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ot implements oq {

    /* renamed from: a, reason: collision with root package name */
    private oi f516a;
    private byte[] b;
    private final int c;

    public ot(int i) {
        this.c = i;
        a();
    }

    @Override // com.google.android.gms.internal.oq
    public void a() {
        this.b = new byte[this.c];
        this.f516a = oi.a(this.b);
    }

    @Override // com.google.android.gms.internal.oq
    public void a(int i, long j) throws oj {
        this.f516a.a(i, j);
    }

    @Override // com.google.android.gms.internal.oq
    public void a(int i, String str) throws oj, UnsupportedEncodingException {
        this.f516a.a(i, str);
    }

    @Override // com.google.android.gms.internal.oq
    public byte[] b() throws IOException {
        int iA = this.f516a.a();
        if (iA < 0) {
            throw new IOException();
        }
        if (iA == 0) {
            return this.b;
        }
        byte[] bArr = new byte[this.b.length - iA];
        System.arraycopy(this.b, 0, bArr, 0, bArr.length);
        return bArr;
    }
}
