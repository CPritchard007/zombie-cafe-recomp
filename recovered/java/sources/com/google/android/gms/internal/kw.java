package com.google.android.gms.internal;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class kw implements ServiceConnection {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ kq f484a;

    kw(kq kqVar) {
        this.f484a = kqVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        this.f484a.c(iBinder);
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        this.f484a.b.sendMessage(this.f484a.b.obtainMessage(4, 1));
    }
}
