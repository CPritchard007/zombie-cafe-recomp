package net.adways.appdriver.sdk.a;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.util.Log;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class r extends WebViewClient {

    /* renamed from: a, reason: collision with root package name */
    protected Activity f625a;
    protected Bundle b;
    private ExecutorService c = null;

    public r(Activity activity) {
        this.f625a = activity;
    }

    public r(Activity activity, Bundle bundle) {
        this.f625a = activity;
        this.b = bundle;
    }

    private void a(String str) {
        Intent intent = new Intent();
        intent.setAction("android.intent.action.VIEW");
        intent.setData(Uri.parse(str));
        this.f625a.startActivity(intent);
    }

    @Override // android.webkit.WebViewClient
    public void onLoadResource(WebView webView, String str) {
        boolean zA = false;
        try {
            if (this.b == null || str.indexOf("track.gif") == -1) {
                return;
            }
            Uri uri = Uri.parse(str);
            String queryParameter = uri.getQueryParameter("campaign_id");
            String queryParameter2 = uri.getQueryParameter("package");
            String queryParameter3 = uri.getQueryParameter("uri");
            if (queryParameter == null || "".equals(queryParameter)) {
                return;
            }
            if (queryParameter2 != null && !"".equals(queryParameter2)) {
                zA = v.b(this.f625a, queryParameter2.toString());
            } else if (queryParameter3 != null && !"".equals(queryParameter3)) {
                zA = v.a(this.f625a, queryParameter3.toString());
            }
            if (zA) {
                this.b.putInt("campaign_id", Integer.parseInt(queryParameter));
                if (this.c == null) {
                    this.c = Executors.newCachedThreadPool();
                }
                this.c.execute(new s(this));
            }
        } catch (Throwable th) {
            Log.e("appdriver-log", "SDK internal error", th);
        }
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        v.a("override url:" + str);
        if (str != null) {
            String queryParameter = Uri.parse(str).getQueryParameter("handler");
            if (str.equals("command://exit")) {
                this.f625a.finish();
                return true;
            }
            if (str.startsWith("appdriver://")) {
                a(str.replace("appdriver://", "http://"));
                return true;
            }
            if (str.startsWith("appdrivers://")) {
                a(str.replace("appdrivers://", "https://"));
                return true;
            }
            if (queryParameter != null && queryParameter.equals("internal:detect_uri")) {
                a(str);
                return true;
            }
        }
        return false;
    }
}
