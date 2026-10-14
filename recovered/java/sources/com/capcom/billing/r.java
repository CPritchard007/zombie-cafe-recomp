package com.capcom.billing;

import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class r implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ p f57a;
    private final /* synthetic */ t b;
    private final /* synthetic */ List c;
    private final /* synthetic */ List d;

    r(p pVar, t tVar, List list, List list2) {
        this.f57a = pVar;
        this.b = tVar;
        this.c = list;
        this.d = list2;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.b.a(this.c, this.d);
    }
}
