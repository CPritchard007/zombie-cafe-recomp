package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class gs {
    private ii d;
    private String e;
    private gx g;
    private final Object c = new Object();
    private int f = -2;

    /* renamed from: a, reason: collision with root package name */
    public final bb f391a = new gt(this);
    public final bb b = new gu(this);

    public gs(String str) {
        this.e = str;
    }

    public int a() {
        int i;
        synchronized (this.c) {
            i = this.f;
        }
        return i;
    }

    public void a(ii iiVar) {
        synchronized (this.c) {
            this.d = iiVar;
        }
    }

    public gx b() {
        gx gxVar;
        synchronized (this.c) {
            while (this.g == null && this.f == -2) {
                try {
                    this.c.wait();
                } catch (InterruptedException e) {
                    ig.e("Ad request service was interrupted.");
                    gxVar = null;
                }
            }
            gxVar = this.g;
        }
        return gxVar;
    }
}
