package com.capcom.zombiecafeandroidJP;

import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ah implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ac f83a;

    ah(ac acVar) {
        this.f83a = acVar;
    }

    @Override // java.lang.Runnable
    public void run() throws IOException {
        ZombieCafeAndroid.DownloadFromUrlForPurchase(ZombieCafeAndroid.S, ZombieCafeAndroid.T, null);
    }
}
