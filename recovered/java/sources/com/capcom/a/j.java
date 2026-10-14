package com.capcom.a;

import android.R;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.res.Resources;
import android.os.Bundle;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class j extends Dialog {

    /* renamed from: a, reason: collision with root package name */
    static final float[] f24a = {20.0f, 60.0f};
    static final float[] b = {40.0f, 60.0f};
    static final FrameLayout.LayoutParams c = new FrameLayout.LayoutParams(-1, -1);
    private String d;
    private h e;
    private ProgressDialog f;
    private ImageView g;
    private WebView h;
    private FrameLayout i;

    public j(Context context, String str, h hVar) {
        super(context, R.style.Theme.Translucent.NoTitleBar);
        this.d = str;
        this.e = hVar;
    }

    private void a() throws Resources.NotFoundException {
        this.g = new ImageView(getContext());
        this.g.setOnClickListener(new l(this));
        this.g.setImageDrawable(getContext().getResources().getDrawable(2130837505));
        this.g.setVisibility(4);
    }

    private void a(int i) {
        LinearLayout linearLayout = new LinearLayout(getContext());
        this.h = new WebView(getContext());
        this.h.setVerticalScrollBarEnabled(false);
        this.h.setHorizontalScrollBarEnabled(false);
        this.h.setWebViewClient(new m(this, null));
        this.h.getSettings().setJavaScriptEnabled(true);
        this.h.loadUrl(this.d);
        this.h.setLayoutParams(c);
        this.h.setVisibility(4);
        linearLayout.setPadding(i, i, i, i);
        linearLayout.addView(this.h);
        this.i.addView(linearLayout);
    }

    @Override // android.app.Dialog
    protected void onCreate(Bundle bundle) throws Resources.NotFoundException {
        super.onCreate(bundle);
        this.f = new ProgressDialog(getContext());
        this.f.requestWindowFeature(1);
        this.f.setMessage("Loading...");
        requestWindowFeature(1);
        this.i = new FrameLayout(getContext());
        a();
        a(this.g.getDrawable().getIntrinsicWidth() / 2);
        this.i.addView(this.g, new ViewGroup.LayoutParams(-2, -2));
        addContentView(this.i, new ViewGroup.LayoutParams(-1, -1));
        setOnCancelListener(new k(this));
    }
}
