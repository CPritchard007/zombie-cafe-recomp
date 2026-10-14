package com.google.android.gms.internal;

import android.net.Uri;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import java.util.HashMap;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class ik extends WebViewClient {

    /* renamed from: a, reason: collision with root package name */
    protected final ii f430a;
    private oy d;
    private dh e;
    private im f;
    private aq g;
    private bc i;
    private be j;
    private boolean k;
    private dm l;
    private final HashMap b = new HashMap();
    private final Object c = new Object();
    private boolean h = false;

    public ik(ii iiVar, boolean z) {
        this.f430a = iiVar;
        this.k = z;
    }

    private static boolean a(Uri uri) {
        String scheme = uri.getScheme();
        return "http".equalsIgnoreCase(scheme) || "https".equalsIgnoreCase(scheme);
    }

    private void b(Uri uri) {
        String path = uri.getPath();
        bb bbVar = (bb) this.b.get(path);
        if (bbVar == null) {
            ig.d("No GMSG handler found for GMSG: " + uri);
            return;
        }
        Map mapA = hq.a(uri);
        if (ig.a(2)) {
            ig.d("Received GMSG: " + path);
            for (String str : mapA.keySet()) {
                ig.d("  " + str + ": " + ((String) mapA.get(str)));
            }
        }
        bbVar.a(this.f430a, mapA);
    }

    public final void a(ce ceVar) {
        boolean zI = this.f430a.i();
        a(new ch(ceVar, (!zI || this.f430a.e().e) ? this.d : null, zI ? null : this.e, this.l, this.f430a.h()));
    }

    protected void a(ch chVar) {
        db.a(this.f430a.getContext(), chVar);
    }

    public final void a(im imVar) {
        this.f = imVar;
    }

    public void a(oy oyVar, dh dhVar, aq aqVar, dm dmVar, boolean z, bc bcVar) {
        a("/appEvent", new ap(aqVar));
        a("/canOpenURLs", ar.b);
        a("/click", ar.c);
        a("/close", ar.d);
        a("/customClose", ar.e);
        a("/httpTrack", ar.f);
        a("/log", ar.g);
        a("/open", new bf(bcVar));
        a("/touch", ar.h);
        a("/video", ar.i);
        this.d = oyVar;
        this.e = dhVar;
        this.g = aqVar;
        this.i = bcVar;
        this.l = dmVar;
        a(z);
    }

    public void a(oy oyVar, dh dhVar, aq aqVar, dm dmVar, boolean z, bc bcVar, be beVar) {
        a(oyVar, dhVar, aqVar, dmVar, z, bcVar);
        a("/setInterstitialProperties", new bd(beVar));
        this.j = beVar;
    }

    public final void a(String str, bb bbVar) {
        this.b.put(str, bbVar);
    }

    public final void a(boolean z) {
        this.h = z;
    }

    public final void a(boolean z, int i) {
        a(new ch((!this.f430a.i() || this.f430a.e().e) ? this.d : null, this.e, this.l, this.f430a, z, i, this.f430a.h()));
    }

    public final void a(boolean z, int i, String str) {
        boolean zI = this.f430a.i();
        a(new ch((!zI || this.f430a.e().e) ? this.d : null, zI ? null : this.e, this.g, this.l, this.f430a, z, i, str, this.f430a.h(), this.i));
    }

    public final void a(boolean z, int i, String str, String str2) {
        boolean zI = this.f430a.i();
        a(new ch((!zI || this.f430a.e().e) ? this.d : null, zI ? null : this.e, this.g, this.l, this.f430a, z, i, str, str2, this.f430a.h(), this.i));
    }

    public boolean a() {
        boolean z;
        synchronized (this.c) {
            z = this.k;
        }
        return z;
    }

    public final void b() {
        synchronized (this.c) {
            this.b.clear();
            this.d = null;
            this.e = null;
            this.f = null;
            this.g = null;
            this.h = false;
            this.k = false;
            this.i = null;
            this.l = null;
        }
    }

    public final void c() {
        synchronized (this.c) {
            this.h = false;
            this.k = true;
            db dbVarD = this.f430a.d();
            if (dbVarD != null) {
                if (Cif.b()) {
                    dbVarD.k();
                } else {
                    Cif.f427a.post(new il(this, dbVarD));
                }
            }
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onLoadResource(WebView webView, String str) {
        ig.d("Loading resource: " + str);
        Uri uri = Uri.parse(str);
        if ("gmsg".equalsIgnoreCase(uri.getScheme()) && "mobileads.google.com".equalsIgnoreCase(uri.getHost())) {
            b(uri);
        }
    }

    @Override // android.webkit.WebViewClient
    public final void onPageFinished(WebView webView, String str) {
        if (this.f != null) {
            this.f.a(this.f430a);
            this.f = null;
        }
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        Uri uri;
        ig.d("AdWebView shouldOverrideUrlLoading: " + str);
        Uri uriA = Uri.parse(str);
        if ("gmsg".equalsIgnoreCase(uriA.getScheme()) && "mobileads.google.com".equalsIgnoreCase(uriA.getHost())) {
            b(uriA);
        } else {
            if (this.h && webView == this.f430a && a(uriA)) {
                return super.shouldOverrideUrlLoading(webView, str);
            }
            if (this.f430a.willNotDraw()) {
                ig.e("AdWebView unable to handle URL: " + str);
            } else {
                try {
                    nq nqVarG = this.f430a.g();
                    if (nqVarG != null && nqVarG.b(uriA)) {
                        uriA = nqVarG.a(uriA, this.f430a.getContext());
                    }
                    uri = uriA;
                } catch (ob e) {
                    ig.e("Unable to append parameter to URL: " + str);
                    uri = uriA;
                }
                a(new ce("android.intent.action.VIEW", uri.toString(), null, null, null, null, null));
            }
        }
        return true;
    }
}
