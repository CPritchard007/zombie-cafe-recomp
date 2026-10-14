package com.capcom.zombiecafeandroidJP;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;
import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class y extends BroadcastReceiver {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f119a;

    y(ZombieCafeAndroid zombieCafeAndroid) {
        this.f119a = zombieCafeAndroid;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) throws IllegalStateException, IOException, IllegalArgumentException {
        Log.v("BROADCAST RECEIVER FIRED - USER", "AMAZING!");
        Log.v("BROADCAST RECEIVER FIRED - USER", "AMAZING!");
        Log.v("BROADCAST RECEIVER FIRED - USER", "AMAZING!");
        ZombieCafeAndroid.f = true;
        if (CC_Android.f66a) {
            return;
        }
        CC_Android.fromNative_loadMusic(0, ZombieCafeAndroid.x.GetMusicFilename(ZombieCafeAndroid.x.ai));
        CC_Android.fromNative_startMusic(0);
        if (ZombieCafeAndroid.ag != null) {
            ZombieCafeAndroid.ag.setEnabled(true);
        }
    }
}
