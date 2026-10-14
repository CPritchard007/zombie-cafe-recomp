package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.os.Handler;
import android.os.Looper;
import android.webkit.WebView;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class c implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ Activity f619a;
    final /* synthetic */ WebView b;
    final /* synthetic */ b c;

    c(b bVar, Activity activity, WebView webView) {
        this.c = bVar;
        this.f619a = activity;
        this.b = webView;
    }

    @Override // java.lang.Runnable
    public final void run() {
        new u(this.f619a, new a(this.c.e)).a();
        new Handler(Looper.getMainLooper()).post(new d(this));
    }
}
