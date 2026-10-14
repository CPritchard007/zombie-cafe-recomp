package com.google.android.gms.internal;

import android.os.RemoteException;
import com.google.ads.AdRequest;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class cm implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ AdRequest.ErrorCode f313a;
    final /* synthetic */ ck b;

    cm(ck ckVar, AdRequest.ErrorCode errorCode) {
        this.b = ckVar;
        this.f313a = errorCode;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.b.f311a.a(cx.a(this.f313a));
        } catch (RemoteException e) {
            ig.c("Could not call onAdFailedToLoad.", e);
        }
    }
}
