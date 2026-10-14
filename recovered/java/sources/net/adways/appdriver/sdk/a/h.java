package net.adways.appdriver.sdk.a;

import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class h implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    private /* synthetic */ g f622a;

    h(g gVar) {
        this.f622a = gVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            String strD = this.f622a.c.d(this.f622a.f621a);
            v.a(strD);
            this.f622a.b.loadUrl(strD);
        } catch (an e) {
            Log.e("appdriver-log", "failed to load cross wall view", e);
        }
    }
}
