package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class cn implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ck f314a;

    cn(ck ckVar) {
        this.f314a = ckVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f314a.f311a.c();
        } catch (RemoteException e) {
            ig.c("Could not call onAdLeftApplication.", e);
        }
    }
}
