package com.capcom.zombiecafeandroidJP;

import android.graphics.Bitmap;
import android.util.Log;
import android.view.KeyEvent;
import android.webkit.WebView;
import android.webkit.WebViewClient;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class am extends WebViewClient {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f88a;

    am(ZombieCafeAndroid zombieCafeAndroid) {
        this.f88a = zombieCafeAndroid;
    }

    @Override // android.webkit.WebViewClient
    public void onLoadResource(WebView webView, String str) {
        Log.d("onLoadResource", "/========== START ==========/");
        super.onLoadResource(webView, str);
        Log.d("onLoadResource", "/========== END ==========/");
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView webView, String str) {
        Log.d("onPageFinished", "/========== START ==========/");
        super.onPageFinished(webView, str);
        Log.d("onPageFinished", "/========== END ==========/");
    }

    @Override // android.webkit.WebViewClient
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        Log.d("onPageStarted", "/========== START ==========/");
        super.onPageStarted(webView, str, bitmap);
        Log.d("onPageStarted", "/========== END ==========/");
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        Log.d("onReceivedError", "/========== START ==========/");
        webView.loadUrl("file:///android_asset/data/errorMsg.html");
        Log.d("onReceivedError", "/========== END ==========/");
    }

    @Override // android.webkit.WebViewClient
    public void onUnhandledKeyEvent(WebView webView, KeyEvent keyEvent) {
        Log.d("onLoadResource", "/========== START ==========/");
        super.onUnhandledKeyEvent(webView, keyEvent);
        Log.d("onLoadResource", "/========== END ==========/");
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        return super.shouldOverrideUrlLoading(webView, str);
    }
}
