package com.capcom.billing;

import android.os.Handler;
import android.util.Log;
import java.util.ArrayList;
import java.util.List;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class p implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ l f55a;
    private final /* synthetic */ List b;
    private final /* synthetic */ s c;
    private final /* synthetic */ Handler d;
    private final /* synthetic */ t e;

    p(l lVar, List list, s sVar, Handler handler, t tVar) {
        this.f55a = lVar;
        this.b = list;
        this.c = sVar;
        this.d = handler;
        this.e = tVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        ArrayList arrayList = new ArrayList();
        for (z zVar : this.b) {
            try {
                Log.e("IabHelper", "consumeAsyncInternal before consume");
                this.f55a.a(zVar);
                Log.e("IabHelper", "consumeAsyncInternal after consume");
                arrayList.add(new x(0, "Successful consume of sku " + zVar.b()));
            } catch (k e) {
                arrayList.add(e.a());
            }
        }
        this.f55a.d();
        if (this.c != null) {
            this.d.post(new q(this, this.c, this.b, arrayList));
        }
        if (this.e != null) {
            this.d.post(new r(this, this.e, this.b, arrayList));
        }
    }
}
