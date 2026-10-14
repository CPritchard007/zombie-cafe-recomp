package com.google.android.gms.internal;

import android.content.Context;
import android.view.MotionEvent;
import android.widget.RelativeLayout;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class de extends RelativeLayout {

    /* renamed from: a, reason: collision with root package name */
    private final hw f328a;

    public de(Context context, String str) {
        super(context);
        this.f328a = new hw(context, str);
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        this.f328a.a(motionEvent);
        return false;
    }
}
