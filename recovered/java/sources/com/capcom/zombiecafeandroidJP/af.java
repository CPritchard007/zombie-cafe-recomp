package com.capcom.zombiecafeandroidJP;

import android.util.Log;
import android.view.MotionEvent;
import android.view.View;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class af implements View.OnTouchListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ac f81a;

    af(ac acVar) {
        this.f81a = acVar;
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        Log.v("CLOSE BUTTON", "CloseImage onTouch!!!!!!!!!!!");
        if (ZombieCafeAndroid.E != null) {
            CC_Android.fromNative_HideFixWebView(0, 0, true);
            if (this.f81a.f78a.O) {
                CC_Android.fromNative_StartInfobar(this.f81a.f78a.ap);
            }
        }
        return false;
    }
}
