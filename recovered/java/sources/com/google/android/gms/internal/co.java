package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class co implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ck f315a;

    co(ck ckVar) {
        this.f315a = ckVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f315a.f311a.d();
        } catch (RemoteException e) {
            ig.c("Could not call onAdOpened.", e);
        }
    }
}
