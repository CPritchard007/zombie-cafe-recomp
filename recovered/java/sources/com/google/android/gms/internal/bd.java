package com.google.android.gms.internal;

import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class bd implements bb {

    /* renamed from: a, reason: collision with root package name */
    private final be f290a;

    public bd(be beVar) {
        this.f290a = beVar;
    }

    @Override // com.google.android.gms.internal.bb
    public void a(ii iiVar, Map map) {
        this.f290a.a("1".equals(map.get("transparentBackground")));
    }
}
