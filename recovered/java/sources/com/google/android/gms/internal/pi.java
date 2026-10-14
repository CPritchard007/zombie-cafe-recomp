package com.google.android.gms.internal;

import android.os.Handler;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class pi {

    /* renamed from: a, reason: collision with root package name */
    private final Handler f526a;

    public pi(Handler handler) {
        this.f526a = handler;
    }

    public void a(Runnable runnable) {
        this.f526a.removeCallbacks(runnable);
    }

    public boolean a(Runnable runnable, long j) {
        return this.f526a.postDelayed(runnable, j);
    }
}
