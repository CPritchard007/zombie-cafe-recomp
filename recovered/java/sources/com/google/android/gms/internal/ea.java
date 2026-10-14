package com.google.android.gms.internal;

import android.content.Intent;
import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ea implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ed f342a;
    final /* synthetic */ Intent b;
    final /* synthetic */ dz c;

    ea(dz dzVar, ed edVar, Intent intent) {
        this.c = dzVar;
        this.f342a = edVar;
        this.b = intent;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            if (this.c.h.a(this.f342a.b, -1, this.b)) {
                this.c.d.a(new ee(this.c.c, this.f342a.c, true, -1, this.b, this.f342a));
            } else {
                this.c.d.a(new ee(this.c.c, this.f342a.c, false, -1, this.b, this.f342a));
            }
        } catch (RemoteException e) {
            ig.e("Fail to verify and dispatch pending transaction");
        }
    }
}
