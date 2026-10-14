package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class cp implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ck f316a;

    cp(ck ckVar) {
        this.f316a = ckVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f316a.f311a.e();
        } catch (RemoteException e) {
            ig.c("Could not call onAdLoaded.", e);
        }
    }
}
