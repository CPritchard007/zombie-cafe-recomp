package com.capcom.a;

import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Bundle;
import android.util.Log;
import android.webkit.WebView;
import android.webkit.WebViewClient;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class m extends WebViewClient {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ j f27a;

    private m(j jVar) {
        this.f27a = jVar;
    }

    /* synthetic */ m(j jVar, m mVar) {
        this(jVar);
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView webView, String str) {
        super.onPageFinished(webView, str);
        this.f27a.f.dismiss();
        this.f27a.i.setBackgroundColor(0);
        this.f27a.h.setVisibility(0);
        this.f27a.g.setVisibility(0);
    }

    @Override // android.webkit.WebViewClient
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        Log.d("Facebook-WebView", "Webview loading URL: " + str);
        super.onPageStarted(webView, str, bitmap);
        this.f27a.f.show();
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        super.onReceivedError(webView, i, str, str2);
        this.f27a.e.a(new e(str, i, str2));
        this.f27a.dismiss();
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        Log.d("Facebook-WebView", "Redirect URL: " + str);
        if (!str.startsWith("fbconnect://success")) {
            if (str.startsWith("fbconnect://cancel")) {
                this.f27a.e.a();
                this.f27a.dismiss();
                return true;
            }
            if (str.contains("touch")) {
                return false;
            }
            this.f27a.getContext().startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
            return true;
        }
        Bundle bundleB = n.b(str);
        String string = bundleB.getString("error");
        if (string == null) {
            string = bundleB.getString("error_type");
        }
        if (string == null) {
            this.f27a.e.a(bundleB);
        } else if (string.equals("access_denied") || string.equals("OAuthAccessDeniedException")) {
            this.f27a.e.a();
        } else {
            this.f27a.e.a(new i(string));
        }
        this.f27a.dismiss();
        return true;
    }
}
