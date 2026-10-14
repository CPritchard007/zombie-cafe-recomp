package com.capcom.zombiecafeandroidJP;

import android.util.Log;
import android.view.MotionEvent;
import android.view.View;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ag implements View.OnTouchListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ac f82a;

    ag(ac acVar) {
        this.f82a = acVar;
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        Log.v("RELOAD BUTTON", "HomeImage onTouch!!!!!!!!!!!");
        if (ZombieCafeAndroid.E != null) {
            CC_Android.fromNative_ReloadFixWebView(0, 0, true);
        }
        return false;
    }
}
