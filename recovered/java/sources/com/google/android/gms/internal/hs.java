package com.google.android.gms.internal;

import android.content.Context;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class hs implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f414a;

    hs(Context context) {
        this.f414a = context;
    }

    @Override // java.lang.Runnable
    public void run() {
        synchronized (hq.f412a) {
            String unused = hq.c = hq.e(this.f414a);
            hq.f412a.notifyAll();
        }
    }
}
