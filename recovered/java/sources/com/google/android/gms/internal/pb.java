package com.google.android.gms.internal;

import android.content.Context;
import android.view.MotionEvent;
import android.widget.ViewSwitcher;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
final class pb extends ViewSwitcher {

    /* renamed from: a, reason: collision with root package name */
    private final hw f520a;

    public pb(Context context) {
        super(context);
        this.f520a = new hw(context);
    }

    @Override // android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        this.f520a.a(motionEvent);
        return false;
    }
}
