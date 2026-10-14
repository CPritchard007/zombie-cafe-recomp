package com.google.android.gms.internal;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.Message;
import java.util.HashMap;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class lc implements Handler.Callback {

    /* renamed from: a, reason: collision with root package name */
    private static final Object f489a = new Object();
    private static lc b;
    private final Context c;
    private final HashMap d = new HashMap();
    private final Handler e;

    private lc(Context context) {
        this.e = new Handler(context.getMainLooper(), this);
        this.c = context.getApplicationContext();
    }

    public static lc a(Context context) {
        synchronized (f489a) {
            if (b == null) {
                b = new lc(context.getApplicationContext());
            }
        }
        return b;
    }

    public boolean a(String str, kw kwVar) {
        boolean zC;
        synchronized (this.d) {
            ld ldVar = (ld) this.d.get(str);
            if (ldVar != null) {
                this.e.removeMessages(0, ldVar);
                if (!ldVar.c(kwVar)) {
                    ldVar.a(kwVar);
                    switch (ldVar.d()) {
                        case 1:
                            kwVar.onServiceConnected(ldVar.g(), ldVar.f());
                            break;
                        case 2:
                            ldVar.a(this.c.bindService(new Intent(str).setPackage("com.google.android.gms"), ldVar.a(), 129));
                            break;
                    }
                } else {
                    throw new IllegalStateException("Trying to bind a GmsServiceConnection that was already connected before.  startServiceAction=" + str);
                }
            } else {
                ldVar = new ld(this, str);
                ldVar.a(kwVar);
                ldVar.a(this.c.bindService(new Intent(str).setPackage("com.google.android.gms"), ldVar.a(), 129));
                this.d.put(str, ldVar);
            }
            zC = ldVar.c();
        }
        return zC;
    }

    public void b(String str, kw kwVar) {
        synchronized (this.d) {
            ld ldVar = (ld) this.d.get(str);
            if (ldVar == null) {
                throw new IllegalStateException("Nonexistent connection status for service action: " + str);
            }
            if (!ldVar.c(kwVar)) {
                throw new IllegalStateException("Trying to unbind a GmsServiceConnection  that was not bound before.  startServiceAction=" + str);
            }
            ldVar.b(kwVar);
            if (ldVar.e()) {
                this.e.sendMessageDelayed(this.e.obtainMessage(0, ldVar), 5000L);
            }
        }
    }

    @Override // android.os.Handler.Callback
    public boolean handleMessage(Message message) {
        switch (message.what) {
            case 0:
                ld ldVar = (ld) message.obj;
                synchronized (this.d) {
                    if (ldVar.e()) {
                        this.c.unbindService(ldVar.a());
                        this.d.remove(ldVar.b());
                    }
                }
                return true;
            default:
                return false;
        }
    }
}
