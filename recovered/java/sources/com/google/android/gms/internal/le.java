package com.google.android.gms.internal;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import java.util.Iterator;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class le implements ServiceConnection {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ld f491a;

    public le(ld ldVar) {
        this.f491a = ldVar;
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        synchronized (this.f491a.f490a.d) {
            this.f491a.g = iBinder;
            this.f491a.h = componentName;
            Iterator it = this.f491a.d.iterator();
            while (it.hasNext()) {
                ((kw) it.next()).onServiceConnected(componentName, iBinder);
            }
            this.f491a.e = 1;
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
        synchronized (this.f491a.f490a.d) {
            this.f491a.g = null;
            this.f491a.h = componentName;
            Iterator it = this.f491a.d.iterator();
            while (it.hasNext()) {
                ((kw) it.next()).onServiceDisconnected(componentName);
            }
            this.f491a.e = 2;
        }
    }
}
