package com.google.android.gms.internal;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.os.Build;
import android.os.Bundle;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.accessibility.AccessibilityEventCompat;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.Window;
import android.webkit.WebChromeClient;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import com.google.android.gms.ads.AdActivity;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class db extends dq {

    /* renamed from: a, reason: collision with root package name */
    private static final int f326a = Color.argb(0, 0, 0, 0);
    private final Activity b;
    private ch c;
    private di d;
    private ii e;
    private df f;
    private dl g;
    private boolean h;
    private FrameLayout i;
    private WebChromeClient.CustomViewCallback j;
    private boolean k = false;
    private boolean l = false;
    private boolean m = false;
    private RelativeLayout n;

    public db(Activity activity) {
        this.b = activity;
    }

    public static void a(Context context, ch chVar) {
        Intent intent = new Intent();
        intent.setClassName(context, AdActivity.CLASS_NAME);
        intent.putExtra("com.google.android.gms.ads.internal.overlay.useClientJar", chVar.n.e);
        ch.a(intent, chVar);
        intent.addFlags(AccessibilityEventCompat.TYPE_GESTURE_DETECTION_END);
        if (!(context instanceof Activity)) {
            intent.addFlags(268435456);
        }
        context.startActivity(intent);
    }

    private static RelativeLayout.LayoutParams c(int i, int i2, int i3, int i4) {
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(i3, i4);
        layoutParams.setMargins(i, i2, 0, 0);
        layoutParams.addRule(10);
        layoutParams.addRule(9);
        return layoutParams;
    }

    private void c(boolean z) throws dd {
        if (!this.h) {
            this.b.requestWindowFeature(1);
        }
        Window window = this.b.getWindow();
        if (!this.m || this.c.q.c) {
            window.setFlags(1024, 1024);
        }
        a(this.c.k);
        if (Build.VERSION.SDK_INT >= 11) {
            ig.a("Enabling hardware acceleration on the AdActivity window.");
            ia.a(window);
        }
        this.n = new de(this.b, this.c.p);
        if (this.m) {
            this.n.setBackgroundColor(f326a);
        } else {
            this.n.setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        }
        this.b.setContentView(this.n);
        j();
        boolean zA = this.c.e.f().a();
        if (z) {
            this.e = ii.a(this.b, this.c.e.e(), true, zA, null, this.c.n);
            this.e.f().a(null, null, this.c.f, this.c.j, true, this.c.o);
            this.e.f().a(new dc(this));
            if (this.c.m != null) {
                this.e.loadUrl(this.c.m);
            } else {
                if (this.c.i == null) {
                    throw new dd("No URL or HTML to display in ad overlay.");
                }
                this.e.loadDataWithBaseURL(this.c.g, this.c.i, "text/html", "UTF-8", null);
            }
        } else {
            this.e = this.c.e;
            this.e.setContext(this.b);
        }
        this.e.a(this);
        ViewParent parent = this.e.getParent();
        if (parent != null && (parent instanceof ViewGroup)) {
            ((ViewGroup) parent).removeView(this.e);
        }
        if (this.m) {
            this.e.setBackgroundColor(f326a);
        }
        this.n.addView(this.e, -1, -1);
        if (!z) {
            this.e.c();
        }
        a(zA);
    }

    private void l() {
        if (!this.b.isFinishing() || this.l) {
            return;
        }
        this.l = true;
        if (this.b.isFinishing()) {
            if (this.e != null) {
                this.e.b();
                this.n.removeView(this.e);
                if (this.f != null) {
                    this.e.a(false);
                    this.f.c.addView(this.e, this.f.f329a, this.f.b);
                }
            }
            if (this.c == null || this.c.d == null) {
                return;
            }
            this.c.d.o();
        }
    }

    public void a() {
        this.b.finish();
    }

    public void a(int i) {
        this.b.setRequestedOrientation(i);
    }

    public void a(int i, int i2, int i3, int i4) {
        if (this.d != null) {
            this.d.setLayoutParams(c(i, i2, i3, i4));
        }
    }

    @Override // com.google.android.gms.internal.dp
    public void a(Bundle bundle) throws dd {
        this.k = bundle != null ? bundle.getBoolean("com.google.android.gms.ads.internal.overlay.hasResumed", false) : false;
        try {
            this.c = ch.a(this.b.getIntent());
            if (this.c == null) {
                throw new dd("Could not get info for ad overlay.");
            }
            if (this.c.q != null) {
                this.m = this.c.q.b;
            } else {
                this.m = false;
            }
            if (bundle == null) {
                if (this.c.d != null) {
                    this.c.d.p();
                }
                if (this.c.l != 1 && this.c.c != null) {
                    this.c.c.r();
                }
            }
            switch (this.c.l) {
                case 1:
                    c(false);
                    return;
                case 2:
                    this.f = new df(this.c.e);
                    c(false);
                    return;
                case 3:
                    c(true);
                    return;
                case 4:
                    if (this.k) {
                        this.b.finish();
                        return;
                    } else {
                        if (cz.a(this.b, this.c.b, this.c.j)) {
                            return;
                        }
                        this.b.finish();
                        return;
                    }
                default:
                    throw new dd("Could not determine ad overlay type.");
            }
        } catch (dd e) {
            ig.e(e.getMessage());
            this.b.finish();
        }
    }

    public void a(View view, WebChromeClient.CustomViewCallback customViewCallback) {
        this.i = new FrameLayout(this.b);
        this.i.setBackgroundColor(ViewCompat.MEASURED_STATE_MASK);
        this.i.addView(view, -1, -1);
        this.b.setContentView(this.i);
        j();
        this.j = customViewCallback;
    }

    public void a(boolean z) {
        this.g = new dl(this.b, z ? 50 : 32);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams.addRule(10);
        layoutParams.addRule(z ? 11 : 9);
        this.g.a(this.c.h);
        this.n.addView(this.g, layoutParams);
    }

    public di b() {
        return this.d;
    }

    public void b(int i, int i2, int i3, int i4) {
        if (this.d == null) {
            this.d = new di(this.b, this.e);
            this.n.addView(this.d, 0, c(i, i2, i3, i4));
            this.e.f().a(false);
        }
    }

    @Override // com.google.android.gms.internal.dp
    public void b(Bundle bundle) {
        bundle.putBoolean("com.google.android.gms.ads.internal.overlay.hasResumed", this.k);
    }

    public void b(boolean z) {
        if (this.g != null) {
            this.g.a(z);
        }
    }

    public void c() {
        if (this.c != null) {
            a(this.c.k);
        }
        if (this.i != null) {
            this.b.setContentView(this.n);
            j();
            this.i.removeAllViews();
            this.i = null;
        }
        if (this.j != null) {
            this.j.onCustomViewHidden();
            this.j = null;
        }
    }

    @Override // com.google.android.gms.internal.dp
    public void d() {
    }

    @Override // com.google.android.gms.internal.dp
    public void e() {
    }

    @Override // com.google.android.gms.internal.dp
    public void f() {
        if (this.c != null && this.c.l == 4) {
            if (this.k) {
                this.b.finish();
            } else {
                this.k = true;
            }
        }
        if (this.e != null) {
            hq.b(this.e);
        }
    }

    @Override // com.google.android.gms.internal.dp
    public void g() {
        if (this.d != null) {
            this.d.c();
        }
        c();
        if (this.e != null && (!this.b.isFinishing() || this.f == null)) {
            hq.a(this.e);
        }
        l();
    }

    @Override // com.google.android.gms.internal.dp
    public void h() {
        l();
    }

    @Override // com.google.android.gms.internal.dp
    public void i() {
        if (this.d != null) {
            this.d.a();
        }
        if (this.e != null) {
            this.n.removeView(this.e);
        }
        l();
    }

    @Override // com.google.android.gms.internal.dp
    public void j() {
        this.h = true;
    }

    public void k() {
        this.n.removeView(this.g);
        a(true);
    }
}
