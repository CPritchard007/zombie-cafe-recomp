package com.google.android.gms.internal;

import android.util.Base64;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class gv implements ok {
    gv() {
    }

    @Override // com.google.android.gms.internal.ok
    public String a(byte[] bArr, boolean z) {
        return Base64.encodeToString(bArr, z ? 11 : 2);
    }

    @Override // com.google.android.gms.internal.ok
    public byte[] a(String str, boolean z) {
        return Base64.decode(str, z ? 11 : 2);
    }
}
