package com.google.android.gms.internal;

import android.content.Context;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class gd extends gc {

    /* renamed from: a, reason: collision with root package name */
    private final Context f380a;

    public gd(Context context, ds dsVar, gb gbVar) {
        super(dsVar, gbVar);
        this.f380a = context;
    }

    @Override // com.google.android.gms.internal.gc
    public void c() {
    }

    @Override // com.google.android.gms.internal.gc
    public gl d() {
        return go.a(this.f380a, new ao(), new bi(), new hc());
    }
}
