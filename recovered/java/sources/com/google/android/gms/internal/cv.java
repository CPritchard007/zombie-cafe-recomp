package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class cv implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ck f322a;

    cv(ck ckVar) {
        this.f322a = ckVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f322a.f311a.e();
        } catch (RemoteException e) {
            ig.c("Could not call onAdLoaded.", e);
        }
    }
}
