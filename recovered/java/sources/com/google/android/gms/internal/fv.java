package com.google.android.gms.internal;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class fv implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ fs f373a;

    fv(fs fsVar) {
        this.f373a = fsVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        synchronized (this.f373a.f) {
            if (this.f373a.j.e != -2) {
                return;
            }
            this.f373a.c.f().a(this.f373a);
            if (this.f373a.j.e == -3) {
                ig.d("Loading URL in WebView: " + this.f373a.j.b);
                this.f373a.c.loadUrl(this.f373a.j.b);
            } else {
                ig.d("Loading HTML in WebView.");
                this.f373a.c.loadDataWithBaseURL(hq.a(this.f373a.j.b), this.f373a.j.c, "text/html", "UTF-8", null);
            }
        }
    }
}
