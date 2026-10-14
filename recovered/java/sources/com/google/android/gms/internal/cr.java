package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class cr implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ck f318a;

    cr(ck ckVar) {
        this.f318a = ckVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f318a.f311a.b();
        } catch (RemoteException e) {
            ig.c("Could not call onAdClosed.", e);
        }
    }
}
