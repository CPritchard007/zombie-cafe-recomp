package com.capcom.billing;

import android.os.Handler;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class n implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ l f53a;
    private final /* synthetic */ boolean b;
    private final /* synthetic */ List c;
    private final /* synthetic */ Handler d;
    private final /* synthetic */ w e;

    n(l lVar, boolean z, List list, Handler handler, w wVar) {
        this.f53a = lVar;
        this.b = z;
        this.c = list;
        this.d = handler;
        this.e = wVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        x xVar = new x(0, "Inventory refresh successful.");
        y yVarA = null;
        try {
            yVarA = this.f53a.a(this.b, this.c);
        } catch (k e) {
            xVar = e.a();
        }
        this.f53a.d();
        this.d.post(new o(this, this.e, xVar, yVarA));
    }
}
