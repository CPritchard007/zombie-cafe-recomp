package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class cu implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ck f321a;

    cu(ck ckVar) {
        this.f321a = ckVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f321a.f311a.d();
        } catch (RemoteException e) {
            ig.c("Could not call onAdOpened.", e);
        }
    }
}
