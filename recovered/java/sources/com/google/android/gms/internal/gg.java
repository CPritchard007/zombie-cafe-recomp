package com.google.android.gms.internal;

import android.content.Context;
import android.os.Bundle;
import android.os.IBinder;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class gg extends kq {

    /* renamed from: a, reason: collision with root package name */
    final int f383a;

    public gg(Context context, com.google.android.gms.common.c cVar, com.google.android.gms.common.d dVar, int i) {
        super(context, cVar, dVar, new String[0]);
        this.f383a = i;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.google.android.gms.internal.kq
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public gl b(IBinder iBinder) {
        return gm.a(iBinder);
    }

    @Override // com.google.android.gms.internal.kq
    protected String a() {
        return "com.google.android.gms.ads.service.START";
    }

    @Override // com.google.android.gms.internal.kq
    protected void a(ll llVar, kv kvVar) {
        llVar.g(kvVar, this.f383a, j().getPackageName(), new Bundle());
    }

    @Override // com.google.android.gms.internal.kq
    protected String b() {
        return "com.google.android.gms.ads.internal.request.IAdRequestService";
    }

    public gl c() {
        return (gl) super.m();
    }
}
