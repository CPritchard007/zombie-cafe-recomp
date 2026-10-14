package com.capcom.zombiecafeandroidJP;

import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class ar implements Runnable {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f93a;

    ar(ZombieCafeAndroid zombieCafeAndroid) {
        this.f93a = zombieCafeAndroid;
    }

    @Override // java.lang.Runnable
    public void run() {
        Log.v("END DIALIOG TIMER WENT OFF", "DO SOMETHING...");
        ZombieCafeAndroid.aL.dismiss();
        ZombieCafeAndroid.DialogCallBack();
        CC_Android.fromNative_CCOptionsSetBool("EULA", true);
    }
}
