package com.google.android.gms.common;

import android.content.ComponentName;
import android.content.ServiceConnection;
import android.os.IBinder;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingQueue;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class i implements ServiceConnection {

    /* renamed from: a, reason: collision with root package name */
    boolean f169a = false;
    private final BlockingQueue b = new LinkedBlockingQueue();

    public IBinder a() {
        if (this.f169a) {
            throw new IllegalStateException();
        }
        this.f169a = true;
        return (IBinder) this.b.take();
    }

    @Override // android.content.ServiceConnection
    public void onServiceConnected(ComponentName componentName, IBinder iBinder) throws InterruptedException {
        try {
            this.b.put(iBinder);
        } catch (InterruptedException e) {
        }
    }

    @Override // android.content.ServiceConnection
    public void onServiceDisconnected(ComponentName componentName) {
    }
}
