package com.google.android.gms.internal;

import android.content.Context;
import android.util.DisplayMetrics;
import android.view.MotionEvent;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.SecureRandom;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class ko implements ke {

    /* renamed from: a, reason: collision with root package name */
    protected MotionEvent f467a;
    protected DisplayMetrics b;
    protected ok c;
    private oq d;

    protected ko(Context context, ok okVar, oq oqVar) {
        this.c = okVar;
        this.d = oqVar;
        try {
            this.b = context.getResources().getDisplayMetrics();
        } catch (UnsupportedOperationException e) {
            this.b = new DisplayMetrics();
            this.b.density = 1.0f;
        }
    }

    private String a(Context context, String str, boolean z, boolean z2) {
        byte[] bArrB;
        try {
            synchronized (this) {
                a();
                if (z) {
                    e(context);
                } else if (z2) {
                    d(context);
                } else {
                    c(context);
                }
                bArrB = b();
            }
            return bArrB.length == 0 ? Integer.toString(5) : a(bArrB, str);
        } catch (UnsupportedEncodingException e) {
            return Integer.toString(7);
        } catch (IOException e2) {
            return Integer.toString(3);
        } catch (NoSuchAlgorithmException e3) {
            return Integer.toString(7);
        }
    }

    private void a() {
        this.d.a();
    }

    private byte[] b() {
        return this.d.b();
    }

    @Override // com.google.android.gms.internal.ke
    public String a(Context context) {
        return a(context, null, false, false);
    }

    @Override // com.google.android.gms.internal.ke
    public String a(Context context, String str) {
        return a(context, str, true, false);
    }

    String a(byte[] bArr, String str) throws NoSuchAlgorithmException {
        byte[] bArrArray;
        if (bArr.length > 239) {
            a();
            a(20, 1L);
            bArr = b();
        }
        if (bArr.length < 239) {
            byte[] bArr2 = new byte[239 - bArr.length];
            new SecureRandom().nextBytes(bArr2);
            bArrArray = ByteBuffer.allocate(240).put((byte) bArr.length).put(bArr).put(bArr2).array();
        } else {
            bArrArray = ByteBuffer.allocate(240).put((byte) bArr.length).put(bArr).array();
        }
        MessageDigest messageDigest = MessageDigest.getInstance("MD5");
        messageDigest.update(bArrArray);
        byte[] bArrArray2 = ByteBuffer.allocate(256).put(messageDigest.digest()).put(bArrArray).array();
        byte[] bArr3 = new byte[256];
        new iv().a(bArrArray2, bArr3);
        if (str != null && str.length() > 0) {
            a(str, bArr3);
        }
        return this.c.a(bArr3, true);
    }

    @Override // com.google.android.gms.internal.ke
    public void a(int i, int i2, int i3) {
        if (this.f467a != null) {
            this.f467a.recycle();
        }
        this.f467a = MotionEvent.obtain(0L, i3, 1, i * this.b.density, i2 * this.b.density, 0.0f, 0.0f, 0, 0.0f, 0.0f, 0, 0);
    }

    protected void a(int i, long j) {
        this.d.a(i, j);
    }

    protected void a(int i, String str) {
        this.d.a(i, str);
    }

    @Override // com.google.android.gms.internal.ke
    public void a(MotionEvent motionEvent) {
        if (motionEvent.getAction() == 1) {
            if (this.f467a != null) {
                this.f467a.recycle();
            }
            this.f467a = MotionEvent.obtain(motionEvent);
        }
    }

    void a(String str, byte[] bArr) {
        if (str.length() > 32) {
            str = str.substring(0, 32);
        }
        new oh(str.getBytes("UTF-8")).a(bArr);
    }

    @Override // com.google.android.gms.internal.ke
    public String b(Context context) {
        return a(context, null, false, true);
    }

    protected abstract void c(Context context);

    protected abstract void d(Context context);

    protected abstract void e(Context context);
}
