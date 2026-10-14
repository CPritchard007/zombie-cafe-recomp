package com.capcom.billing;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class o implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ n f54a;
    private final /* synthetic */ w b;
    private final /* synthetic */ x c;
    private final /* synthetic */ y d;

    o(n nVar, w wVar, x xVar, y yVar) {
        this.f54a = nVar;
        this.b = wVar;
        this.c = xVar;
        this.d = yVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.b.a(this.c, this.d);
    }
}
