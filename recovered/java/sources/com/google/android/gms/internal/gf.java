package com.google.android.gms.internal;

import android.content.Context;
import android.os.Bundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class gf extends gc implements com.google.android.gms.common.c, com.google.android.gms.common.d {

    /* renamed from: a, reason: collision with root package name */
    private final gb f382a;
    private final gg b;
    private final Object c;

    public gf(Context context, ds dsVar, gb gbVar) {
        super(dsVar, gbVar);
        this.c = new Object();
        this.f382a = gbVar;
        this.b = new gg(context, this, this, dsVar.k.d);
        this.b.f();
    }

    @Override // com.google.android.gms.common.c
    public void a(Bundle bundle) {
        e();
    }

    @Override // com.google.android.gms.common.d
    public void a(com.google.android.gms.common.a aVar) {
        this.f382a.a(new du(0));
    }

    @Override // com.google.android.gms.internal.gc
    public void c() {
        synchronized (this.c) {
            if (this.b.g() || this.b.h()) {
                this.b.i();
            }
        }
    }

    @Override // com.google.android.gms.internal.gc
    public gl d() {
        gl glVarC;
        synchronized (this.c) {
            try {
                glVarC = this.b.c();
            } catch (IllegalStateException e) {
                glVarC = null;
            }
        }
        return glVarC;
    }

    @Override // com.google.android.gms.common.c
    public void m_() {
        ig.a("Disconnected from remote ad request service.");
    }
}
