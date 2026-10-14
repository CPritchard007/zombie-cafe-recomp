package com.capcom.zombiecafeandroidJP;

import android.util.Log;
import android.view.MotionEvent;
import android.view.View;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ad implements View.OnTouchListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ac f79a;

    ad(ac acVar) {
        this.f79a = acVar;
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        Log.v("SCROLLVIEW", "Infobar onTouch!!!!!!!!!!!");
        CC_Android.fromNative_ShowFixWebView(10, 20, 80, 80, this.f79a.f78a.aq.c, false, true);
        CC_Android.fromNative_HideInfobar(0, 0, true);
        CC_Android.fromNative_HideWebViewInfobar(0, 0, true);
        return true;
    }
}
