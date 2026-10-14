package com.capcom.billing;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class m implements ServiceConnection {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ l f52a;
    private final /* synthetic */ v b;

    m(l lVar, v vVar) {
        this.f52a = lVar;
        this.b = vVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        int iA;
        this.f52a.c("Billing service connected.");
        this.f52a.g = com.a.a.a.b.a(iBinder);
        String packageName = this.f52a.f.getPackageName();
        try {
            this.f52a.c("Checking for in-app billing 3 support.");
            iA = this.f52a.g.a(3, packageName, "inapp");
        } catch (RemoteException e) {
            if (this.b != null) {
                this.b.a(new x(-1001, "RemoteException while setting up in-app billing."));
            }
            e.printStackTrace();
        }
        if (iA != 0) {
            if (this.b != null) {
                this.b.a(new x(iA, "Error checking for billing v3 support."));
            }
        } else {
            this.f52a.c("In-app billing version 3 supported for " + packageName);
            this.f52a.c = true;
            if (this.b != null) {
                this.b.a(new x(0, "Setup successful."));
            }
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        this.f52a.c("Billing service disconnected.");
        this.f52a.g = null;
    }
}
