package com.google.android.gms.internal;

import android.support.v4.view.MotionEventCompat;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class oh {

    /* renamed from: a, reason: collision with root package name */
    private final byte[] f510a = new byte[256];
    private int b;
    private int c;

    public oh(byte[] bArr) {
        for (int i = 0; i < 256; i++) {
            this.f510a[i] = (byte) i;
        }
        int i2 = 0;
        for (int i3 = 0; i3 < 256; i3++) {
            i2 = (i2 + this.f510a[i3] + bArr[i3 % bArr.length]) & MotionEventCompat.ACTION_MASK;
            byte b = this.f510a[i3];
            this.f510a[i3] = this.f510a[i2];
            this.f510a[i2] = b;
        }
        this.b = 0;
        this.c = 0;
    }

    public void a(byte[] bArr) {
        int i = this.b;
        int i2 = this.c;
        for (int i3 = 0; i3 < bArr.length; i3++) {
            i = (i + 1) & MotionEventCompat.ACTION_MASK;
            i2 = (i2 + this.f510a[i]) & MotionEventCompat.ACTION_MASK;
            byte b = this.f510a[i];
            this.f510a[i] = this.f510a[i2];
            this.f510a[i2] = b;
            bArr[i3] = (byte) (bArr[i3] ^ this.f510a[(this.f510a[i] + this.f510a[i2]) & MotionEventCompat.ACTION_MASK]);
        }
        this.b = i;
        this.c = i2;
    }
}
