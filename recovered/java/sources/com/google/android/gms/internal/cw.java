package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class cw implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ck f323a;

    cw(ck ckVar) {
        this.f323a = ckVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f323a.f311a.b();
        } catch (RemoteException e) {
            ig.c("Could not call onAdClosed.", e);
        }
    }
}
