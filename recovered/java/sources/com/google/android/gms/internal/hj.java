package com.google.android.gms.internal;

import android.os.Bundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class hj {

    /* renamed from: a, reason: collision with root package name */
    private final Object f405a;
    private int b;
    private int c;
    private final hg d;
    private final String e;

    hj(hg hgVar, String str) {
        this.f405a = new Object();
        this.d = hgVar;
        this.e = str;
    }

    public hj(String str) {
        this(hg.a(), str);
    }

    public Bundle a() {
        Bundle bundle;
        synchronized (this.f405a) {
            bundle = new Bundle();
            bundle.putInt("pmnli", this.b);
            bundle.putInt("pmnll", this.c);
        }
        return bundle;
    }

    public void a(int i, int i2) {
        synchronized (this.f405a) {
            this.b = i;
            this.c = i2;
            this.d.a(this.e, this);
        }
    }
}
