package com.capcom.zombiecafeandroidJP;

import android.util.Log;
import android.view.MotionEvent;
import android.view.View;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ae implements View.OnTouchListener {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ac f80a;

    ae(ac acVar) {
        this.f80a = acVar;
    }

    @Override // android.view.View.OnTouchListener
    public boolean onTouch(View view, MotionEvent motionEvent) {
        Log.v("CLOSE BUTTON", "CloseImage onTouch!!!!!!!!!!!");
        if (ZombieCafeAndroid.C != null) {
            CC_Android.fromNative_HideWebViewInfobar(0, 0, true);
        }
        return true;
    }
}
