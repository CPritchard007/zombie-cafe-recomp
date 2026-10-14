package com.google.android.gms.internal;

import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import java.util.ArrayList;
import java.util.Iterator;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class kz {
    private final lb b;
    private final Handler f;
    private final ArrayList c = new ArrayList();

    /* renamed from: a, reason: collision with root package name */
    final ArrayList f486a = new ArrayList();
    private boolean d = false;
    private final ArrayList e = new ArrayList();

    public kz(Context context, Looper looper, lb lbVar) {
        this.b = lbVar;
        this.f = new la(this, looper);
    }

    protected void a() {
        synchronized (this.c) {
            a(this.b.l());
        }
    }

    public void a(int i) {
        this.f.removeMessages(1);
        synchronized (this.c) {
            this.d = true;
            Iterator it = new ArrayList(this.c).iterator();
            while (it.hasNext()) {
                com.google.android.gms.common.api.c cVar = (com.google.android.gms.common.api.c) it.next();
                if (!this.b.n()) {
                    break;
                } else if (this.c.contains(cVar)) {
                    cVar.a(i);
                }
            }
            this.d = false;
        }
    }

    public void a(Bundle bundle) {
        synchronized (this.c) {
            ls.a(!this.d);
            this.f.removeMessages(1);
            this.d = true;
            ls.a(this.f486a.size() == 0);
            Iterator it = new ArrayList(this.c).iterator();
            while (it.hasNext()) {
                com.google.android.gms.common.api.c cVar = (com.google.android.gms.common.api.c) it.next();
                if (!this.b.n() || !this.b.g()) {
                    break;
                } else if (!this.f486a.contains(cVar)) {
                    cVar.a(bundle);
                }
            }
            this.f486a.clear();
            this.d = false;
        }
    }

    public void a(com.google.android.gms.common.a aVar) {
        this.f.removeMessages(1);
        synchronized (this.e) {
            Iterator it = new ArrayList(this.e).iterator();
            while (it.hasNext()) {
                com.google.android.gms.common.d dVar = (com.google.android.gms.common.d) it.next();
                if (!this.b.n()) {
                    return;
                }
                if (this.e.contains(dVar)) {
                    dVar.a(aVar);
                }
            }
        }
    }

    public void a(com.google.android.gms.common.api.c cVar) {
        ls.a(cVar);
        synchronized (this.c) {
            if (this.c.contains(cVar)) {
                Log.w("GmsClientEvents", "registerConnectionCallbacks(): listener " + cVar + " is already registered");
            } else {
                this.c.add(cVar);
            }
        }
        if (this.b.g()) {
            this.f.sendMessage(this.f.obtainMessage(1, cVar));
        }
    }

    public void a(com.google.android.gms.common.d dVar) {
        ls.a(dVar);
        synchronized (this.e) {
            if (this.e.contains(dVar)) {
                Log.w("GmsClientEvents", "registerConnectionFailedListener(): listener " + dVar + " is already registered");
            } else {
                this.e.add(dVar);
            }
        }
    }
}
