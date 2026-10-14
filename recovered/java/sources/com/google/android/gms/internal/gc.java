package com.google.android.gms.internal;

import android.os.RemoteException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public abstract class gc extends hl {

    /* renamed from: a, reason: collision with root package name */
    private final ds f379a;
    private final gb b;

    public gc(ds dsVar, gb gbVar) {
        this.f379a = dsVar;
        this.b = gbVar;
    }

    private static du a(gl glVar, ds dsVar) {
        try {
            return glVar.a(dsVar);
        } catch (RemoteException e) {
            ig.c("Could not fetch ad response from ad request service.", e);
            return null;
        } catch (NullPointerException e2) {
            ig.c("Could not fetch ad response from ad request service due to an Exception.", e2);
            return null;
        } catch (SecurityException e3) {
            ig.c("Could not fetch ad response from ad request service due to an Exception.", e3);
            return null;
        }
    }

    @Override // com.google.android.gms.internal.hl
    public final void a() {
        du duVarA;
        try {
            gl glVarD = d();
            if (glVarD == null || (duVarA = a(glVarD, this.f379a)) == null) {
                duVarA = new du(0);
            }
            c();
            this.b.a(duVarA);
        } catch (Throwable th) {
            c();
            throw th;
        }
    }

    @Override // com.google.android.gms.internal.hl
    public final void b() {
        c();
    }

    public abstract void c();

    public abstract gl d();
}
