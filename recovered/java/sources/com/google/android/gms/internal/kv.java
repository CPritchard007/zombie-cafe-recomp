package com.google.android.gms.internal;

import android.os.Bundle;
import android.os.IBinder;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class kv extends lj {

    /* renamed from: a, reason: collision with root package name */
    private kq f483a;

    public kv(kq kqVar) {
        this.f483a = kqVar;
    }

    @Override // com.google.android.gms.internal.lh
    public void a(int i, IBinder iBinder, Bundle bundle) {
        ls.a((Object) "onPostInitComplete can be called only once per call to getServiceFromBroker", (Object) this.f483a);
        this.f483a.a(i, iBinder, bundle);
        this.f483a = null;
    }
}
