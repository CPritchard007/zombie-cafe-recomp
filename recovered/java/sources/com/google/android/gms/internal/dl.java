package com.google.android.gms.internal;

import android.R;
import android.app.Activity;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageButton;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class dl extends FrameLayout implements View.OnClickListener {

    /* renamed from: a, reason: collision with root package name */
    private final Activity f333a;
    private final ImageButton b;

    public dl(Activity activity, int i) {
        super(activity);
        this.f333a = activity;
        setOnClickListener(this);
        this.b = new ImageButton(activity);
        this.b.setImageResource(R.drawable.btn_dialog);
        this.b.setBackgroundColor(0);
        this.b.setOnClickListener(this);
        this.b.setPadding(0, 0, 0, 0);
        int iA = Cif.a(activity, i);
        addView(this.b, new FrameLayout.LayoutParams(iA, iA, 17));
    }

    public void a(boolean z) {
        this.b.setVisibility(z ? 4 : 0);
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        this.f333a.finish();
    }
}
