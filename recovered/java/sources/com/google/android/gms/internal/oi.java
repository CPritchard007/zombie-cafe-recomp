package com.google.android.gms.internal;

import android.support.v4.media.TransportMediator;
import java.io.UnsupportedEncodingException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class oi {

    /* renamed from: a, reason: collision with root package name */
    private final byte[] f511a;
    private final int b;
    private int c;

    private oi(byte[] bArr, int i, int i2) {
        this.f511a = bArr;
        this.c = i;
        this.b = i + i2;
    }

    public static oi a(byte[] bArr) {
        return a(bArr, 0, bArr.length);
    }

    public static oi a(byte[] bArr, int i, int i2) {
        return new oi(bArr, i, i2);
    }

    public static int b(int i) {
        if (i >= 0) {
            return f(i);
        }
        return 10;
    }

    public static int b(int i, int i2) {
        return d(i) + b(i2);
    }

    public static int b(int i, String str) {
        return d(i) + b(str);
    }

    public static int b(String str) throws UnsupportedEncodingException {
        try {
            byte[] bytes = str.getBytes("UTF-8");
            return bytes.length + f(bytes.length);
        } catch (UnsupportedEncodingException e) {
            throw new RuntimeException("UTF-8 not supported.");
        }
    }

    public static int c(int i, long j) {
        return d(i) + c(j);
    }

    public static int c(long j) {
        return e(f(j));
    }

    public static int d(int i) {
        return f(op.a(i, 0));
    }

    public static int e(long j) {
        if (((-128) & j) == 0) {
            return 1;
        }
        if (((-16384) & j) == 0) {
            return 2;
        }
        if (((-2097152) & j) == 0) {
            return 3;
        }
        if (((-268435456) & j) == 0) {
            return 4;
        }
        if (((-34359738368L) & j) == 0) {
            return 5;
        }
        if (((-4398046511104L) & j) == 0) {
            return 6;
        }
        if (((-562949953421312L) & j) == 0) {
            return 7;
        }
        if (((-72057594037927936L) & j) == 0) {
            return 8;
        }
        return (Long.MIN_VALUE & j) == 0 ? 9 : 10;
    }

    public static int f(int i) {
        if ((i & (-128)) == 0) {
            return 1;
        }
        if ((i & (-16384)) == 0) {
            return 2;
        }
        if (((-2097152) & i) == 0) {
            return 3;
        }
        return ((-268435456) & i) == 0 ? 4 : 5;
    }

    public static long f(long j) {
        return (j << 1) ^ (j >> 63);
    }

    public int a() {
        return this.b - this.c;
    }

    public void a(byte b) throws oj {
        if (this.c == this.b) {
            throw new oj(this.c, this.b);
        }
        byte[] bArr = this.f511a;
        int i = this.c;
        this.c = i + 1;
        bArr[i] = b;
    }

    public void a(int i) throws oj {
        if (i >= 0) {
            e(i);
        } else {
            d(i);
        }
    }

    public void a(int i, int i2) throws oj {
        c(i, 0);
        a(i2);
    }

    public void a(int i, long j) throws oj {
        c(i, 0);
        a(j);
    }

    public void a(int i, String str) throws oj, UnsupportedEncodingException {
        c(i, 2);
        a(str);
    }

    public void a(long j) throws oj {
        d(j);
    }

    public void a(String str) throws oj, UnsupportedEncodingException {
        byte[] bytes = str.getBytes("UTF-8");
        e(bytes.length);
        b(bytes);
    }

    public void b() {
        if (a() != 0) {
            throw new IllegalStateException("Did not write as much data as expected.");
        }
    }

    public void b(int i, long j) throws oj {
        c(i, 0);
        b(j);
    }

    public void b(long j) throws oj {
        d(f(j));
    }

    public void b(byte[] bArr) throws oj {
        b(bArr, 0, bArr.length);
    }

    public void b(byte[] bArr, int i, int i2) throws oj {
        if (this.b - this.c < i2) {
            throw new oj(this.c, this.b);
        }
        System.arraycopy(bArr, i, this.f511a, this.c, i2);
        this.c += i2;
    }

    public void c(int i) throws oj {
        a((byte) i);
    }

    public void c(int i, int i2) throws oj {
        e(op.a(i, i2));
    }

    public void d(long j) throws oj {
        while (((-128) & j) != 0) {
            c((((int) j) & TransportMediator.KEYCODE_MEDIA_PAUSE) | 128);
            j >>>= 7;
        }
        c((int) j);
    }

    public void e(int i) throws oj {
        while ((i & (-128)) != 0) {
            c((i & TransportMediator.KEYCODE_MEDIA_PAUSE) | 128);
            i >>>= 7;
        }
        c(i);
    }
}
