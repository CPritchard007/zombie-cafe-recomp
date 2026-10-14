package com.google.android.gms.internal;

import android.text.TextUtils;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import java.net.URI;
import java.net.URISyntaxException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class jr extends WebViewClient {

    /* renamed from: a, reason: collision with root package name */
    private final String f458a;
    private boolean b = false;
    private final ii c;
    private final fy d;

    public jr(fy fyVar, ii iiVar, String str) {
        this.f458a = b(str);
        this.c = iiVar;
        this.d = fyVar;
    }

    private String b(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        try {
            return str.endsWith("/") ? str.substring(0, str.length() - 1) : str;
        } catch (IndexOutOfBoundsException e) {
            ig.b(e.getMessage());
            return str;
        }
    }

    protected boolean a(String str) {
        boolean z = false;
        String strB = b(str);
        if (!TextUtils.isEmpty(strB)) {
            try {
                URI uri = new URI(strB);
                if ("passback".equals(uri.getScheme())) {
                    ig.a("Passback received");
                    this.d.b();
                    z = true;
                } else if (!TextUtils.isEmpty(this.f458a)) {
                    URI uri2 = new URI(this.f458a);
                    String host = uri2.getHost();
                    String host2 = uri.getHost();
                    String path = uri2.getPath();
                    String path2 = uri.getPath();
                    if (lo.a(host, host2) && lo.a(path, path2)) {
                        ig.a("Passback received");
                        this.d.b();
                        z = true;
                    }
                }
            } catch (URISyntaxException e) {
                ig.b(e.getMessage());
            }
        }
        return z;
    }

    @Override // android.webkit.WebViewClient
    public void onLoadResource(WebView webView, String str) {
        ig.a("JavascriptAdWebViewClient::onLoadResource: " + str);
        if (a(str)) {
            return;
        }
        this.c.f().onLoadResource(this.c, str);
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView webView, String str) {
        ig.a("JavascriptAdWebViewClient::onPageFinished: " + str);
        if (this.b) {
            return;
        }
        this.d.a();
        this.b = true;
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        ig.a("JavascriptAdWebViewClient::shouldOverrideUrlLoading: " + str);
        if (!a(str)) {
            return this.c.f().shouldOverrideUrlLoading(this.c, str);
        }
        ig.a("shouldOverrideUrlLoading: received passback url");
        return true;
    }
}
