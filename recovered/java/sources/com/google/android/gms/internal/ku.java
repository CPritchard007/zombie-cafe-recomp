package com.google.android.gms.internal;

import android.os.Bundle;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class ku implements com.google.android.gms.common.api.c {

    /* renamed from: a, reason: collision with root package name */
    private final com.google.android.gms.common.c f482a;

    public ku(com.google.android.gms.common.c cVar) {
        this.f482a = cVar;
    }

    @Override // com.google.android.gms.common.api.c
    public void a(int i) {
        this.f482a.m_();
    }

    @Override // com.google.android.gms.common.api.c
    public void a(Bundle bundle) {
        this.f482a.a(bundle);
    }

    public boolean equals(Object obj) {
        return obj instanceof ku ? this.f482a.equals(((ku) obj).f482a) : this.f482a.equals(obj);
    }
}
