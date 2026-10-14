package com.google.android.gms.internal;

import android.content.ComponentName;
import android.os.IBinder;
import java.util.HashSet;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class ld {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ lc f490a;
    private final String b;
    private final le c = new le(this);
    private final HashSet d = new HashSet();
    private int e = 0;
    private boolean f;
    private IBinder g;
    private ComponentName h;

    public ld(lc lcVar, String str) {
        this.f490a = lcVar;
        this.b = str;
    }

    public le a() {
        return this.c;
    }

    public void a(kw kwVar) {
        this.d.add(kwVar);
    }

    public void a(boolean z) {
        this.f = z;
    }

    public String b() {
        return this.b;
    }

    public void b(kw kwVar) {
        this.d.remove(kwVar);
    }

    public boolean c() {
        return this.f;
    }

    public boolean c(kw kwVar) {
        return this.d.contains(kwVar);
    }

    public int d() {
        return this.e;
    }

    public boolean e() {
        return this.d.isEmpty();
    }

    public IBinder f() {
        return this.g;
    }

    public ComponentName g() {
        return this.h;
    }
}
