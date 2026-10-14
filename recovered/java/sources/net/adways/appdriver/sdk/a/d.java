package net.adways.appdriver.sdk.a;

import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class d implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    private /* synthetic */ c f620a;

    d(c cVar) {
        this.f620a = cVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            String strD = this.f620a.c.d(this.f620a.f619a);
            v.a(strD);
            this.f620a.b.loadUrl(strD);
        } catch (an e) {
            Log.e("appdriver-log", "failed to load cross wall view", e);
        }
    }
}
