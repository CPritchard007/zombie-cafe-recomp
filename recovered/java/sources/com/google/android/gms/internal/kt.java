package com.google.android.gms.internal;

import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class kt {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ kq f481a;
    private Object b;
    private boolean c = false;

    public kt(kq kqVar, Object obj) {
        this.f481a = kqVar;
        this.b = obj;
    }

    protected abstract void a();

    protected abstract void a(Object obj);

    public void b() {
        Object obj;
        synchronized (this) {
            obj = this.b;
            if (this.c) {
                Log.w("GmsClient", "Callback proxy " + this + " being reused. This is not safe.");
            }
        }
        if (obj != null) {
            try {
                a(obj);
            } catch (RuntimeException e) {
                a();
                throw e;
            }
        } else {
            a();
        }
        synchronized (this) {
            this.c = true;
        }
        c();
    }

    public void c() {
        d();
        synchronized (this.f481a.g) {
            this.f481a.g.remove(this);
        }
    }

    public void d() {
        synchronized (this) {
            this.b = null;
        }
    }
}
