package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class cl implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ck f312a;

    cl(ck ckVar) {
        this.f312a = ckVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f312a.f311a.a();
        } catch (RemoteException e) {
            ig.c("Could not call onAdClicked.", e);
        }
    }
}
