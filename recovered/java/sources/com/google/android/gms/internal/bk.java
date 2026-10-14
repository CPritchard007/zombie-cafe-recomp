package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class bk implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ br f293a;
    final /* synthetic */ bj b;

    bk(bj bjVar, br brVar) {
        this.b = bjVar;
        this.f293a = brVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.f293a.c.c();
        } catch (RemoteException e) {
            ig.c("Could not destroy mediation adapter.", e);
        }
    }
}
