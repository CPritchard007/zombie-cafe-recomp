package com.google.android.gms.internal;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.WeakHashMap;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class b implements i {

    /* renamed from: a, reason: collision with root package name */
    private final Object f289a = new Object();
    private WeakHashMap b = new WeakHashMap();
    private ArrayList c = new ArrayList();

    public c a(al alVar, hd hdVar) {
        c cVar;
        synchronized (this.f289a) {
            if (a(hdVar)) {
                cVar = (c) this.b.get(hdVar);
            } else {
                cVar = new c(alVar, hdVar);
                cVar.a(this);
                this.b.put(hdVar, cVar);
                this.c.add(cVar);
            }
        }
        return cVar;
    }

    public void a() {
        synchronized (this.f289a) {
            Iterator it = this.c.iterator();
            while (it.hasNext()) {
                ((c) it.next()).j();
            }
        }
    }

    @Override // com.google.android.gms.internal.i
    public void a(c cVar) {
        synchronized (this.f289a) {
            if (!cVar.e()) {
                this.c.remove(cVar);
            }
        }
    }

    public boolean a(hd hdVar) {
        boolean z;
        synchronized (this.f289a) {
            c cVar = (c) this.b.get(hdVar);
            z = cVar != null && cVar.e();
        }
        return z;
    }

    public void b() {
        synchronized (this.f289a) {
            Iterator it = this.c.iterator();
            while (it.hasNext()) {
                ((c) it.next()).k();
            }
        }
    }

    public void b(hd hdVar) {
        synchronized (this.f289a) {
            c cVar = (c) this.b.get(hdVar);
            if (cVar != null) {
                cVar.c();
            }
        }
    }

    public void c() {
        synchronized (this.f289a) {
            Iterator it = this.c.iterator();
            while (it.hasNext()) {
                ((c) it.next()).l();
            }
        }
    }
}
