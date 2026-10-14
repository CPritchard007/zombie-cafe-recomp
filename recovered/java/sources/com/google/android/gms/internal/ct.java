package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ct implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ck f320a;

    ct(ck ckVar) {
        this.f320a = ckVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f320a.f311a.c();
        } catch (RemoteException e) {
            ig.c("Could not call onAdLeftApplication.", e);
        }
    }
}
