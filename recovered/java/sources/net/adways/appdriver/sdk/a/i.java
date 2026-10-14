package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.webkit.WebView;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class i extends r {
    public i(f fVar, Activity activity) {
        super(activity);
    }

    @Override // android.webkit.WebViewClient
    public final void onPageFinished(WebView webView, String str) {
        webView.setVisibility(0);
    }

    @Override // net.adways.appdriver.sdk.a.r, android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        boolean zShouldOverrideUrlLoading = super.shouldOverrideUrlLoading(webView, str);
        if (!str.startsWith("appdriver://") && !str.startsWith("appdrivers://")) {
            return zShouldOverrideUrlLoading;
        }
        this.f625a.finish();
        return true;
    }
}
