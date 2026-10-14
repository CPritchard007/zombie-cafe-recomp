package com.google.android.gms.internal;

import android.content.Context;
import android.view.MotionEvent;
import java.util.List;
import java.util.Vector;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class pc implements ke, Runnable {

    /* renamed from: a, reason: collision with root package name */
    private final List f521a = new Vector();
    private final CountDownLatch b = new CountDownLatch(1);
    private final AtomicReference c = new AtomicReference();
    private pd d;

    public pc(pd pdVar) {
        this.d = pdVar;
        if (Cif.b()) {
            hn.a(this);
        } else {
            run();
        }
    }

    private void a() throws InterruptedException {
        try {
            this.b.await();
        } catch (InterruptedException e) {
            ig.c("Interrupted during GADSignals creation.", e);
        }
    }

    private void b() {
        if (this.f521a.isEmpty()) {
            return;
        }
        for (Object[] objArr : this.f521a) {
            if (objArr.length == 1) {
                ((ke) this.c.get()).a((MotionEvent) objArr[0]);
            } else if (objArr.length == 3) {
                ((ke) this.c.get()).a(((Integer) objArr[0]).intValue(), ((Integer) objArr[1]).intValue(), ((Integer) objArr[2]).intValue());
            }
        }
    }

    @Override // com.google.android.gms.internal.ke
    public String a(Context context) throws InterruptedException {
        a();
        if (this.c.get() == null) {
            return "";
        }
        b();
        return ((ke) this.c.get()).a(context);
    }

    @Override // com.google.android.gms.internal.ke
    public String a(Context context, String str) throws InterruptedException {
        a();
        if (this.c.get() == null) {
            return "";
        }
        b();
        return ((ke) this.c.get()).a(context, str);
    }

    @Override // com.google.android.gms.internal.ke
    public void a(int i, int i2, int i3) {
        ke keVar = (ke) this.c.get();
        if (keVar == null) {
            this.f521a.add(new Object[]{Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3)});
        } else {
            b();
            keVar.a(i, i2, i3);
        }
    }

    @Override // com.google.android.gms.internal.ke
    public void a(MotionEvent motionEvent) {
        ke keVar = (ke) this.c.get();
        if (keVar == null) {
            this.f521a.add(new Object[]{motionEvent});
        } else {
            b();
            keVar.a(motionEvent);
        }
    }

    @Override // com.google.android.gms.internal.ke
    public String b(Context context) throws InterruptedException {
        a();
        if (this.c.get() == null) {
            return "";
        }
        b();
        return ((ke) this.c.get()).b(context);
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.c.set(ng.a(this.d.e.b, this.d.c));
        } finally {
            this.b.countDown();
            this.d = null;
        }
    }
}
