package com.google.android.gms.internal;

import android.app.PendingIntent;
import android.os.Bundle;
import android.os.IBinder;
import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ky extends kt {
    public final int b;
    public final Bundle c;
    public final IBinder d;
    final /* synthetic */ kq e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ky(kq kqVar, int i, IBinder iBinder, Bundle bundle) {
        super(kqVar, true);
        this.e = kqVar;
        this.b = i;
        this.d = iBinder;
        this.c = bundle;
    }

    @Override // com.google.android.gms.internal.kt
    protected void a() {
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.google.android.gms.internal.kt
    public void a(Boolean bool) {
        if (bool == null) {
            this.e.a(1);
            return;
        }
        switch (this.b) {
            case 0:
                try {
                    if (this.e.b().equals(this.d.getInterfaceDescriptor())) {
                        this.e.f = this.e.b(this.d);
                        if (this.e.f != null) {
                            this.e.a(3);
                            this.e.k.a();
                            return;
                        }
                    }
                } catch (RemoteException e) {
                }
                lc.a(this.e.f469a).b(this.e.a(), this.e.h);
                this.e.h = null;
                this.e.a(1);
                this.e.f = null;
                this.e.k.a(new com.google.android.gms.common.a(8, null));
                return;
            case 10:
                this.e.a(1);
                throw new IllegalStateException("A fatal developer error has occurred. Check the logs for further information.");
            default:
                PendingIntent pendingIntent = this.c != null ? (PendingIntent) this.c.getParcelable("pendingIntent") : null;
                if (this.e.h != null) {
                    lc.a(this.e.f469a).b(this.e.a(), this.e.h);
                    this.e.h = null;
                }
                this.e.a(1);
                this.e.f = null;
                this.e.k.a(new com.google.android.gms.common.a(this.b, pendingIntent));
                return;
        }
    }
}
