package com.capcom.billing;

import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class q implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ p f56a;
    private final /* synthetic */ s b;
    private final /* synthetic */ List c;
    private final /* synthetic */ List d;

    q(p pVar, s sVar, List list, List list2) {
        this.f56a = pVar;
        this.b = sVar;
        this.c = list;
        this.d = list2;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.b.a((z) this.c.get(0), (x) this.d.get(0));
    }
}
