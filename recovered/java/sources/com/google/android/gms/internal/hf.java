package com.google.android.gms.internal;

import android.os.Bundle;
import android.os.SystemClock;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class hf {

    /* renamed from: a, reason: collision with root package name */
    private long f402a = -1;
    private long b = -1;

    public long a() {
        return this.b;
    }

    public void b() {
        this.b = SystemClock.elapsedRealtime();
    }

    public void c() {
        this.f402a = SystemClock.elapsedRealtime();
    }

    public Bundle d() {
        Bundle bundle = new Bundle();
        bundle.putLong("topen", this.f402a);
        bundle.putLong("tclose", this.b);
        return bundle;
    }
}
