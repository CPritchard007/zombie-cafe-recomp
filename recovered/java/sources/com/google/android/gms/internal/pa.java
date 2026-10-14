package com.google.android.gms.internal;

import android.content.ComponentCallbacks;
import android.content.res.Configuration;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class pa implements ComponentCallbacks {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ oz f519a;

    pa(oz ozVar) {
        this.f519a = ozVar;
    }

    @Override // android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        if (this.f519a.b == null || this.f519a.b.i == null || this.f519a.b.i.b == null) {
            return;
        }
        this.f519a.b.i.b.a();
    }

    @Override // android.content.ComponentCallbacks
    public void onLowMemory() {
    }
}
