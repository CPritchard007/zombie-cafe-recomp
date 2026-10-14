package com.google.android.gms.internal;

import android.os.RemoteException;
import com.google.ads.AdRequest;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class cs implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ AdRequest.ErrorCode f319a;
    final /* synthetic */ ck b;

    cs(ck ckVar, AdRequest.ErrorCode errorCode) {
        this.b = ckVar;
        this.f319a = errorCode;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.b.f311a.a(cx.a(this.f319a));
        } catch (RemoteException e) {
            ig.c("Could not call onAdFailedToLoad.", e);
        }
    }
}
