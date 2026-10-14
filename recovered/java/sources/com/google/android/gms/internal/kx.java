package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class kx implements com.google.android.gms.common.api.d {

    /* renamed from: a, reason: collision with root package name */
    private final com.google.android.gms.common.d f485a;

    public kx(com.google.android.gms.common.d dVar) {
        this.f485a = dVar;
    }

    @Override // com.google.android.gms.common.d
    public void a(com.google.android.gms.common.a aVar) {
        this.f485a.a(aVar);
    }

    public boolean equals(Object obj) {
        return obj instanceof kx ? this.f485a.equals(((kx) obj).f485a) : this.f485a.equals(obj);
    }
}
